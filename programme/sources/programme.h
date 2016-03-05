/*************************************************************************
             Programme  -  Représente un Programme du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Programme> (fichier programme.h) ------
#if ! defined ( PROGRAMME_H )
#define PROGRAMME_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include <vector>
#include "symbole.h"
#include "pin.h"
#include "pdecl.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Programme>
// Représente un Programme du langage.
//
//------------------------------------------------------------------------
using namespace std;
class Programme : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Programme.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Programme en int.
    // L'entier retourné est l'identifiant du Programme.

//-------------------------------------------- Constructeurs - destructeur
    Programme(int identifiant, vector<PDECL*>& declarations, vector<PIN*>& instructions);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

    virtual ~Programme();
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
    vector<PDECL*> declarations;
    vector<PIN*> instructions;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Programme>

#endif // PROGRAMME_H
