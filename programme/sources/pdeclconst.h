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
using namespace std;
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
class PdeclConst : public Pdecl
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PdeclConst.
    
    void Execute(map<string, int>& variables);
    // Mode d'emploi :
    // Execute le contenu du PdeclConst.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PdeclConst(vector<pair<Identifiant*, Valeur*> >& declarations);
    // Mode d'emploi :
    //

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
    vector<pair<Identifiant*, Valeur*> > declarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PdeclConst>

#endif // PEDCLCONST_H
