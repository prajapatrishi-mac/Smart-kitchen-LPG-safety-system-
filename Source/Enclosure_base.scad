// Smart Kitchen LPG Safety System
// Enclosure base
// Units: mm

$fn = 48;

length = 160;
width = 110;
height = 45;
wall = 2.4;
floor = 3;
hole_d = 3.2;
offset = 8;

difference() {
cube([length, width, height]);

translate([wall, wall, floor])
    cube([
        length - 2*wall,
        width - 2*wall,
        height
    ]);

// OLED opening on front side
translate([68, -0.1, 20])
    cube([24, wall + 0.2, 13]);

// Buzzer holes
for (x = [68, 74, 80, 86, 92])
    translate([x, -0.1, 10])
        rotate([-90, 0, 0])
            cylinder(h = wall + 0.2, d = 2);

// LED hole
translate([142, -0.1, 31])
    rotate([-90, 0, 0])
        cylinder(h = wall + 0.2, d = 5);

// Base mounting holes
for (x = [offset, length-offset])
    for (y = [offset, width-offset])
        translate([x, y, -0.1])
            cylinder(h = floor + 0.2, d = hole_d);

}
