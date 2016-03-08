/*************************************************************************
             Expression  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Expression> (fichier Expression.h) ------
#if ! defined ( EXPRESSION_H )
#define EXPRESSION_H

//--------------------------------------------------- Interfaces utilisées
 using namespace std;
#include "symbole.h"
#include <map>
#include <limits>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Expression>
// Représente un Expression du langage.
//
//------------------------------------------------------------------------

class Expression : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual int Evaluate(map<string, int>& variables) = 0;
    // Mode d'emploi :
    // Permet d'évaluer l'Expression
    // L'entier retourné est la valeur de l'Expression
    
    static const int VALEUR_INDEFINIE = numeric_limits<int>::min();
    //Valeur par défaut d'une variable non définie.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Expression(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    // Construit un Symbole Expression.

    virtual ~Expression() {}
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

//----------------------------------------- Types dépendants de <Expression>

#endif // EXPRESSION_H
