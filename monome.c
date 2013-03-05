#include "monome.h";

/**
 * Fonction permettant d'afficher un monome
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

    if (0 == m.exposant )
    {
    	printf("%d", m.coefficient);
    }
    else
    {
        printf("%.0fx^%d", m.coefficient, m.exposant);
    }

}
