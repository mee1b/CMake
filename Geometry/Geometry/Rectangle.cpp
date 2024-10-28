#include <iostream>
#include "geometry.h"

Rectangle::Rectangle()
{
	name = "Прямоугольник";
}
void Rectangle::get_side(int a, int b, int c, int d)
{
	if ((a != c) && (b != d))
	{
		c = a;
		d = b;
	}
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
}
void Rectangle::get_corner(const int a, const int b, const int c, const int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
}
