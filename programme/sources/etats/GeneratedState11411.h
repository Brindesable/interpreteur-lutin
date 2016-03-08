

/*************************************************************************

 GeneratedState11411  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState11411> (fichier GeneratedState11411.h) ------

#if ! defined ( GENERATEDSTATE11411 )

#define GENERATEDSTATE11411



//--------------------------------------------------- Interfaces utilisées

#include <vector>
#include <string>
#include "../etat.h"
#include "../symbole.h"
#include "../automate.h"
using namespace std;

//------------------------------------------------------------- Constantes



//------------------------------------------------------------------ Types



//------------------------------------------------------------------------

// Rôle de la classe <GeneratedState11411>

//

//

//------------------------------------------------------------------------



class GeneratedState11411 : public Etat

{

    //----------------------------------------------------------------- PUBLIC

    

public:

    //----------------------------------------------------- Méthodes publiques

    // type Méthode ( liste de paramètres );

    // Mode d'emploi :

    //

    // Contrat :

    //

    bool Transition (Automate & automate, Symbole *s);
    Symbole* Reduction (vector<Symbole*> s) = 0;

    //-------------------------------------------- Constructeurs - destructeur

    GeneratedState11411 ( const string name );

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //

    

    virtual ~GeneratedState11411 ( );

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



//----------------------------------------- Types dépendants de <GeneratedState11411>



#endif // GENERATEDSTATE11411

