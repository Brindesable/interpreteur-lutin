

/*************************************************************************

 GeneratedState32s  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState32s> (fichier GeneratedState32s.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState32s.h"
#include "../identifiant.h"
#include "../valeur.h"
#include "../const.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState32s::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState32s::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case POINT_VIRGULE:
        automate.Reduction(3);
        break;
    case VIRGULE:
        automate.Reduction(3);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState32s::Reduction (vector<Symbole*>& s)
{
    Identifiant* id = (Identifiant*)s[2];
    Valeur* val = (Valeur*)s[0];

    return new Const(id, val);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState32s::GeneratedState32s ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState32s>" << endl;

#endif

} //----- Fin de GeneratedState32s (constructeur de copie)


GeneratedState32s::~GeneratedState32s ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState32s>" << endl;

#endif

} //----- Fin de ~GeneratedState32s





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

