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

    int i = 0;

    do{
        if(!lexer.CheckSyntaxError())
        {
            i++;
            Symbole* curr = lexer.SymboleCourant();

            Etat *  currentState = pileEtats.top();
            currentState->Transition(*this, curr);
        }
        else
        {
            cerr << lexer.GetSyntaxError() << endl;
            return 0;
        }
    }
    while((int)*pileSymboles.top() != PROGRAMME && i<3000);

    //cout<<"inf "<<pileSymboles.size()<<endl;
    //cout<<"fin analyse "<<(int)(*pileSymboles.top())<<endl;

    return static_cast<Programme*>(pileSymboles.top());
} //----- Fin de Lecture

void Automate::Decalage(Symbole* symbole, Etat* etat)
{
    pileEtats.push(etat);
    pileSymboles.push(symbole);
} //----- Fin de Decalage

void Automate::Reduction(int nbSymboles)
{

    Etat* curr = pileEtats.top();

    vector<Symbole*> symboles;
    for(int i = 0; i < nbSymboles; i++)
    {
        pileEtats.pop();
        symboles.push_back(pileSymboles.top());
        pileSymboles.pop();
    }
    Symbole* symbole = curr->Reduction(symboles);

    curr = pileEtats.top();
    curr->Transition(*this, symbole);


} //----- Fin de Reduction

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Automate::Automate(istream& sources) : lexer(sources)
{
	
} //----- Fin de Automate


Automate::~Automate()
{
	
} //----- Fin de ~Automate

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
