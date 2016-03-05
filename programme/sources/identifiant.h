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
using namespace std;
class Identifiant : public Facteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Identifiant.

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Identifiant en int.
    // L'entier retourné est l'identifiant du Identifiant.

    int Evaluate(map<string, int>& values);
    // Mode d'emploi :
    // Permet d'évaluer l'Identifiant
    // L'entier retourné est la valeur de l'Identifiant

    string getName(){return name;}

//-------------------------------------------- Constructeurs - destructeur
    Identifiant(int identifiant, const string& name);
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
        //L'identifiant du Identifiant.
        int identifiant;
        //Nom de l'Identifiant
        string name;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Identifiant>

#endif // IDENTIFIANT_H
