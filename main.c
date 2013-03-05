#include <stdio.h>
#include <stdlib.h>

#include "monome.h"

int main()
{

    monome m;

    m.coefficient = 10.23;
    m.exposant = 14;

    xhr_afficher_monome(m);

    return 0;
}
