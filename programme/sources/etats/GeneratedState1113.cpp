

/*************************************************************************

 GeneratedState1113  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState1113> (fichier GeneratedState1113.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState1113.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState1113::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState1113::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case OUVRE_PAR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState114);
        break;
    case TERME:
        automate.Decalage(s, new GeneratedState11131);
        break;
    case VALEUR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState116);
        break;
    case FACTEUR:
        automate.Decalage(s, new GeneratedState113);
        break;
    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState115);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState1113::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState1113::GeneratedState1113 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState1113>" << endl;

#endif

} //----- Fin de GeneratedState1113 (constructeur de copie)


GeneratedState1113::~GeneratedState1113 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState1113>" << endl;

#endif

} //----- Fin de ~GeneratedState1113





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

