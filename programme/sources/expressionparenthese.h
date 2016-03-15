/*************************************************************************
ExpressionParenthese  -  Représente une expression parenthesée du langage.
 -------------------
 début                : 13/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//- Interface de la classe <ExpressionParenthese> (fichier expressionparenthese.h) -
#if ! defined ( EXPRESSIONPARENTHESE_H )
#define EXPRESSIONPARENTHESE_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "expression.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ExpressionParenthese>
// Représente une expression parenthesée du langage.
//
//------------------------------------------------------------------------

class ExpressionParenthese : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le ExpressionParenthese.

    int Evaluate(const map<string, int>& variables) const;
    // Mode d'emploi :
    // Permet d'évaluer l'ExpressionParenthese
    // L'entier retourné est la valeur de l'ExpressionParenthese

    Expression* Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise l'expression

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionParenthese(Expression* expression);
    // Mode d'emploi :
    //

    virtual ~ExpressionParenthese();
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

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------- Types dépendants de <ExpressionParenthese>

#endif //  EXPRESSIONPARENTHESE_H
