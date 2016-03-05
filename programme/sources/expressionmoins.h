/*************************************************************************
             ExpressionMoins  -  Représente un ExpressionMoins du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <ExpressionMoins> (fichier expressionmoins.h) ------
#if ! defined ( EXPRESSIONMOINS_H )
#define EXPRESSIONMOINS_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include "symbole.h"
#include "expression.h"
#include "terme.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ExpressionMoins>
// Représente un ExpressionMoins du langage.
//
//------------------------------------------------------------------------
using namespace std;

class ExpressionMoins : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le ExpressionMoins.

    virtual int Evaluate(map<string, int>& values);
    // Mode d'emploi :
    // Permet d'évaluer l'ExpressionMoins
    // L'entier retourné est la valeur de l'ExpressionMoins

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le ExpressionMoins en int.
    // L'entier retourné est l'identifiant du ExpressionMoins.

//-------------------------------------------- Constructeurs - destructeur
    ExpressionMoins(int identifiant, Expression* expression, Terme* terme);
    // Mode d'emploi :
    //

    virtual ~ExpressionMoins();
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
    Expression* expression;
    Terme* terme;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionMoins>

#endif //  EXPRESSIONMOINS_H
