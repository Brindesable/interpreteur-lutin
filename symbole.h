/*************************************************************************
             Symbole  -  Représente un symbole du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Symbole> (fichier symbole.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Symbole>
// Représente un symbole du langage.
// 
//------------------------------------------------------------------------

class Symbole
{
//----------------------------------------------------------------- PUBLIC
    
public:
//----------------------------------------------------- Méthodes publiques
    void print();
    // Mode d'emploi :
    // Affiche le Symbole.
    
//------------------------------------------------- Surcharge d'opérateurs
    operator int() const;
    // Mode d'emploi :
    // Permet de caster le Symbole en int.
    // L'entier retourné est l'identifiant du Symbole.
    
//-------------------------------------------- Constructeurs - destructeur    
    Symbole(int identifiant);
    // Mode d'emploi :
    //
    
    virtual ~Symbole();
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
	//L'identifiant du Symbole.
	int identifiant;
    
//---------------------------------------------------------- Classes amies
    
//-------------------------------------------------------- Classes privées
    
//----------------------------------------------------------- Types privés
    
};

//----------------------------------------- Types dépendants de <Symbole>

#endif // SYMBOLE_H
