/*************************************************************************
             Valeur  -  Représente un Valeur du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Valeur> (fichier valeur.h) ------
#if ! defined ( VALEUR_H )
#define VALEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "facteur.h"
#include "map"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Valeur>
// Représente un Valeur du langage.
//
//------------------------------------------------------------------------

class Valeur : public Facteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Valeur.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Valeur en int.
    // L'entier retourné est l'identifiant du Valeur.

//-------------------------------------------- Constructeurs - destructeur
    Valeur(int identifiant, int value);
    // Mode d'emploi :
    //

    virtual ~Valeur();
    // Mode d'emploi :
    //

    int Evaluate(map<string, int>& values);
    // Mode d'emploi :
    // Permet d'évaluer l'Valeur
    // L'entier retourné est la valeur de l'Valeur


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
        //L'identifiant du Valeur.
        int identifiant;
        //La valeur de la Valeur.
        int value;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Valeur>

#endif // VALEUR_H
