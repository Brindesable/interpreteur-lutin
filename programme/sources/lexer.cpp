/*************************************************************************
      Lexer  -  Lit le programme en entrée, et le sépare en Symboles.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <regex>

using namespace std;

//------------------------------------------------------ Include personnel
#include "lexer.h"

//------------------------------------------------------------- Constantes
const vector<Lexer::RegexSymbole> Lexer::regex_symboles = {
		{regex("^(var)\\s+")},
		{regex("^(const)\\s+")},
		{regex("^(ecrire)\\s+")},
		{regex("^(lire)\\s+")},
		{regex("^(;)\\s*")},
		{regex("^(:=)\\s*")},
		{regex("^(=)\\s*")},
		{regex("^(,)\\s*")},
		{regex("^(\\+)\\s*")},
		{regex("^(-)\\s*")},
		{regex("^(/)\\s*")},
		{regex("^(\\*)\\s*")},
		{regex("^(\\d+)\\s*")},
		{regex("^(\\w+)\\s*")}
	};

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

Symbole Lexer::GetNext() const
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
			if (matche.ready())
			{
				//cout << matche.str(1) << endl;

				symbole_courant = Symbole(itRegex - regex_symboles.begin());

				tampon = matche.suffix().str();
				
				return true;
			}
		}
	}

	//Erreur, rien n'a été trouvé, ou bien le programme est terminé.
	return false;
} //----- Fin de Read


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Lexer::Lexer(istream& sources) : sources(sources), symbole_courant(-1)
{
	//On supprime tous les espaces au début du programme.
	char c;
	do
	{
		sources.get(c);
	}
	while (c == ' ');
	//On remet le dernier caractère lu dans le flux.
	sources.unget();

} //----- Fin de Lexer


Lexer::~Lexer()
{

} //----- Fin de ~Lexer
    
    
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées