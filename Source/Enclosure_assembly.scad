// Smart Kitchen LPG Safety System
// Assembly preview
// Units: mm

include <kitchen_enclosure.scad>;

// Show base and lid together
color("lightgray")
enclosure_base();

color("silver")
translate([0, 0, height])
enclosure_lid();
