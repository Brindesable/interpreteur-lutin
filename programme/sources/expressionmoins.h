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
#include <vector>
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

    int Evaluate(const map<string, int>& variables) const;
    // Mode d'emploi :
    // Permet d'évaluer l'ExpressionMoins
    // L'entier retourné est la valeur de l'ExpressionMoins

    Expression* Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise l'expression

    void GetIds(vector<string>& ids);
    // Mode d'emploi :
    // Obtient tous les identifiants impliques dans l'expression (utilise pour l'analyse statique)

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
