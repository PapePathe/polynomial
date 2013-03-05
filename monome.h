#ifndef MONOME_H_INCLUDED
#define MONOME_H_INCLUDED

/**
 * Création d'un nouveau type de donnée pour représenter un monome
 *
 * @author Papa Pathe SENE
 *
 */
typedef struct {
      int exposant;
    float coefficient;
} monome;

/**
 * Fonction permettant d'afficher un monome
 *
 * @author Papa Pathe SENE
 *
 * @param  m une structure de type monome
 * @return void
 *
 */
void xhr_afficher_monome(monome m);


#endif // MONOME_H_INCLUDED
