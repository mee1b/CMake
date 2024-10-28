#include <iostream>
#include "geometry.h"


Quadrilateral::Quadrilateral()
{
	name = "Четырехугольник";
	side_a = 0;
	side_b = 0;
	side_c = 0;
	side_d = 0;

	corner_a = 0;
	corner_b = 0;
	corner_c = 0;
	corner_d = 0;
}
void Quadrilateral::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
}
void Quadrilateral::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
}
void Quadrilateral::print_info() const
{
	std::cout << name << ":\n";
	std::cout << "Стороны: а = " << side_a << " b = " << side_b << " c = " << side_c << " d = " << side_d << std::endl;
	std::cout << "Углы: А = " << corner_a << " B = " << corner_b << " C = " << corner_c << " D = " << corner_d << std::endl << std::endl;
}