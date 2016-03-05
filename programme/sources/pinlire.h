/*************************************************************************
             PinLire  -  Représente un PinLire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinLire> (fichier pinlire.h) ------
#if ! defined ( PINLIRE_H )
#define PINLIRE_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include "pin.h"
#include "identifiant.h"
#include "expression.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinLire>
// Représente un PinLire du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PinLire : public PIN
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PinLire.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PinLire en int.
    // L'entier retourné est l'identifiant du PinLire.

//-------------------------------------------- Constructeurs - destructeur
    PinLire(int identifiant, Identifiant* id);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

    virtual ~PinLire();
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


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PinLire>

#endif // PINLIRE_H
