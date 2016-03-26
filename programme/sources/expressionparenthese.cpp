/*************************************************************************
ExpressionParenthese  -  Représente une expression parenthesée du langage.
 -------------------
 début                : 13/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

// Interface de la classe <ExpressionParenthese> (fichier expressionmoins.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "expressionparenthese.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionParenthese::Print() const
{
    Print(cout);
} //----- Fin de Print

void ExpressionParenthese::Print(ostream& out) const
{
    out << "(";
    expression->Print(out);
    out << ")";
} //----- Fin de Print

int ExpressionParenthese::Evaluate(const map<string, int>& variables) const
{
    return expression->Evaluate(variables);
}

Expression* ExpressionParenthese::Optimisation(map<string, int>& constantes){
    //On optimise les deux branches
    Expression* expressionOpti = expression->Optimisation(constantes);
    
    //On supprime l'ancienne expression, si l'optimisation en a fait une nouvelle.
    if (expressionOpti != expression)
    {
        delete expression;
        expression = expressionOpti;
    }
    
     //On enlève les parenthèses si besoin.
    if(*expressionOpti == VALEUR or
       *expressionOpti == IDENTIFIANT or 
       *expressionOpti == EXPRESSION_PARENTHESE)
    {
        //On laisse l'ancienne expression en nullptr pour ne pas qu'elle soit liberée.
        expression = nullptr;
        return expressionOpti;
    }

    this->SetSymboleType(EXPRESSION_PARENTHESE);
    return this;
} //----- Fin de Optimisation

void ExpressionParenthese::GetIds(vector<string>& ids)
{
    expression->GetIds(ids);
} //----- Fin de GetIds

string ExpressionParenthese::ToString() const
{
    stringstream ss;
    ss << "(" << expression->ToString() << ")";
    return ss.str();
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

ExpressionParenthese::ExpressionParenthese(Expression* expression) :
    Expression(EXPRESSION),
    expression(expression)
{

} //----- Fin de ExpressionParenthese


ExpressionParenthese::~ExpressionParenthese()
{
    delete expression;
} //----- Fin de ~ExpressionParenthese


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
