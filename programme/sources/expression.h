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
#include "symbole.h"
#include "map"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Expression>
// Représente un Expression du langage.
//
//------------------------------------------------------------------------
using namespace std;

class Expression : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Expression.

    virtual int Evaluate(map<string, int>& values)=0;
    // Mode d'emploi :
    // Permet d'évaluer l'Expression
    // L'entier retourné est la valeur de l'Expression

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Expression en int.
    // L'entier retourné est l'identifiant du Expression.

//-------------------------------------------- Constructeurs - destructeur
    Expression(int identifiant);
    // Mode d'emploi :
    //

    virtual ~Expression();
    // Mode d'emploi :
    //




//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
    //L'identifiant du Expression.
    int identifiant;
private:
//------------------------------------------------------- Attributs privés


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Expression>

#endif // EXPRESSION_H
