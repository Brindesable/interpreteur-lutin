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
    void print() const;
    // Mode d'emploi :
    // Affiche le Identifiant.

     int Evaluate(map<string, int>& variables);
    // Mode d'emploi :
    // Permet d'évaluer l'Identifiant.
    // L'entier retourné est la valeur de l'Identifiant.

    const string& Nom() const {return nom;}
    // Mode d'emploi :
    // Retourne le nom de l'identifiant.

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

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Identifiant>

#endif // IDENTIFIANT_H
