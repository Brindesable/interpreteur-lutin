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

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Facteur(SymboleType type) : Terme(type) {}
    // Mode d'emploi :
    // Coinstruit un Symbole de type Facteur.

    virtual ~Facteur() {}
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

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Facteur>

#endif // FACTEUR_H
