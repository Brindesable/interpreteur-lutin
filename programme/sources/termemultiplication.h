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
using namespace std;
#include <map>
#include "terme.h"
#include "facteur.h"
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
    void Print() const;
    // Mode d'emploi :
    // Affiche le TermeMultiplication.
    
    int Evaluate(map<string, int>& variables);
    // Mode d'emploi :
    // Permet d'évaluer le TermeMultiplication
    // L'entier retourné est la valeur du TermeMultiplication

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    TermeMultiplication(Terme* terme, Facteur* facteur);
    // Mode d'emploi :
    //

    virtual ~TermeMultiplication();
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
    Terme* terme;
    Facteur* facteur;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <TermeMultiplication>

#endif // TERMEMULTIPLICATION_H
