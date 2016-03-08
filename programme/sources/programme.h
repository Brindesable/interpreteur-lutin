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
#include "symbole.h"
#include "pin.h"
#include "pdecl.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

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

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Programme(vector<PDECL*>& declarations, vector<PIN*>& instructions);
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

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    vector<PDECL*> declarations;
    vector<PIN*> instructions;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Programme>

#endif // PROGRAMME_H
