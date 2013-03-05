#include "monome.h";

/**
 * Fonction permettant d'afficher un monome
 * ----------------------------------------------------------------------------------------
 *
 * @author Papa Pathe SENE
 *
 * @param  m une structure de type monome
 *
 * @return void
 *
 */
void xhr_afficher_monome(monome m)
{

    if (0 == m.exposant ) // si l'exposant est égal à zero on affiche juste le coeeffcient
    {
    	printf("%d", m.coefficient);
    }
    else // sinon on affiche le coeffcient affecté de la variable avec son exposant
    {
        printf("%.2fx^%d", m.coefficient, m.exposant);
    }

}




/**
 * Fonction permettant de multiplier deux monomes
 * ------------------------------------------------------------------------
 *
 */
monome xhr_multiplier_monomes(monome a, monome b)
{
    // on déclare une variable locale de type monome
    // @see monome
    monome c;

    c.exposant    = a.exposant + b.exposant; // on additionne les exposants
    c.coefficient = a.coefficient * b.coefficient; // on multiplie les coefficients

    return c;
}

