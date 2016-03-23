/*************************************************************************
               Automate  -  Automate à pile du langage lutin.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par Team-Papassau - H4101
 ************************************************************************/

//-------- Interface de la classe <automate> (fichier automate.cpp) ----
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <stack>
#include "symbole.h"
#include "programme.h"
#include "lexer.h"
#include "etat.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <automate>
// Automate à pile du langage lutin.
//------------------------------------------------------------------------

class Automate
{
    //----------------------------------------------------------------- PUBLIC
    
public:
    //----------------------------------------------------- Méthodes publiques

    void Consommer(){lexer.Read();}
    // Mode d'emploi : Méthode initiant l'analyse du programme.
    //
    Programme* Lecture();
    // Mode d'emploi : Méthode initiant l'analyse du programme.
    //

    void Decalage(Symbole* symbole, Etat* etat);
    // Mode d'emploi :
    //
    
    void Reduction(int nbSymboles);
    // Mode d'emploi :
    //
    
    void Accepter(Programme* programme);
    // Mode d'emploi :
    // Accepte le symbole Programme et lève le flag accepte de l'automate.

    void SetErreur() {erreur=true;}
    // Mode d'emploi :
    // Lève le flag d'erreur de l'automate.

    void AddAvertissement(const Symbole* symbole);
    // Mode d'emploi :
    // Affiche un avertissement suite à un problème synthaxique.
    
    //------------------------------------------------- Surcharge d'opérateurs

    //-------------------------------------------- Constructeurs - destructeur
    Automate(istream& sources);
    // Mode d'emploi :
    //

    virtual ~Automate ();
    // Mode d'emploi :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées

private:
    //------------------------------------------------------- Méthodes privées
    void ViderPileEtats();
    // Mode d'emploi :
    // Vide et libère la pile des etats.
    
    void ViderPileSymboles();
    // Mode d'emploi :
    // Vide et libère la pile des symboles.

protected:
    //----------------------------------------------------- Attributs protégés

private:
    //------------------------------------------------------- Attributs privés
    stack<Symbole*> pileSymboles;
    stack<Etat*> pileEtats;
    Lexer lexer;
    bool erreur;
    bool accepte;
    
    //---------------------------------------------------------- Classes amies
    
    //-------------------------------------------------------- Classes privées
    
    //----------------------------------------------------------- Types privés
    
};

//----------------------------------------- Types dépendants de <automate>

#endif // AUTOMATE_H
