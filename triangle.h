#ifndef CERCLE_H
#define CERCLE_H
#include "structure.triangle.h";

class Triangle
{

private:
	Point a,b,c;

public:
    Triangle();
    Triangle(Point const&, Point const&, Point const&);
    ~Triangle();

    void set_PointA(Point const&);
    Point const& get_PointA() const;

    void set_PointB(Point const&);
    Point const& get_PointB() const;

    void set_PointC(Point const&);
    Point const& get_PointC() const;

    const float Get_AB() const;
    const float Get_AC() const;
    const float Get_BC() const;

    const float get_base() const;
    const float get_hauteur() const;
    const double get_surface() const;
    const float get_longueur() const;

    const bool isosceles() const;
    const bool rectangle() const;
    const bool equilateral() const;

};
#endif ;// CERCLE_H