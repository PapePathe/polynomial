#include <stdio.h>
#include <stdlib.h>

#include "monome.h"

int main()
{

    monome m, n, l;

    m.coefficient = 10.23;
    m.exposant = 14;

    n.coefficient = 3;
    n.exposant = 148;

    //l = xhr_multiplier_monomes(m,n);


    xhr_afficher_monome(m);
    printf("\n");
    xhr_afficher_monome(n);
    printf("\n");
    //xhr_afficher_monome(l);

    l = xhr_additionner_monomes(m,n);

    xhr_afficher_monome(l);
    return 0;
}
