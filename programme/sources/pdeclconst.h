/*************************************************************************
             PdeclConst  -  Représente un PdeclConst du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclConst> (fichier pdeclconst.h) ------
#if ! defined ( PEDCLCONST_H )
#define PEDCLCONST_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include <vector>
#include "pdecl.h"
#include "identifiant.h"
#include "valeur.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PdeclConst>
// Représente un PdeclConst du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PdeclConst : public PDECL
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PdeclConst.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PdeclConst en int.
    // L'entier retourné est l'identifiant du PdeclConst.

//-------------------------------------------- Constructeurs - destructeur
    PdeclConst(int identifiant, vector<pair<Identifiant*, Valeur*>>& declarations);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

    virtual ~PdeclConst();
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
    vector<pair<Identifiant*, Valeur*>> declarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PdeclConst>

#endif // PEDCLCONST_H
