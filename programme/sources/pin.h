/*************************************************************************
             PIN  -  Représente un PIN du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PIN> (fichier pin.h) ------
#if ! defined ( PIN_H )
#define PIN_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "symbole.h"
#include "pininst.h"
#include "varstate.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PIN>
// Représente un PIN du langage.
//
//------------------------------------------------------------------------
class Pin : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void Print() const
    {
        Print(cout);
    }
    // Mode d'emploi
    // Affiche le contenu du Pin.
    
    virtual void Print(ostream& out) const
    {
        vector<PinInst*>::const_iterator it;

        for(it=inst.begin(); it!=inst.end(); it++)
        {
            PinInst* pinInst = *it;

            pinInst->Print(out);
        }
    }
    // Mode d'emploi :
    // Affiche le contenu du Pin dans un flux.

    void AddPinInst(PinInst* pinInst){inst.push_back(pinInst);}
    // Mode d'emploi
    // Ajoute une instruction au programme.

    virtual void Execute(map<string, int>& variables)
    {
        vector<PinInst*>::iterator it;

        for(it=inst.begin(); it!=inst.end(); it++)
        {
            PinInst* pinInst = *it;

            pinInst->Execute(variables);
        }
    }
	// Mode d'emploi :
    // Execute le contenu du PIN.

    void Optimisation(const map<string, int>& constantes){
        vector<PinInst*>::iterator it;

        for(it=inst.begin(); it!=inst.end(); it++)
        {
            PinInst* pinInst = *it;

            pinInst->Optimisation(constantes);
        }
    }
    // Mode d'emploi :
    // Optimise les instructions

    void AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors)
    {
        vector<PinInst*>::iterator itInst;

        for(itInst = inst.begin(); itInst != inst.end(); ++itInst)
        {
            (*itInst)->AnalyseStatique(vars, constantes, errors);
        }
    }

//------------------------------------------------- Surcharge d'opérateursœ

//-------------------------------------------- Constructeurs - destructeur
    Pin(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    //

    virtual ~Pin()
    {
        vector<PinInst*>::iterator it;

        for (it = inst.begin(); it != inst.end(); ++it)
        {
            delete *it;
        }
        inst.clear();
    }
    // Mode d'emploi :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    vector<PinInst*> inst;
protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PIN>

#endif // PIN_H
