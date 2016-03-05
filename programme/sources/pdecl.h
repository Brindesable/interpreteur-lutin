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
#include <map>
#include "symbole.h"
//------------------------------------------------------------- Constantes
const int NON_EVALUATED = INT_MAX; //TODO find another solution
//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PDECL>
// Représente un PDECL du langage.
//
//------------------------------------------------------------------------
using namespace std;
class PDECL : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le PDECL.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le PDECL en int.
    // L'entier retourné est l'identifiant du PDECL.

//-------------------------------------------- Constructeurs - destructeur
    PDECL(int identifiant);
    // Mode d'emploi :
    //

    virtual void Execute(map<string, int>& values)=0;

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
