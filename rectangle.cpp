#include <stdio.h>
#include <math.h>
#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(Point p, int Long, int Larg){
	this->p1.x = p.x;
	this->p1.y = p.y;

	this->Longeur = Long;
	this->Largeur = Larg;
}

void Rectangle::InitLongeur(int L){//Fonction Set de la Longueur
	this->Longeur = L;
}

void Rectangle::InitLargeur(int l){//Fonction Set de la largeur
	this->Largeur = l;
}

int Rectangle::GetLongeur(){//Fonction Get de la Longueur
	return (this->Longeur);
}

int Rectangle::GetLargeur(){//Fonction Get de la Largeur
	return (this->Largeur);
}

Point Rectangle::GetPoint(){
	return Point();
}

void Rectangle::SetPoint(Point const){
	this->p1.x = p1.x;
	this->p1.y = p1.y;
}


int Rectangle::perimetre(){//Calcul du périmetre du rectangle
	return 2 * (Longeur * Largeur);
}

int Rectangle::surface(){//Calcul de la surface du rectangle
	return Longeur * Largeur;
}


void Rectangle::AffichRectangle(){
	cout << "Largeur du rectangle :" + Largeur << endl;
	cout << " Longueur du rectangle :" + Longeur << endl;
	cout << " Perimetre du rectangle :" + perimetre() << endl;
	cout << " Surface du rectangle :" + surface() << endl;
	cout << endl;
}