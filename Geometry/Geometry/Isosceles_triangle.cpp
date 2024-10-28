#include <iostream>
#include "geometry.h"


Isosceles_triangle::Isosceles_triangle()
{
	name = "Равнобедренный треугольник";
}
void Isosceles_triangle::get_side(int a, int b, int c)
{
	if (a != c)
	{
		c = a;
	}
	side_a = a;
	side_b = b;
	side_c = c;
}
void Isosceles_triangle::get_corner(int a, int b, int c)
{
	if (a != c)
	{
		c = a;
	}
	corner_a = a;
	corner_b = b;
	corner_c = c;
}
