/*************************************************************************
             PdeclVar  -  Représente un PdeclVar du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclVar> (fichier pdeclvar.h) ------
#if ! defined ( PEDECLVAR_H )
#define PEDECLVAR_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include <vector>
#include "pdecl.h"
#include "identifiant.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PdeclVar>
// Représente un PdeclVar du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PdeclVar : public PDECL
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PdeclVar.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PdeclVar en int.
    // L'entier retourné est l'identifiant du PdeclVar.

//-------------------------------------------- Constructeurs - destructeur
    PdeclVar(int identifiant, vector<Identifiant*>& declarations);
    // Mode d'emploi :
    //

    void Execute(map<string, int>& values);

    virtual ~PdeclVar();
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
    vector<Identifiant*> declarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PdeclVar>

#endif // PEDECLVAR_H
