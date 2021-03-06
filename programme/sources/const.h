/*************************************************************************
                Const  -  Représente un Const du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Const> (fichier const.h) ------
#if ! defined ( CONST_H )
#define CONST_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "identifiant.h"
#include "valeur.h"
#include "pdeclinst.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Const>
// Représente un Const du langage.
//
//------------------------------------------------------------------------
class Const : public PdeclInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PdeclConst.
    
    void Print(ostream& out) const;
    // Mode d'emploi :
    // Affiche le PdeclConst dans un flux.

    void Execute(map<string, int>& constiables);
    // Mode d'emploi :
    // Execute le contenu du PdeclConst.

    void AddDeclaration(Identifiant* id, Valeur* val);
    // Mode d'emploi :
    // Ajoute une déclaration à la liste des constantes.

    void GetConstVars(map<string, int> & values) const;
    // Mode d'emploi :
    // Retourne dans values la liste des constantes avec leur valeur

    void GetVars(vector<string> & vars) const;
    // Mode d'emploi :
    // Retourne la liste des identifiants des variables declaree (doublons possibles)

    bool IsConst() const {return true;}
    // Mode d'emploi :
    // Retourne true si la déclaration est une constante.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Const(Identifiant* id, Valeur* val);
    // Mode d'emploi :
    //

    virtual ~Const();
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
    vector<pair<Identifiant*, Valeur*>> declarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PdeclConst>

#endif // CONST_H
