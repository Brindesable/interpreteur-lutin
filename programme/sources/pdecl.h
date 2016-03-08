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
#include "symbole.h"
//------------------------------------------------------------- Constantes
//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PDECL>
// Représente un PDECL du langage.
//
//------------------------------------------------------------------------
class PDECL : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques    
    virtual void Execute(map<string, int>& variables) = 0;
    // Mode d'emploi :
    // Execute le contenu du PDECL.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PDECL(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    //

    virtual ~PDECL();
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

//----------------------------------------- Types dépendants de <PDECL>

#endif // PDECL_H
