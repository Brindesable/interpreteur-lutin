/*************************************************************************
             Programme  -  Représente un Programme du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Programme> (fichier programme.h) ------
#if ! defined ( PROGRAMME_H )
#define PROGRAMME_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include <string>
#include "symbole.h"
#include "pin.h"
#include "pdecl.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
enum VarState
{
    DECLAREE,
    AFFECTEE,
    UTILISEE
};
//------------------------------------------------------------------------
// Rôle de la classe <Programme>
// Représente un Programme du langage.
//
//------------------------------------------------------------------------
class Programme : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le Programme.
    
    void Execute(map<string, int>& variables);
	// Mode d'emploi :
    // Execute le contenu du Programme.

    void PrintError();
    // Mode d'emploi :
    // Affiche error

    void Optimisation();
    // Mode d'emploi :
    // Optimise le programme (remplace les constantes)

    vector<string> AnalyseStatique();

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Programme(Pdecl* declarations, Pin* instructions, string err = "");
    // Mode d'emploi :
    //

    virtual ~Programme();
    // Mode d'emploi :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    void GetConstVars(map<string, int> & values);
    // Mode d'emploi :
    // Retourne dans values la liste des constantes avec leur valeur


protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    Pdecl* declarations;
    Pin* instructions;
    string error;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Programme>

#endif // PROGRAMME_H
