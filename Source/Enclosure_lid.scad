// Smart Kitchen LPG Safety System
// Flat enclosure lid
// Units: mm

$fn = 48;

length = 160;
width = 110;
thickness = 3;
hole_d = 3.2;
offset = 8;

difference() {
cube([length, width, thickness]);

for (x = [offset, length-offset])
    for (y = [offset, width-offset])
        translate([x, y, -0.1])
            cylinder(
                h = thickness + 0.2,
                d = hole_d
            );

}
