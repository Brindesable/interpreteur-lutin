/*************************************************************************
             SymboleTerminal  -  Représente un symbole du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <SymboleTerminal> (fichier symboleterminal.h) ------
#if ! defined ( SYMBOLETERMINAL_H )
#define SYMBOLETERMINAL_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <iostream>
#include "symbole.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <SymboleTerminal>
// Représente un symbole du langage.
//
//------------------------------------------------------------------------
class SymboleTerminal : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const
    {
		cout << terminal;
    }
    // Mode d'emploi :
    // Affiche le SymboleTerminal.

    const string& Terminal() const {return terminal;}
    // Mode d'emploi :
    // Retourne une référence constante vers le terminal.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    SymboleTerminal(SymboleType type, const string& terminal) : Symbole(type), terminal(terminal)
    {

    }
    // Mode d'emploi :
    //

    virtual ~SymboleTerminal()
    {

    }
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
    string terminal;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <SymboleTerminal>

#endif // SYMBOLETERMINAL_H
