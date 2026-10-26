// Smart Kitchen LPG Gas Safety System
// Editable OpenSCAD enclosure
// Units: millimetres
// Prototype dimensions: 160 x 110 x 45 mm

$fn = 48;

// Main dimensions
length = 160;
width = 110;
height = 45;
wall = 2.4;
floor_thickness = 3;

// Select model:
// "base" = enclosure base
// "lid" = enclosure lid
// "assembly" = preview of both parts
part = "base";

// Lid parameters
lid_thickness = 3;
lid_overlap = 1.5;

// OLED opening
oled_width = 24;
oled_height = 13;

// Mounting holes
hole_diameter = 3.2;
hole_offset = 8;

// Main base
module enclosure_base() {
difference() {
cube([length, width, height]);

    // Hollow interior, leaving floor and walls
    translate([wall, wall, floor_thickness])
        cube([
            length - 2*wall,
            width - 2*wall,
            height
        ]);

    // OLED opening on front wall
    translate([
        (length - oled_width)/2,
        -0.1,
        20
    ])
        cube([oled_width, wall + 0.2, oled_height]);

    // Buzzer sound holes on front wall
    for (x = [-12, -6, 0, 6, 12])
        translate([
            length/2 + x,
            -0.1,
            10
        ])
            rotate([-90, 0, 0])
                cylinder(h = wall + 0.2, d = 2);

    // LED opening on front wall
    translate([length - 18, -0.1, 31])
        rotate([-90, 0, 0])
            cylinder(h = wall + 0.2, d = 5);

    // Four floor mounting holes
    for (x = [hole_offset, length-hole_offset])
        for (y = [hole_offset, width-hole_offset])
            translate([x, y, -0.1])
                cylinder(
                    h = floor_thickness + 0.2,
                    d = hole_diameter
                );
}

}

// Separate lid
module enclosure_lid() {
difference() {
cube([
length,
width,
lid_thickness
]);

    // Screw holes near the corners
    for (x = [hole_offset, length-hole_offset])
        for (y = [hole_offset, width-hole_offset])
            translate([x, y, -0.1])
                cylinder(
                    h = lid_thickness + 0.2,
                    d = hole_diameter
                );
}

}

// Display selected part
if (part == "base") {
enclosure_base();
}
else if (part == "lid") {
enclosure_lid();
}
else if (part == "assembly") {
color("lightgray")
enclosure_base();

color("silver")
    translate([0, 0, height])
        enclosure_lid();

}
