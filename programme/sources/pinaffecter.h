/*************************************************************************
             PinAffecter  -  Représente un PinAffecter du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinAffecter> (fichier pinaffecter.h) ------
#if ! defined ( PINAFFECTER_H )
#define PINAFFECTER_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "pininst.h"
#include "expression.h"
#include "identifiant.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinAffecter>
// Représente un PinAffecter du langage.
//
//------------------------------------------------------------------------
class PinAffecter : public PinInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PinAffecter.
    
    void Execute(map<string, int>& variables);
	// Mode d'emploi :
    // Execute le contenu du PinAffecter.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PinAffecter(Identifiant* id, Expression* expression);
    // Mode d'emploi :
    //

    virtual ~PinAffecter();
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
    Identifiant* id;
    Expression* expression;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PinAffecter>

#endif // PINAFFECTER_H
