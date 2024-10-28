#pragma once
class Triangle
{
protected:
	int side_a, side_b, side_c;
	int corner_a, corner_b, corner_c;
	std::string name;
public:
	Triangle();
	virtual void get_side(int a, int b, int c);
	virtual void get_corner(int a, int b, int c);
	void print_info() const;
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle();
	void get_side(int a, const int b = 0, const int c = 0) override;
	void get_corner(const int a = 60, const int b = 60, const int c = 60);
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle();
	void get_side(int a, int b, int c = 0) override;
	void get_corner(int a, int b, int c = 0) override;
};

class Rightangled_triangle : public Triangle
{
public:
	Rightangled_triangle();
	void get_corner(int a, int b, const int c = 90) override;
};

class Quadrilateral
{
protected:
	int side_a, side_b, side_c, side_d;
	int corner_a, corner_b, corner_c, corner_d;
	std::string name;
public:
	Quadrilateral();
	virtual void get_side(int a, int b, int c, int d);
	virtual void get_corner(int a, int b, int c, int d);
	void print_info() const;
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle();
	void get_side(int a, int b, int c = 0, int d = 0) override;
	void get_corner(const int a = 90, const int b = 90, const int c = 90, const int d = 90) override;
};

class Square : public Rectangle
{
public:
	Square();
	void get_side(int a, int b, int c, int d) override;
};

class Parallelogram : public Rectangle
{
public:
	Parallelogram();
	void get_corner(int a, int b, int c, int d) override;
};

class Rhomb : public Square
{
public:
	Rhomb();
	void get_corner(int a, int b, int c, int d);
};