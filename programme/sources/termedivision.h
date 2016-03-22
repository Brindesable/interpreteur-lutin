/*************************************************************************
             TermeDivision  -  Représente un TermeDivision du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeDivision> (fichier termedivision.h) ------
#if ! defined ( TERMEDIVISION_H )
#define TERMEDIVISION_H

//--------------------------------------------------- Interfaces 
using namespace std;
#include <map>
#include <vector>
#include "terme.h"
#include "facteur.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TermeDivision>
// Représente un TermeDivision du langage.
//
//------------------------------------------------------------------------
class TermeDivision : public Terme
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le TermeDivision.
    
    int Evaluate(const map<string, int>& variables) const;
    // Mode d'emploi :
    // Permet d'évaluer le TermeDivision
    // L'entier retourné est la valeur du TermeDivision

    Expression* Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise le terme

    void GetIds(vector<string>& ids);
    // Mode d'emploi :
    // Obtient tous les identifiants impliques dans le terme (utilise pour l'analyse statique)

    string ToString() const;

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    TermeDivision(Terme* terme, Facteur* facteur);
    // Mode d'emploi :
    //

    virtual ~TermeDivision();
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

//----------------------------------------- Types dépendants de <TermeDivision>

#endif // TERMEDIVISION_H
