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
#include <map>
#include "symbole.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PIN>
// Représente un PIN du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PIN : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PIN.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PIN en int.
    // L'entier retourné est l'identifiant du PIN.

//-------------------------------------------- Constructeurs - destructeur
    PIN(int identifiant);
    // Mode d'emploi :
    //

    virtual void Execute(map<string, int>& values)=0;

    virtual ~PIN();
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
