#ifndef Jeu_h
#define Jeu_h
#include "Grille_Morpion.h"
#include<string>

class Jeu{
public:
	Jeu();
	void Choix_Case(int Joueur, int &Choix);
	const bool Verification_lignes(int c, int ligne);
	const bool Verification_case(int C, int vide);
	void Placement_pion();
	bool Gagne();
	const bool Grille_pleine();

private:

};

class Joueur{
public: 
	Joueur(int n, std::string nom);
	void Renommage(std::string nom);
	std::string Get_Nom() const;
	int Get_n() const;

private: 
	std::string mon_nom = "Moi";
	int mon_nombre = 0;
};

#endif Jeu_h;