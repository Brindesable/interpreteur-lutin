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
#include <vector>
#include "limits.h"

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
    virtual int Evaluate(const map<string, int>& variables) const = 0;
    // Mode d'emploi :
    // Permet d'évaluer l'Expression
    // L'entier retourné est la valeur de l'Expression
    

    virtual Expression* Optimisation(map<string, int>& constantes) = 0;
    // Mode d'emploi :
    // Optimise l'expression

    virtual void GetIds(vector<string>& ids) = 0;
    // Mode d'emploi :
    // Obtient tous les identifiants impliques dans l'expression (utilise pour l'analyse statique)

    virtual string ToString() const = 0;

//------------------------------------------------------------- Constantes
    static const int VALEUR_INDEFINIE = INT_MIN;
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
