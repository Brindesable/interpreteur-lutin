/*************************************************************************
             Facteur  -  Représente un Facteur du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Facteur> (fichier facteur.h) ------
#if ! defined ( FACTEUR_H )
#define FACTEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "terme.h"
#include "map"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Facteur>
// Représente un Facteur du langage.
//
//------------------------------------------------------------------------

class Facteur : public Terme
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Facteur.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Facteur en int.
    // L'entier retourné est l'identifiant du Facteur.

//-------------------------------------------- Constructeurs - destructeur
    Facteur(int identifiant);
    // Mode d'emploi :
    //

    virtual ~Facteur();
    // Mode d'emploi :
    //

    virtual int Evaluate(map<string, int>& values)=0;
    // Mode d'emploi :
    // Permet d'évaluer l'Facteur
    // L'entier retourné est la valeur de l'Facteur


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
        //L'identifiant du Facteur.
        int identifiant;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Facteur>

#endif // FACTEUR_H
