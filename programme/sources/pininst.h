/*************************************************************************
             PinInst  -  Représente un PinInst du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinInst> (fichier pininst.h) ------
#if ! defined ( PININST_H )
#define PININST_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PinInst>
// Représente un PinInst du langage.
//
//------------------------------------------------------------------------
class PinInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const{}


    virtual void Execute(map<string, int>& variables)=0;
    // Mode d'emploi :
    // Execute le contenu du PIN.

//------------------------------------------------- Surcharge d'opérateursœ

//-------------------------------------------- Constructeurs - destructeur
    PinInst(){}
    // Mode d'emploi :
    //

    virtual ~PinInst() {}
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


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PIN>

#endif // PIN_H
