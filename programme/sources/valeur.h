/*************************************************************************
       Valeur  -  Représente une valeur constante dans le programme.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//----------- Interface de la classe <Valeur> (fichier valeur.h) ---------
#if ! defined ( VALEUR_H )
#define VALEUR_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include "facteur.h"
#include <map>
#include <vector>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Valeur>
// Représente une valeur constante dans le programme.
//
//------------------------------------------------------------------------

class Valeur : public Facteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche la Valeur.
    
    void Print(ostream& out) const;
    // Mode d'emploi :
    // Affiche la Valeur dans un flux.
    
    int Evaluate(const map<string, int>& variables) const;
    // Mode d'emploi :
    // Permet d'évaluer l'Identifiant.
    // L'entier retourné est la valeur de l'Identifiant.

    Expression* Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise le terme

    void GetIds(vector<string>& ids);
    // Mode d'emploi :
    // Obtient tous les identifiants impliques dans l'expression (utilise pour l'analyse statique)

    string ToString() const;
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Valeur(int valeur);
    // Mode d'emploi :
    //

    virtual ~Valeur();
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
	//La valeur de la Valeur.
	int valeur;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Valeur>

#endif // VALEUR_H
