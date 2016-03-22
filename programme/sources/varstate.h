/*************************************************************************
   VarState  -  Une énumération contenant tous etats de variable (utile pour l'analyse statique)
 -------------------
 début                : 19/03/2016
 copyright            : (C) 2016 par kollivier
 ************************************************************************/

//-- Interface de l'énumération' <VarState> (fichier varstate.h) --

#if ! defined ( VARSTATE_H )
#define VARSTATE_H

//------------------------------------------------------------------------
// Rôle de l'énumération' <VarState>
// Contient tous les etats de variables
//------------------------------------------------------------------------

enum VarState
{
    DECLAREE,
    AFFECTEE,
    UTILISEE
};

#endif // VARSTATE_H
