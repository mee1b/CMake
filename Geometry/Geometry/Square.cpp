#include <iostream>
#include "geometry.h"

Square::Square()
{
	name = " вадрат";
}
void Square::get_side(int a, int b, int c, int d)
{
	d = a;
	c = a;
	b = a;
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
}