#ifndef SHAPE_H
#define SHAPE_H

#include <cmath>

class Shape
{
public:
	virtual void resize_by_percentage(double pct) = 0;
};

/*note: class name can't start with number.
  if you do it,will get an error :
  1. declaration of anonymous class must be a definition(clang++)
  2. expected identifier before numeric constant(g++)*/

class Shape_2D : public Shape {
public:
	Shape_2D() = default;
	Shape_2D(double x,double y):
		_x(x),_y(y) { }
	virtual double area() const = 0;
	virtual double circumference() const = 0;
protected:
	double _x;
	double _y;
};

class Shape_3D : public Shape {
public:
	Shape_3D() = default;
	Shape_3D(double x,double y,double z) :
		_x(x),_y(y),_z(z) { }
	virtual double surface() const = 0;
	virtual double volumn() const = 0;
protected:
	double _x;
	double _y;
	double _z;
};

class Rect : public Shape_2D {
public:
	Rect() = default;
	Rect(double x,double y) :
		Shape_2D(x,y) { }
	double circumference() const override {
		return 2 * (fabs(_x) + fabs(_y));
	}
	double area() const override {
		return fabs(_x) * fabs(_y);
	}
	void resize_by_percentage(double ptc) override {
		_x *= ptc;
		_y *= ptc;
	}
};

class Circular : public Shape_2D {
public:
	Circular() = default;
	Circular(double r) :
		radius(r) { }
	double circumference() const override{
		return 2 * M_PI * radius; 
	}
	double area() const override{
		return M_PI * radius * radius;
	}
	void resize_by_percentage(double ptc) override {
		radius *= ptc;
	}
private:
	double radius;
};

class Ball : public Shape_3D {
public:
	Ball() = default;
	Ball(double r) :
		radius(r) { }
	double surface() const override {
		return 4 * M_PI * radius * radius;
	}
	double volumn() const override {
		return 3/4 * M_PI * std::pow(radius, 3);
	}
	void resize_by_percentage(double ptc) override {
		radius *= ptc;
	}
private:
	double radius;
};

#endif