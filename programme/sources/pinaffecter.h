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
#include <map>
#include "pin.h"
#include "expression.h"
#include "identifiant.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinAffecter>
// Représente un PinAffecter du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PinAffecter : public PIN
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PinAffecter.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PinAffecter en int.
    // L'entier retourné est l'identifiant du PinAffecter.

//-------------------------------------------- Constructeurs - destructeur
    PinAffecter(int identifiant, Identifiant* id, Expression* expression);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

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
