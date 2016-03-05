/*************************************************************************
             Terme  -  Représente un Terme du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Terme> (fichier terme.h) ------
#if ! defined ( TERME_H )
#define TERME_H

//--------------------------------------------------- Interfaces utilisées
#include "expression.h"
#include "map"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Terme>
// Représente un Terme du langage.
//
//------------------------------------------------------------------------

class Terme : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Terme.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Terme en int.
    // L'entier retourné est l'identifiant du Terme.

//-------------------------------------------- Constructeurs - destructeur
    Terme(int identifiant);
    // Mode d'emploi :
    //

    virtual ~Terme();
    // Mode d'emploi :
    //

    virtual int Evaluate(map<string, int>& values)=0;
    // Mode d'emploi :
    // Permet d'évaluer l'Terme
    // L'entier retourné est la valeur de l'Terme


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

//----------------------------------------- Types dépendants de <Terme>

#endif // TERME_H
