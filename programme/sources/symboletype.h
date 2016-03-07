/*************************************************************************
   SymboleType  -  Une énumération contenant tous les types de symboles.
 -------------------
 début                : 06/03/2016
 copyright            : (C) 2016 par mgaillard
 ************************************************************************/

//-- Interface de l'énumération' <SymboleType> (fichier symboletype.h) --

#if ! defined ( SYMBOLETYPE_H )
#define SYMBOLETYPE_H

//------------------------------------------------------------------------
// Rôle de l'énumération' <SymboleType>
// Contient tous les types de symboles.
//------------------------------------------------------------------------

enum SymboleType
{
    ERROR,
    VAR,
    CONST,
    ECRIRE,
    LIRE,
    POINT_VIRGULE,
    AFFECTATION,
    EGAL,
    VIRGULE,
    PLUS,
    MOINS,
    DIVISE,
    MULTIPLIE,
    VALEUR,
    IDENTIFICATEUR
};

#endif // SYMBOLETYPE_H
