#include <math.h>
#include "triangle.h"

Triangle::Triangle(Point const& a, Point const& b, Point const& c) {//Définition des coordonnées des points a,b et c
    this->a.x = a.x;
    this->a.y = a.y;
    this->b.x = b.x;
    this->b.y = b.y;
    this->c.x = c.x;
    this->c.y = c.y;
}

void Triangle::set_PointA(Point const& a) {//Fonction Set du point A
    this->a.x = a.x;
    this->a.y = a.y;
}

Point const& Triangle::get_PointA(void) const {//Fonction Get du point A
    return (this->a);
}

void Triangle::set_PointB(Point const& b) {//Fonction Set du point B
    this->b.x = b.x;
    this->b.y = b.y;
}

Point const& Triangle::get_PointB(void) const {//Fonction Get du point B
    return (this->b);
}

void Triangle::set_PointC(Point const& c) {//Fonction Set du point C
    this->c.x = c.x;
    this->c.y = c.y;
}

Point const& Triangle::get_PointC(void) const {//Fonction Get du point C
    return (this->c);
}

const float Triangle::Get_AB() const {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

const float Triangle::Get_AC() const {
    return sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
}

const float Triangle::Get_BC() const {
    return sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
}

const float Triangle::get_base(void) const {
    float base = (Get_AB() > Get_AC()) ? Get_AB() : Get_AC();

    return ((Get_BC() > base) ? Get_BC() : base);
}

const float Triangle::get_hauteur(void) const {
    return ((2 * get_surface()) / get_base());
}

const double Triangle::get_surface(void) const {
    float s = (Get_AB() + Get_AC() + Get_BC()) / 2;

    return (sqrt(s * (s - Get_AB()) * (s - Get_AC()) * (s - Get_BC())));
}

const float Triangle::get_longueur() const {
    return (Get_AB() + Get_BC() + Get_AC());
}

const bool Triangle::equilateral(void) const {
    return ((Get_AB() == Get_BC()) == Get_AC() ? true : false);
}

const bool Triangle::isosceles(void) const {
    return (Get_AB() == Get_BC() || Get_AB() == Get_AC()
        || Get_AC() == Get_BC() ? true : false);
}