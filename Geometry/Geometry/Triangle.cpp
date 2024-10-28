#include <iostream>
#include "geometry.h"

Triangle::Triangle()
{
	name = "Треугольник";
	side_a = 0;
	side_b = 0;
	side_c = 0;

	corner_a = 0;
	corner_b = 0;
	corner_c = 0;
}
void Triangle::get_side(int a, int b, int c)
{
	side_a = a;
	side_b = b;
	side_c = c;
}
void Triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
}
void Triangle::print_info() const
{
	std::cout << name << ":\n";
	std::cout << "Стороны: а = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
	std::cout << "Углы: А = " << corner_a << " B = " << corner_b << " C = " << corner_c << std::endl << std::endl;
}
