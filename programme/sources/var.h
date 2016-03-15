/*************************************************************************
                Var  -  Représente un Var du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Var> (fichier var.h) ------
#if ! defined ( VAR_H )
#define VAR_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include <vector>
#include "identifiant.h"
#include "pdeclinst.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Var>
// Représente un Var du langage.
//
//------------------------------------------------------------------------
class Var : public PdeclInst
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le PdeclVar.

    void Execute(map<string, int>& variables);
    // Mode d'emploi :
    // Execute le contenu du PdeclVar.

    void AddDeclaration(Identifiant* id);

    void GetConstVars(map<string, int> & values) const;
    // Mode d'emploi :
    // Retourne dans values la liste des constantes avec leur valeur

    bool IsConst() const {return false;}
    // Mode d'emploi :
    // Retourne true si la déclaration est une constante.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
   Var(Identifiant* id);
    // Mode d'emploi :
    //

    virtual ~Var();
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
    vector<Identifiant*> declarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PdeclVar>

#endif // VAR_H
