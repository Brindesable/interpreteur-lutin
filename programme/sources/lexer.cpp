/*************************************************************************
      Lexer  -  Lit le programme en entrée, et le sépare en Symboles.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

//------------------------------------------------------ Include personnel
#include "lexer.h"
#include "fabriquesymbole.h"

//------------------------------------------------------------- Constantes
const vector<Lexer::RegexSymbole> Lexer::regex_symboles = {
        {regex("^(var)\\s+"), VAR},
        {regex("^(const)\\s+"), CONST},
        {regex("^(ecrire)\\s+"), ECRIRE},
        {regex("^(lire)\\s+"), LIRE},
        {regex("^(;)\\s*"), POINT_VIRGULE},
        {regex("^(:=)\\s*"), AFFECTATION},
        {regex("^(=)\\s*"), EGAL},
        {regex("^(,)\\s*"), VIRGULE},
        {regex("^(\\+)\\s*"), PLUS},
        {regex("^(-)\\s*"), MOINS},
        {regex("^(/)\\s*"), DIVISE},
        {regex("^(\\*)\\s*"), MULTIPLIE},
        {regex("^(\\d+)\\s*"), VALEUR},
        {regex("^(\\w+)\\s*"), IDENTIFIANT}
    };

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

Symbole* Lexer::SymboleCourant() const
{
    return symbole_courant;
} //----- Fin de getNext

bool Lexer::Read()
{
    //On alimente le tampon avec les sources.
    if (tampon.empty() && sources)
    {
        getline(sources, tampon);
    }

    //On recherche séquentiellement les motifs des symboles.
    for (vector<Lexer::RegexSymbole>::const_iterator itRegex = regex_symboles.begin();itRegex != regex_symboles.end();++itRegex)
    {
        smatch matche;
        if (regex_search(tampon, matche, itRegex->motif))
        {
			symbole_courant = FabriqueSymbole::CreerSymbole(itRegex->type, matche.str(1));

			tampon = matche.suffix().str();
			
			return true;
        }
    }

    //Erreur, rien n'a été trouvé, ou bien le programme est terminé.
    return false;
} //----- Fin de Read


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Lexer::Lexer(istream& sources) : sources(sources), symbole_courant(nullptr)
{
    //On supprime tous les espaces au début du programme.
    char c;
    do
    {
        sources.get(c);
    }
    while (isspace(c));
    //On remet le dernier caractère lu dans le flux.
    sources.unget();
} //----- Fin de Lexer


Lexer::~Lexer()
{

} //----- Fin de ~Lexer
    
    
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
