

/*************************************************************************

 GeneratedState1111  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState1111> (fichier GeneratedState1111.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState1111.h"
#include "../pin.h"
#include "../expression.h"
#include "../pinecrire.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState1111::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState1111::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(4);
        break;

    case ECRIRE:
        automate.Reduction(4);
        break;

    case IDENTIFIANT:
        automate.Reduction(4);
        break;
    case LIRE:
        automate.Reduction(4);
        break;

    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState1111::Reduction (vector<Symbole*>& s)
{
    Pin* pin = (Pin*)s[3];
    Expression* exp = (Expression*)s[1];
    pin->AddPinInst(new PinEcrire(exp));
    return pin;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState1111::GeneratedState1111 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState1111>" << endl;

#endif

} //----- Fin de GeneratedState1111 (constructeur de copie)


GeneratedState1111::~GeneratedState1111 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState1111>" << endl;

#endif

} //----- Fin de ~GeneratedState1111





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

