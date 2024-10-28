#include <iostream>
#include "geometry.h"

Parallelogram::Parallelogram()
{
	name = "ֿאנאככוכמדנאלל";
}
void Parallelogram::get_corner(int a, int b, int c, int d)
{
	if ((a != c) && (b != d))
	{
		c = a;
		d = b;
	}
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
}