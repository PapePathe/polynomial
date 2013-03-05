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
 */
void xhr_afficher_monome(monome m);

/**
 * Fonction permettant d'additionner deux monomes
 * ------------------------------------------------------------------------
 *
 * @param a <monome> un monome
 * @param b <monome> un monome
 */
monome xhr_additionner_monomes(monome a, monome b);

/**
 * Fonction permettant de multiplier deux monomes
 *
 */
monome xhr_multiplier_monomes(monome a, monome b);


#endif // MONOME_H_INCLUDED
