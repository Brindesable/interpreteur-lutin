/*************************************************************************
             PinInst  -  Représente un PinInst du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinInst> (fichier pininst.h) ------
#if ! defined ( PININST_H )
#define PININST_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "varstate.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinInst>
// Représente un PinInst du langage.
//
//------------------------------------------------------------------------
class PinInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void Print() const = 0;
    // Mode d'emploi :
    // Affiche le contenu du PinInst.
    
    virtual void Print(ostream& out) const = 0;
    // Mode d'emploi :
    // Affiche le contenu du PinInst dans un flux.

    virtual void Execute(map<string, int>& variables) = 0;
    // Mode d'emploi :
    // Execute le contenu du PinInst.

    virtual void Optimisation(map<string, int>& constantes) = 0;
    // Mode d'emploi :
    // Optimise l'instruction

    virtual void AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors) = 0;
    // Mode d'emploi :
    // Ajoute des erreur dans le vecteur lorsque l'on trouve des erreurs statiques
//------------------------------------------------- Surcharge d'opérateursœ

//-------------------------------------------- Constructeurs - destructeur
    PinInst(){}
    // Mode d'emploi :
    //

    virtual ~PinInst() {}
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
