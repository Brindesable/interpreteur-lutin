

/*************************************************************************

 GeneratedState31  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState31> (fichier GeneratedState31.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState31.h"
#include "../fabriquesymbole.h"
#include "../symboleterminal.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState31::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState31::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case POINT_VIRGULE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState311);
        break;
    case VIRGULE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState312);
        break;
    case VAR:
        //On ajoute "artificiellement" le symbole.
        Symbole* pointVirgule;
        pointVirgule = FabriqueSymbole::CreerSymbole(POINT_VIRGULE, ";");
        automate.AddAvertissement(pointVirgule, ";", static_cast<SymboleTerminal*>(s)->Terminal().length(),"symbole");
        automate.Decalage(pointVirgule, new GeneratedState311);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState31::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState31::GeneratedState31 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState31>" << endl;

#endif

} //----- Fin de GeneratedState31 (constructeur de copie)


GeneratedState31::~GeneratedState31 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState31>" << endl;

#endif

} //----- Fin de ~GeneratedState31





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

