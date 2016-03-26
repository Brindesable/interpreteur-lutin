

/*************************************************************************

 GeneratedState13p1  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState13p1> (fichier GeneratedState13p1.h) ------

#if ! defined ( GENERATEDSTATE13P1 )

#define GENERATEDSTATE13P1



//--------------------------------------------------- Interfaces utilisées

#include <vector>
#include <string>
#include "../etat.h"
#include "../symbole.h"
#include "../automate.h"
#include "all-states.h"
using namespace std;

//------------------------------------------------------------- Constantes



//------------------------------------------------------------------ Types



//------------------------------------------------------------------------

// Rôle de la classe <GeneratedState13p1>

//

//

//------------------------------------------------------------------------

class GeneratedState13p1 : public Etat
 {
    //----------------------------------------------------------------- PUBLIC



public:

    //----------------------------------------------------- Méthodes publiques

    // type Méthode ( liste de paramètres );

    // Mode d'emploi :

    //

    // Contrat :

    //

    bool Transition(Automate & automate, Symbole *s);
    Symbole* Reduction(vector<Symbole*>& s);

    //-------------------------------------------- Constructeurs - destructeur

    GeneratedState13p1();

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //



    virtual ~GeneratedState13p1();

    // Mode d'emploi :

    //

    // Contrat :

    //



    //------------------------------------------------------------------ PRIVE



protected:

    //----------------------------------------------------- Méthodes protégées



private:

    //------------------------------------------------------- Méthodes privées



protected:

    //----------------------------------------------------- Attributs protégés



private:

    //------------------------------------------------------- Attributs privés



    //---------------------------------------------------------- Classes amies



    //-------------------------------------------------------- Classes privées



    //----------------------------------------------------------- Types privés



};



//----------------------------------------- Types dépendants de <GeneratedState13p1>



#endif // GENERATEDSTATE13P1

