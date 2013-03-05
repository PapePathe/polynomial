#include "monome.h";

/**
 * Fonction permettant d'afficher un monome
 * ----------------------------------------------------------------------------------------
 *
 * PRINCIPE
 *
 *	 Si l'exposant est égal à zéro afficher le coefficient
 *	 Sinon afficher le coefficient affecté de l'exposant
 *
 * ARGUMENTS
 *
 *  Données
 *		m: un Monome
 *
 * VAR m : Monome
 *
   PROCEDURE Afficher_Monome(D m: Monome)
   DEBUT
 		SI m.exposant <> 0
			AFFICHER m.coefficient, "X^", m.exposant
	 	SINON
			AFFICHER m.coefficient
		FINSI
   FIN
 *
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
  * Fonction permettant d'additionner deux monomes
  *
  * PRINCIPE
  *
  *		- Initialiser le coeefficient et l'exposant du monome C à zéro
  * 	- Si les monomes A et B sont du même degré
  *			- Additionner les coefficients de A et B
  *			- Ranger le résultat dans le coeeficient de C
  *			- Ranger l'exposant d'un du monome A ou B dans l'exposant de C
  *		- Retourner le monome C
  *
  * ARGUMENTS
  *
  *	Données
  *		a: un Monome
  *		b: un Monome
  *
  *	Résultats
  *		c: un Monome
  *

    FONCTION Additionner_Monomes(D a,b: Monome): Monome
  		VAR c: Monome
  	DEBUT

  		c.exposant    <-- 0
  		c.coefficient <-- 0

  		SI a.exposant = b.exposant ALORS FAIRE
  			c.coefficient <-- a.coefficient + b.coefficient
  			c.exposant    <-- a.exposant
  		FINSI

  		RETOURNER(c)

  	FIN

  */
monome xhr_additionner_monomes(monome a, monome b)
{
    // creation d'un monome pour stocker le résultat de la multiplication
    monome c;

    if (a.exposant == b.exposant) // si les exposants sont égaux
    {
        // on affecte au monome résultat le coefficient de l'un des monomes a et b
    	c.exposant = a.exposant;

        // on affecte au coeeficient du monome résultat la somme des coefficients des monomes a et b
    	c.coefficient = a.coefficient + b.coefficient;
    }
    else
    {
        c.exposant = 0;
        c.coefficient = 0;
    }

    return(c); // on retourne le monome résultat

}


/**
 * Fonction permettant de multiplier deux monomes
 * --------------------------------------------------------------------------------------------
 *

  	FONCTION Multiplier_Monome_Par_Monome(D a: Monome, b: Monome): Monome
 		VAR c: Monome
 	DEBUT
 		c.exposant    <-- a.exposant + b.exposant
 		c.coefficient <-- a.coefficient * b.coefficient
 		RETOURNER(c)
 	FIN

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

