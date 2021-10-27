#include<iostream>
#include"Jeu.h"
using namespace std;

Jeu::Jeu(){}

void Jeu::Choix_Case(int Joueur, int& Choix) {

}

const bool Jeu::Verification_lignes(int c, int ligne) {
	return false;
}

const bool Jeu::Verification_case(int C, int vide) {
	return false;
}

void Jeu::Placement_pion() {
	
}

bool Jeu::Gagne() {
	return false;
}

const bool Jeu::Grille_pleine() {
	return false;
}


/* Déclaration du joueur */
Joueur::Joueur(int n, string nom) {
	mon_nom = nom;
	mon_nombre = n;
}

void Joueur::Renommage(string nom) {
	mon_nom = nom;
}

string Joueur::Get_Nom() const {
	return mon_nom;
}

int Joueur::Get_n() const {
	return mon_nombre;
}

