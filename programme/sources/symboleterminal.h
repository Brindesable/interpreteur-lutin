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

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <SymboleTerminal>
// Représente un symbole du langage.
//
//------------------------------------------------------------------------

class SymboleTerminalTerminal : SymboleTerminal
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le SymboleTerminal.

    char getTerminal(){return terminal;}

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le SymboleTerminal en int.
    // L'entier retourné est l'identifiant du SymboleTerminal.

//-------------------------------------------- Constructeurs - destructeur
    SymboleTerminal(int identifiant, char terminal): Symbole(identifiant), terminal(terminal) {}
    // Mode d'emploi :
    //


    virtual ~SymboleTerminal();
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
    char terminal;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <SymboleTerminal>

#endif // SYMBOLETERMINAL_H
