/*************************************************************************
      Lexer  -  Lit le programme en entrée, et le sépare en Symboles.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Lexer> (fichier lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

//--------------------------------------------------- Interfaces utilisées
#include <istream>
#include "symbole.h"

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
    Symbole GetNext() const;
    // Mode d'emploi :
    // Retourne le Symbole sous le curseur.
    // Ne passe pas le curseur sur le prochain Symbole.
    
    Symbole Read();
    // Mode d'emploi :
    // Retourne le Symbole sous le curseur.
    // Fait avancer le curseur d'un Symbole.
    
    
//------------------------------------------------- Surcharge d'opérateurs
    
    
//-------------------------------------------- Constructeurs - destructeur    
    Lexer(istream& sources);
    // Mode d'emploi :
    // Contruit un lexer pour analyser les sources provenant d'un flux d'entrée.
    
    ~Lexer();
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
	//Le flux d'entrée contenant les sources.
	istream& sources;
	
	//Le Symbole sous le curseur.
	Symbole symbole_courant;
    
//---------------------------------------------------------- Classes amies
    
//-------------------------------------------------------- Classes privées
    
//----------------------------------------------------------- Types privés
    
};

//----------------------------------------- Types dépendants de <Lexer>

#endif // LEXER_H
