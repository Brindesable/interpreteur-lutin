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
using namespace std;
class PinEcrire : public PIN
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PinEcrire.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PinEcrire en int.
    // L'entier retourné est l'identifiant du PinEcrire.

//-------------------------------------------- Constructeurs - destructeur
    PinEcrire(int identifiant, Expression* expression);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

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
