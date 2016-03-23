﻿/*************************************************************************
               Automate  -  Automate à pile du langage lutin.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par Team-Papassau - H4101
 *************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier automate.cpp) --
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
//------------------------------------------------------ Include personnel
#include "automate.h"
#include "etats/GeneratedState0.h"
//------------------------------------------------------------- Constantes
const string RED_BEGIN = "\033[1;31m";
const string RED_END = "\033[0m";
//---------------------------------------------------- Variables de classe
//----------------------------------------------------------- Types privés
//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies
//----------------------------------------------------- Méthodes publiques
void AffichePileSymboles(stack<Symbole*> pileSymboles)
{
    while(!pileSymboles.empty()){
        pileSymboles.top()->Print();
        pileSymboles.pop();
    }
    cout<<endl;
}

Programme* Automate::Lecture()
{
    lexer.Read();
    pileEtats.push(new GeneratedState0);

    do{
        if(!lexer.CheckSyntaxError())
        {

            Symbole* currSymbole = lexer.SymboleCourant();

            Etat* currentState = pileEtats.top();
            currentState->Transition(*this, currSymbole);
        }
        else
        {
            cerr << lexer.GetSyntaxError() << endl;
            return nullptr;
        }
    }
    while(!erreur && !accepte);
    
    //On libère l'état 0 qui reste sur la pile.
    ViderPileEtats();
    
    //En cas d'erreur on prévient l'utilisateur.
    if(erreur)
    {
        cerr<<"An error occured during the parsing at line "<<lexer.GetCurrLine()<<" near symbol : ";
        lexer.SymboleCourant()->Print();
        cout<<endl;
        return nullptr;
    }
    
    //Lecture du programme.
    Programme* programme = static_cast<Programme*>(pileSymboles.top());
    pileSymboles.pop();

    return programme;
} //----- Fin de Lecture

void Automate::Decalage(Symbole* symbole, Etat* etat)
{
    pileEtats.push(etat);
    pileSymboles.push(symbole);
} //----- Fin de Decalage

void Automate::Reduction(int nbSymboles)
{
    Etat* etatReduit = pileEtats.top();

    vector<Symbole*> symboles;
    for(int i = 0; i < nbSymboles; i++)
    {
        //On libère les états sauf l'état reduit
        //dont on a besoin pour la reduction.
        if (pileEtats.top() != etatReduit)
        {
            delete pileEtats.top();
        }
        pileEtats.pop();
        symboles.push_back(pileSymboles.top());
        pileSymboles.pop();
    }
    
    Symbole* symbole = etatReduit->Reduction(symboles);
    //On libère enfin l'état reduit s'il a été dépilé.
    if (nbSymboles > 0)
    {
        delete etatReduit;
    }
    
    Etat* sommet = pileEtats.top();
    sommet->Transition(*this, symbole);
} //----- Fin de Reduction

void Automate::Accepter(Programme* programme)
{
    //On empile le programme sur la pile des symboles.
    pileSymboles.push(programme);
    
    //Suppression du caractère de FIN.
    delete lexer.SymboleCourant();
    
    //On lève le flag pour accepter le programme.
    accepte = true;
} //----- Fin de Accepter

void Automate::AddAvertissement(const string& avertissement)
{
    cerr << RED_BEGIN << "Warning : " << avertissement << " ligne " << lexer.GetCurrLine() << RED_END << endl;
} //----- Fin de AddAvertissement

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Automate::Automate(istream& sources) : lexer(sources), erreur(false), accepte(false)
{

} //----- Fin de Automate


Automate::~Automate()
{
    ViderPileEtats();
    ViderPileSymboles();
} //----- Fin de ~Automate

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
void Automate::ViderPileEtats()
{
    while (!pileEtats.empty()) {
        delete pileEtats.top();
        pileEtats.pop();
    }
}
    
void Automate::ViderPileSymboles()
{
    while (!pileSymboles.empty()) {
        delete pileSymboles.top();
        pileSymboles.pop();
    }
}
