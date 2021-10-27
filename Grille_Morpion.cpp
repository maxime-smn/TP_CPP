#include <stdio.h>
#include <iostream>
#include <math.h>
#include "Grille_Morpion.h";
using namespace std;

GrilleMorpion::GrilleMorpion()
{
	Init_Grille();
}

const bool GrilleMorpion::Case_vide(int ligne, int colonne) {
	if(Grille_Morpion[ligne][colonne] == 0)
		return true;
	return false;
}

void GrilleMorpion::Init_Grille() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Grille_Morpion[i][j] = 0;
		}
	}
}

void GrilleMorpion::Depose_jeton() {
	int ligne = 0;
	int col = 0;
	char valeur;
	int saisieCorrecte = false;

	cout << ("Numeros de ligne, de colonne et valeur (X/O): ");

	do {
		cin >> (ligne); cout << ("\n"); cin >> (col); cout << ("\n"); cin >> (valeur); cout << ("\n");

		if ((ligne > 0) && (ligne <= 3) && (col > 0) && (col <= 3) && (valeur = "X" || "O")) {
			ligne--; /* enleve 1 pour etre compatible avec le tableau ayant des
				indices de 0 a 3 */
			col--;
			if (Grille_Morpion[ligne][col] != 0)
				cout << ("Cette case a deja ete remplie. Veuillez recommencer: \n");
			else {
				saisieCorrecte = true;
				Grille_Morpion[ligne][col] = valeur;
			}
			Affich_Grille();
		}
		else
			printf("Indice de ligne ou de colonne incorrect. Veuillez recommencer:\n");
	} while (!saisieCorrecte);
}


const bool GrilleMorpion::Ligne_complete() {
	if (Grille_Morpion[0][0] == Grille_Morpion[0][1] && Grille_Morpion[0][1] == Grille_Morpion[0][2] or Grille_Morpion[1][0] == Grille_Morpion[1][1] && Grille_Morpion[1][1] == Grille_Morpion[1][2] or Grille_Morpion[2][0] == Grille_Morpion[2][1] && Grille_Morpion[2][1] == Grille_Morpion[2][2])
		return true;
	else
		return false;
}

const bool GrilleMorpion::Colonne_complete() {
	if (Grille_Morpion[0][0] == Grille_Morpion[1][0] && Grille_Morpion[1][0] == Grille_Morpion[2][0] or Grille_Morpion[0][1] == Grille_Morpion[1][1] && Grille_Morpion[1][0] == Grille_Morpion[2][1] or Grille_Morpion[0][2] == Grille_Morpion[1][2] && Grille_Morpion[1][2] == Grille_Morpion[2][2])
		return true;
	else
		return false;
}

const bool GrilleMorpion::Diagonale_complete() {
	if (Grille_Morpion[0][0] == Grille_Morpion[1][1] && Grille_Morpion[1][1] == Grille_Morpion[2][2] or Grille_Morpion[0][2] == Grille_Morpion[1][1] && Grille_Morpion[1][1] == Grille_Morpion[2][0])
		return true;
	else
		return false;
}

const bool GrilleMorpion::Victoire_joueur() {
	if (Ligne_complete() == true or Colonne_complete() == true or Diagonale_complete() == true)
		return "Victoire";
	else if (coup == 9)
		return "Trop de tentative, voulez-vous faire une nouvelle partie ?";
}

void GrilleMorpion::Affich_Grille() {
	cout << " ____ ____ ____" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << Grille_Morpion[0][0] << "  | " << Grille_Morpion[1][0] << "  | " << Grille_Morpion[2][0] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << Grille_Morpion[0][1] << "  | " << Grille_Morpion[1][1] << "  | " << Grille_Morpion[2][1] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << Grille_Morpion[0][2] << "  | " << Grille_Morpion[1][2] << "  | " << Grille_Morpion[2][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
}