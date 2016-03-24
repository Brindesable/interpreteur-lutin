/*************************************************************************
             PinLire  -  Représente un PinLire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinLire> (fichier pinlire.h) ------
#if ! defined ( PINLIRE_H )
#define PINLIRE_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "pininst.h"
#include "identifiant.h"
#include "expression.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinLire>
// Représente un PinLire du langage.
//
//------------------------------------------------------------------------
class PinLire : public PinInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PinLire.
    
    void Print(ostream& out) const;
    // Mode d'emploi :
    // Affiche le PinLire dans un flux.
    
    void Execute(map<string, int>& variables);
	// Mode d'emploi :
    // Execute le contenu du PinLire.

    void Optimisation(const map<string, int>& constantes);
    // Mode d'emploi :
    // Optimise l'instruction

    void AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors);
    // Mode d'emploi :
    // Ajoute des erreur dans le vecteur lorsque l'on trouve des erreurs statiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PinLire(Identifiant* id);
    // Mode d'emploi :
    //

    virtual ~PinLire();
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
    Identifiant* id;


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PinLire>

#endif // PINLIRE_H
