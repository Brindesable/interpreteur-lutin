/*************************************************************************
             PdeclInst  -  Représente un PdeclInst du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclInst> (fichier pedcl.h) ------
#if ! defined ( PDECLINST_H )
#define PDECLINST_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "symbole.h"
//------------------------------------------------------------- Constantes
//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PdeclInst>
// Représente un PdeclInst du langage.
//
//------------------------------------------------------------------------
class PdeclInst : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void Execute(map<string, int>& variables) = 0;
    // Mode d'emploi :
    // Execute le contenu du PdeclInst.

    virtual void GetConstVars(map<string, int> & values) const = 0;
    // Mode d'emploi :
    // Retourne dans values la liste des constantes avec leur valeur

    virtual void GetVars(vector<string> & vars) const = 0;
    // Mode d'emploi :
    // Retourne la liste des identifiants des variables declaree (doublons possibles)

    virtual bool IsConst() const = 0;
    // Mode d'emploi :
    // Retourne true si la déclaration est une constante.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PdeclInst(SymboleType type) : Symbole(type) {}
    // Mode d'emploi :
    //

    virtual ~PdeclInst() {}
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

//----------------------------------------- Types dépendants de <PDECLInst>

#endif // PDECLINST_H
