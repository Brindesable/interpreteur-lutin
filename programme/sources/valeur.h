/*************************************************************************
       Valeur  -  Représente une valeur constante dans le programme.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//----------- Interface de la classe <Valeur> (fichier valeur.h) ---------
#if ! defined ( VALEUR_H )
#define VALEUR_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include "facteur.h"
#include <map>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Valeur>
// Représente une valeur constante dans le programme.
//
//------------------------------------------------------------------------

class Valeur : public Facteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le Valeur.
    
    int Evaluate(map<string, int>& variables);
    // Mode d'emploi :
    // Permet d'évaluer l'Identifiant.
    // L'entier retourné est la valeur de l'Identifiant.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Valeur(int valeur);
    // Mode d'emploi :
    //

    virtual ~Valeur();
    // Mode d'emploi :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	//La valeur de la Valeur.
	int valeur;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Valeur>

#endif // VALEUR_H
