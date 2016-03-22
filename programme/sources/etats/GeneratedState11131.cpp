

/*************************************************************************

 GeneratedState11131  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11131> (fichier GeneratedState11131.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11131.h"
#include "../terme.h"
#include "../expression.h"
#include "../expressionmoins.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11131::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11131::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case MOINS:
        automate.Reduction(3);
        break;
    case FERME_PAR:
        automate.Reduction(3);
        break;
    case MULTIPLIE:
        automate.Decalage(s, new GeneratedState1121);
        break;
    case DIVISE:
        automate.Decalage(s, new GeneratedState1122);
        break;
    case PLUS:
        automate.Reduction(3);
        break;
    case POINT_VIRGULE:
        automate.Reduction(3);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState11131::Reduction (vector<Symbole*>& s)
{
    Expression* expression = static_cast<Expression*>(s[2]);
    delete s[1];
    Terme* terme = static_cast<Terme*>(s[0]);

    return new ExpressionMoins(expression, terme);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11131::GeneratedState11131 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11131>" << endl;

#endif

} //----- Fin de GeneratedState11131 (constructeur de copie)


GeneratedState11131::~GeneratedState11131 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState11131>" << endl;

#endif

} //----- Fin de ~GeneratedState11131





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

