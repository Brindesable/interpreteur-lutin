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
using namespace std;
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
class PdeclVar : public PDECL
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PdeclVar.
    
    void Execute(map<string, int>& variables);
    // Mode d'emploi :
    // Execute le contenu du PdeclVar.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PdeclVar(vector<Identifiant*>& declarations);
    // Mode d'emploi :
    //

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
