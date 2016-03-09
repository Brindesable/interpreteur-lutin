/*************************************************************************
             PinEcrire  -  Représente un PinEcrire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinEcrire> (fichier pinecrire.h) ------
#if ! defined ( PINECRIRE_H )
#define PINECRIRE_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "pin.h"
#include "expression.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinEcrire>
// Représente un PinEcrire du langage.
//
//------------------------------------------------------------------------
class PinEcrire : public Pin
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PinEcrire.
	
	void Execute(map<string, int>& variables);
	// Mode d'emploi :
    // Execute le contenu du PinEcrire.
	
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PinEcrire(Expression* expression);
    // Mode d'emploi :
    //

    virtual ~PinEcrire();
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
    Expression* expression;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PinEcrire>

#endif // PINECRIRE_H
