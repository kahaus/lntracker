/*
 * ftrack : file tracked informations
 */
#ifndef FTRACK_H
#define FTRACK_H

#include <stdlib.h>
#include "vector.h"

typedef struct ftrack ftrack;

// ftrack_create : créer une structure ftrack d'identifiant fichier fileid
extern ftrack *ftrack_create(size_t fileid);

// ftrack_addline :
extern long int *ftrack_addline(ftrack *ft, long int n);

// ftrack_id : renvoie l'identifiant fichier de ft
extern size_t ftrack_id(const ftrack *ft);

// ftrack_getlines : renvoie le tableau des occurences (numéros de lignes) de ft
extern const vector *ftrack_getlines(const ftrack *ft);

// ftrack_compar_id : compare l'identifiant fichier de ft avec fileid et
//   renvoie 0 si les deux valeurs correspondent, sinon une valeur non nulle.
extern int ftrack_compar_id(const ftrack *ft, size_t fileid);

// ftrack_dispose : libère la structure associée à t
extern void ftrack_dispose(ftrack **ptrt);

#endif  // FTRACK_H
