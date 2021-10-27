#include<stdio.h>
#include<math.h>
#include "cercle.h";
#include <iostream>
using namespace std;

Cercle::Cercle(Point const& orig, int Diametre){// Définition du point d'origine du cercle
	this->position.x = orig.x;
	this->position.y = orig.y;
}

void Cercle::InitPosition(Point const& position){// Fonction Set de la position du cercle
	this->position.x = position.x;
	this ->position.y = position.y;
}

void Cercle::InitDiametre(int D){// Fonction Set du diametre du cercle
	this->diametre = D;
}

const Point Cercle::getposition() const{// Fonction Get de la position du cercle
	return this->position;
}

const int Cercle::GetDiametre(){// Fonction Get du diamètre du cercle
	return this->diametre;
}

float Cercle::perimetre() const{// Fonction permettant le calcul du périmetre
	return this->diametre * 3, 14 * 2;
}

float Cercle::surface() const{// Fonction calculant la surface du cercle
	return (3, 14 * pow(this->diametre, 2));
}

const bool Cercle::SurCercle(Point const& P){// Fonction permettant de savoir si le point est en dehors du cercle
	if (sqrt((pow(this->position.x, 2) + pow(P.x, 2)) - (pow(this->position.y, 2) + pow(P.y, 2))) > this->diametre)
		return (false);
	return (true);
}

const bool Cercle::DehorsCercle(Point const& P){// Fonction permettant de savoir si le point est placé sur le cercle
	if (sqrt((pow(this->position.x, 2) + pow(P.x, 2)) - (pow(this->position.y, 2) + pow(P.y, 2))) == this->diametre)
		return (false);
	return (true);
}
