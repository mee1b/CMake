// Geometry.cpp: определяет точку входа для приложения.
//

#include "Geometry.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle t;
	t.get_corner(10, 20, 30);
	t.get_side(50, 60, 70);
	t.print_info();

	Equilateral_triangle e;
	e.get_side(50, 300, 1520);
	e.get_corner(15);
	e.print_info();

	Isosceles_triangle i;
	i.get_side(30, 40, 100);
	i.get_corner(60, 70, 50);
	i.print_info();

	Rightangled_triangle r;
	r.get_side(10, 20, 30);
	r.get_corner(45, 45, 100);
	r.print_info();

	Quadrilateral q;
	q.get_side(50, 60, 70, 80);
	q.get_corner(80, 70, 50, 120);
	q.print_info();

	Rectangle re;
	re.get_side(50, 80, 110, 30);
	re.get_corner();
	re.print_info();

	Square s;
	s.get_side(50, 70, 20, 33);
	s.get_corner();
	s.print_info();

	Parallelogram p;
	p.get_side(20, 85, 30, 12);
	p.get_corner(70, 99, 25, 13);
	p.print_info();

	Rhomb rh;
	rh.get_side(50, 70, 90, 120);
	rh.get_corner(90, 100, 150, 30);
	rh.print_info();



	return EXIT_SUCCESS;
}