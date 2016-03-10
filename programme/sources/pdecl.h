/*************************************************************************
             PDECL  -  Représente un PDECL du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PDECL> (fichier pedcl.h) ------
#if ! defined ( PDECL_H )
#define PDECL_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "symbole.h"
#include "pdeclinst.h"
//------------------------------------------------------------- Constantes
//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PDECL>
// Représente un PDECL du langage.
//
//------------------------------------------------------------------------
class Pdecl : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Print() const{}

    void AddDecl(PdeclInst* var){decl.push_back(var);}
    // Mode d'emploi :


    virtual void Execute(map<string, int>& variables){
        vector<PdeclInst*>::iterator it;

        for(it = decl.begin(); it != decl.end(); ++it){

            PdeclInst* currDecl= *it;

            currDecl->Execute(variables);
        }
    }
    // Mode d'emploi :
    // Execute le contenu du PDECL.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Pdecl(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    //

    virtual ~Pdecl() {}
    // Mode d'emploi :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    vector<PdeclInst*> decl;

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PDECL>

#endif // PDECL_H
