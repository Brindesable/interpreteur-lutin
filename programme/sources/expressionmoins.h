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
using namespace std;
#include <map>
#include "expression.h"
#include "terme.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ExpressionMoins>
// Représente un ExpressionMoins du langage.
//
//------------------------------------------------------------------------

class ExpressionMoins : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le ExpressionMoins.

    int Evaluate(map<string, int>& variables);
    // Mode d'emploi :
    // Permet d'évaluer l'ExpressionMoins
    // L'entier retourné est la valeur de l'ExpressionMoins

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionMoins(Expression* expression, Terme* terme);
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
