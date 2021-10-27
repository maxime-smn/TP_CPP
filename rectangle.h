#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "structure.rectangle.h"

class Rectangle
{

private :
	int Longeur, Largeur;
	Point p1;
public:
	Rectangle(Point, int Long, int Larg);
	~Rectangle();//Destructeur du rectangle

	void InitLongeur(int L);
	void InitLargeur(int l);
	void AffichRectangle();

	int GetLongeur();
	int GetLargeur();
	Point GetPoint();
	void SetPoint(Point const);

	int perimetre();
	int surface(); 
};
#endif ;// RECTANGLE_H