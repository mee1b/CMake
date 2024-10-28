#include <iostream>
#include "geometry.h"


Equilateral_triangle::Equilateral_triangle()
{
	name = "Равносторонний треугольник";
}
void Equilateral_triangle::get_side(int a, const int b, const int c)
{
	side_a = a;
	side_b = a;
	side_c = a;
}
void Equilateral_triangle::get_corner(const int a, const int b, const int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
}