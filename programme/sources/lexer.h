/*************************************************************************
      Lexer  -  Lit le programme en entrée, et le sépare en Symboles.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 ************************************************************************/

//---------- Interface de la classe <Lexer> (fichier lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

//--------------------------------------------------- Interfaces utilisées
#include <istream>
#include <boost/regex.hpp>
#include "symbole.h"
#include "symboletype.h"

using namespace std;
using namespace boost;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Lexer>
// Lit le programme en entrée, et le sépare en Symboles.
// Le programme est lu petit à petit dans une mémoire tampon.
//------------------------------------------------------------------------

class Lexer
{
//----------------------------------------------------------------- PUBLIC
    
public:
//----------------------------------------------------- Méthodes publiques
    Symbole* SymboleCourant() const;
    // Mode d'emploi :
    // Retourne le Symbole sous le curseur.
    // Ne passe pas le curseur sur le prochain Symbole.
    
    bool Read();
    // Mode d'emploi :
    // Fait avancer le curseur d'un Symbole.
    // Retourne true si un Symbole a été lu.

    string GetSyntaxError();
    // Mode d'emploi :
    // A appeler si flagError est positionne a true
    // Donne l'erreur de syntaxe, le caractere incrimine et sa position

    bool CheckSyntaxError();
    // Mode d'emploi :
    // Accesseur de syntaxError
    
    int GetCurrLine(){return currLine;}
    int GetCurrCol(){return currCol;}
    int GetCurrTailleSymbole(){return currTailleSymbole;}

//------------------------------------------------- Surcharge d'opérateurs
    
    
//-------------------------------------------- Constructeurs - destructeur    
    Lexer(istream& sources);
    // Mode d'emploi :
    // Contruit un lexer pour analyser les sources provenant d'un 
    // flux d'entrée.
    
    ~Lexer();
    // Mode d'emploi :
    //
    
//------------------------------------------------------------------ PRIVE
    
protected:
//----------------------------------------------------- Méthodes protégées
    
private:
//------------------------------------------------------- Méthodes privées

//-------------------------------------------------------- Classes privées
    struct RegexSymbole
    {
        //Le motif a trouver.
        const regex motif;

        const SymboleType type; 

        RegexSymbole(const regex& motif, const SymboleType& type) :
            motif(motif),
            type(type)
        {

        }
    };

protected:
//----------------------------------------------------- Attributs protégés
    
private:
//------------------------------------------------------- Attributs privés
    //Le flux d'entrée contenant les sources.
    istream& sources;

    //Le tampon de mémoire contenant une partie du programme.
    string tampon;
    
    //Le Symbole sous le curseur.
    Symbole* symbole_courant;

    // deviens true si on trouve une erreur syntaxique
    bool syntaxError;

    //La position du curseur dans le fichier source.
    int currLine;
    int currCol;
    //La taille en caractere du dernier symbole lu.
    int currTailleSymbole;

    static const vector<RegexSymbole> regex_symboles;
    
//---------------------------------------------------------- Classes amies
    
//----------------------------------------------------------- Types privés
    
};

//----------------------------------------- Types dépendants de <Lexer>

#endif // LEXER_H
