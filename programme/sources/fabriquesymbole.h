/*************************************************************************
    FabriqueSymbole  -  Fabrique un symbole en fonction de son type.
 -------------------
 début                : 06/03/2016
 copyright            : (C) 2016 par mgaillard
 ************************************************************************/

//- Interface de la classe <FabriqueSymbole> (fichier fabriquesymbole.h) -
#if ! defined ( FABRIQUESYMBOLE_H )
#define FABRIQUESYMBOLE_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include "symbole.h"
#include "symboletype.h"

 using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <FabriqueSymbole>
// Lit le programme en entrée, et le sépare en Symboles.
// Le programme est lu petit à petit dans une mémoire tampon.
//------------------------------------------------------------------------

class FabriqueSymbole
{
//----------------------------------------------------------------- PUBLIC
    
public:
//----------------------------------------------------- Méthodes publiques
    static Symbole* CreerSymbole(const SymboleType& type,
                                 const string& valeur);
    // Mode d'emploi :
    // Construit un Symbole en fonction de son type et de sa valeur.
    // Le Symbole est alloué dans cette méthode.
    // La libération de la mémoire est à la charge de l'utilisateur.
    // Contrat :
    // La valeur passée doit être fomatée correctement.
    // Par exemple dans le cas d'une valeur numérique (type VALEUR),
    // la chaine de caractère contenant le nombre doit être bien formée.
    
//------------------------------------------------- Surcharge d'opérateurs
    
    
//-------------------------------------------- Constructeurs - destructeur
    
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
    
//----------------------------------------------------------- Types privés
    
};

//---------------------------------- Types dépendants de <FabriqueSymbole>

#endif // FABRIQUESYMBOLE_H
