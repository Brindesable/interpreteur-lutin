/*************************************************************************
             TermeMultiplication  -  Représente un TermeMultiplication du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeMultiplication> (fichier termemultiplication.h) ------
#if ! defined ( TERMEMULTIPLICATION_H )
#define TERMEMULTIPLICATION_H

//--------------------------------------------------- Interfaces utilisées
#include "terme.h"
#include "facteur.h"
#include "map"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TermeMultiplication>
// Représente un TermeMultiplication du langage.
//
//------------------------------------------------------------------------

class TermeMultiplication : public Terme
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le TermeMultiplication.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le TermeMultiplication en int.
    // L'entier retourné est l'identifiant du TermeMultiplication.

//-------------------------------------------- Constructeurs - destructeur
    TermeMultiplication(int identifiant, Terme* terme, Facteur* facteur);
    // Mode d'emploi :
    //

    virtual ~TermeMultiplication();
    // Mode d'emploi :
    //

    int Evaluate(map<string, int>& values);
    // Mode d'emploi :
    // Permet d'évaluer l'TermeMultiplication
    // L'entier retourné est la valeur de l'TermeMultiplication


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    Terme* terme;
    Facteur* facteur;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <TermeMultiplication>

#endif // TERMEMULTIPLICATION_H
