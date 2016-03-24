/*************************************************************************
             TermeDivision  -  Représente un TermeDivision du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeDivision> (fichier termedivision.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>
#include <limits>

//------------------------------------------------------ Include personnel
#include "termedivision.h"
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeDivision::Print() const
{
    Print(cout);
} //----- Fin de Print

void TermeDivision::Print(ostream& out) const
{
    terme->Print(out);
    out << "/";
    facteur->Print(out);
} //----- Fin de Print

int TermeDivision::Evaluate(const map<string, int>& variables) const
{
    int resultat = 0;
    int numerateur = terme->Evaluate(variables);
    int denominateur = facteur->Evaluate(variables);
    
    if (denominateur != 0)
    {
        resultat = numerateur / denominateur;
    }
    else
    {
        cerr << "Erreur : division par 0." << endl;
        //On continue l'execution du programme en retournant une valeur infinie.
        if (numerateur > 0)
        {
            resultat = numeric_limits<int>::max();
        }
        else if (numerateur < 0)
        {
            resultat = numeric_limits<int>::min();
        }
        else
        {
            resultat = 0;
        }
    }
    
    return resultat;
}

Expression* TermeDivision::Optimisation(const map<string, int>& constantes){
    //On optimise les deux branches
    Expression* facteurOpti = facteur->Optimisation(constantes);
    Expression* termeOpti = terme->Optimisation(constantes);

    if(facteurOpti != facteur){
        delete facteur;
        facteur = static_cast<Facteur*>(facteurOpti);
    }
    if(termeOpti != terme){
        delete terme;
        terme = static_cast<Terme*>(termeOpti);
    }

    //on optimise avec les valeurs neutres
    if((int)*terme == VALEUR && (int)*facteur == VALEUR) {
        return new Valeur(this->Evaluate(constantes));
    } else if((int)*terme == VALEUR && terme->Evaluate(constantes) == 0) {
        return new Valeur(0);
    } else if((int)*facteur == VALEUR && facteur->Evaluate(constantes) == 1) {
        Expression* ancienTerme(terme);
        terme = nullptr;
        return ancienTerme;
    }

    return this;
} //----- Fin de Optimisation

void TermeDivision::GetIds(vector<string>& ids)
{
    terme->GetIds(ids);
    facteur->GetIds(ids);
} //----- Fin de GetIds

string TermeDivision::ToString() const
{
    stringstream ss;
    ss << terme->ToString() << "/" << facteur->ToString();
    return ss.str();
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

TermeDivision::TermeDivision(Terme* terme, Facteur* facteur) : Terme(TERME), terme(terme), facteur(facteur)
{

} //----- Fin de TermeDivision


TermeDivision::~TermeDivision()
{
    delete terme;
    delete facteur;
} //----- Fin de ~TermeDivision


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
