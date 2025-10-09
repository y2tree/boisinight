#include <time.h>

/* int main (void)
{
    time_t ta;
    time_t tb;

    time (&ta);
    tb = time (NULL);
    return 0;
}*/

#include <stdio.h>
#include <time.h>

int main (void)
{
    /* lire l'heure courante */
    time_t now = time (NULL);

    /* la convertir en heure locale */
    struct tm tm_now = *localtime (&now);

    /* creer une chaine JJ/MM/AAAA HH:MM:SS */
    char s_now[sizeof "HH:MM"];
    /* plus qua trouver comment multiplier les heures */
    strftime (s_now, sizeof s_now, "%H:%M", &tm_now);

    /* afficher le resultat */
    printf("il est actuellemnt [%s]\n", s_now);
    printf("en te reveillant a XX tu auras completé 4 cycles de sommeil (6h de som + 15 min de temps d'endormissement) ");
    printf("en te reveillant a XX tu auras completé 5 cycles de sommeil (7h30h de som + 15 min de temps d'endormissement) ");
    printf("en te reveillant a XX tu auras completé 6 cycles de sommeil (9h de som + 15 min de temps d'endormissement) ");

    return 0;
    
}