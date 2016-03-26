/*************************************************************************
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
    
    Programme* programme = nullptr;
    
    if (!erreur)
    {
        //Lecture du programme.
        programme = static_cast<Programme*>(pileSymboles.top());
        pileSymboles.pop();
    }
    else
    {
        //On présente à l'utilisateur une erreur synthaxique que l'on a pas récupérée.
        cerr << "Erreur syntaxique (" << lexer.GetCurrLine() << ":" << lexer.GetCurrCol() << ")" << " pres du symbole ";
        lexer.SymboleCourant()->Print(cerr);
        cerr << endl;
    }
    
    //On libère l'état 0 qui reste sur la pile.
    ViderPileEtats();
    //Pour être sûr, on libère les eventuels symboles qui resteraient.
    ViderPileSymboles();
    //Suppression du dernier caractère lu par le lexer.
    delete lexer.SymboleCourant();

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
    
    //On lève le flag pour accepter le programme.
    accepte = true;
} //----- Fin de Accepter

void Automate::AddAvertissement(const SymboleTerminal* symbole, const string& type)
{
    cerr << "Erreur syntaxique (";
    cerr << lexer.GetCurrLine() << ":" << lexer.GetCurrCol() - lexer.GetCurrTailleSymbole() + 1 << ") ";
    cerr << type << " ";
    symbole->Print(cerr);
    cerr << " attendu" << endl;
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
