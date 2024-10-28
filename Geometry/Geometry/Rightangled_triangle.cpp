#include <iostream>
#include "geometry.h"


Rightangled_triangle::Rightangled_triangle()
{
	name = "Прямоугольный треугольник";
}
void Rightangled_triangle::get_corner(int a, int b, const int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
}
