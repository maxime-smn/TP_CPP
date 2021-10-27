// TP3_CPP.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include"Grille_Morpion.h"
#include"Jeu.h"
using namespace std;

int main()
{
    Jeu* morpion = new Jeu;

    int choix_jeu;
    cout << "Bienvenue dans le morpion et Puissance4, choisisez votre Jeu :\n";
    cout << "1: Morpion\n"; cout << "2: Puissance 4\n";
    cin >> choix_jeu;
    GrilleMorpion Grille;

    if (choix_jeu == 1)
    {
  
        cout << "Menu du Morpion :\n";
        Grille.Affich_Grille();
        Grille.Depose_jeton();

    }
    else return 0;

    if (choix_jeu == 2)
    {
        cout << "Menu du puissance 4 :\n";
        cout << "La partie puissance 4 n'a pas été traité car j'ai essayé dans un premier temps de faire le Morpion..";
    }
    else return 0;

}

