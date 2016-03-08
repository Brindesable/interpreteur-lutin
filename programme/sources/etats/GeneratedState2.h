

/*************************************************************************

 GeneratedState2  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState2> (fichier GeneratedState2.h) ------

#if ! defined ( GENERATEDSTATE2 )

#define GENERATEDSTATE2



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

// Rôle de la classe <GeneratedState2>

//

//

//------------------------------------------------------------------------



class GeneratedState2 : public Etat

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

    GeneratedState2 ( const string name );

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //

    

    virtual ~GeneratedState2 ( );

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



//----------------------------------------- Types dépendants de <GeneratedState2>



#endif // GENERATEDSTATE2

