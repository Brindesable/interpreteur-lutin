/*************************************************************************
             Identifiant  -  Représente un Identifiant du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Identifiant> (fichier identifiant.h) ------
#if ! defined ( IDENTIFIANT_H )
#define IDENTIFIANT_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include "facteur.h"
#include <map>
#include <string>
#include <vector>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Identifiant>
// Représente un Identifiant du langage.
//
//------------------------------------------------------------------------
class Identifiant : public Facteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche l'Identifiant.
    
    void Print(ostream& out) const;
    // Mode d'emploi :
    // Affiche l'Identifiant dans un flux.

    int Evaluate(const map<string, int>& variables) const;
    // Mode d'emploi :
    // Permet d'évaluer l'Identifiant.
    // L'entier retourné est la valeur de l'Identifiant.

    const string& Nom() const {return nom;}
    // Mode d'emploi :
    // Retourne le nom de l'identifiant.

    Expression* Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise le terme

    int tailleNom(){return nom.length()+spaces;}

    void GetIds(vector<string>& ids);
    // Mode d'emploi :
    // Obtient tous les identifiants impliques dans l'expression (utilise pour l'analyse statique)

    string ToString() const;
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Identifiant(const string& nom);
    // Mode d'emploi :
    //

    virtual ~Identifiant();
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
        //Nom de l'Identifiant
        string nom;
        //espaces à la fin
        int spaces;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Identifiant>

#endif // IDENTIFIANT_H
