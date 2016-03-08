/*************************************************************************
             PIN  -  Représente un PIN du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PIN> (fichier pin.h) ------
#if ! defined ( PIN_H )
#define PIN_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "symbole.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PIN>
// Représente un PIN du langage.
//
//------------------------------------------------------------------------
class PIN : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	virtual void Execute(map<string, int>& variables) = 0;
	// Mode d'emploi :
    // Execute le contenu du PIN.

//------------------------------------------------- Surcharge d'opérateursœ

//-------------------------------------------- Constructeurs - destructeur
    PIN(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    //

    virtual ~PIN() {};
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

//----------------------------------------- Types dépendants de <PIN>

#endif // PIN_H
