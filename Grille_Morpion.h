#ifndef Grille_Morpion_h
#define Grille_Morpion_h

class GrilleMorpion
{
public:
	GrilleMorpion();
	const bool Case_vide(int ligne, int colonne);
	void Init_Grille();
	void Depose_jeton();
	const bool Ligne_complete();
	const bool Colonne_complete();
	const bool Diagonale_complete();
	const bool Victoire_joueur();
	void Affich_Grille();

private:
	int Grille_Morpion[3][3];
	int coup;
};

#endif;//Grille_Morpion_h