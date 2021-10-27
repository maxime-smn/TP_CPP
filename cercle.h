#ifndef CERCLE_H
#define CERCLE_H
#include "structure.cercle.h";
#include "structure.rectangle.h"

class Cercle
{

private:
	int diametre;
	Point position;

public:
	Cercle();
	Cercle(Point const&, int);
	~Cercle();//Destructeur du cercle

	void InitPosition(Point const&);
	const Point getposition() const;

	void InitDiametre(int);
	const  int GetDiametre();

	float perimetre() const;
	float surface() const;

	const bool SurCercle(Point const&);
	const bool DehorsCercle(Point const&);

};
#endif ;// CERCLE_H