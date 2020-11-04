#ifndef APPELLOFONDAMENTI_H
#define APPELLOFONDAMENTI_H
#include "Studente.h"

class AppelloFondamenti{
    private:
        Studente* prenotatiLab;
        Studente* ammessiScritto;
        unsigned numPrenotati, numMaxPrenotati;
        unsigned numAmmessiScritto, numMaxAmmessiScritto;


        public:
        AppelloFondamenti();
        AppelloFondamenti (const AppelloFondamenti& a);
        ~AppelloFondamenti();
        AppelloFondamenti& operator=(const AppelloFondamenti& a);

        // stampa gli studenti che si sono prenotati per la prova lab
        void stampaPrenotatiLab() const;

        // stampa gli studenti che sono stati ammessi allo scritto
        void stampaAmmessiScritto() const;

        // aggiunge uno studente all’elenco dei prenotati per il lab
        void iscriviLab(const Studente& s);

        // rimuove uno studente dall’elenco dei prenotati e
        // lo aggiunge all’elenco degli ammessi allo scritto
        void superaLab(const Studente& s);

        // controlla se il voto ottenuto (l’intero passato come parametro)
        // è superiore al 18: in questo caso rimuove lo studente
        // dall’elenco degli ammessi allo scritto,
        // lo stampa insieme al voto e restituisce true;
        // altrimenti restituisce false.
        bool superaEsame(const Studente& s, int voto);

        // restituisce il numero complessivo di studenti in corso
        // prenotati per la prova lab o ammessi allo scritto
        unsigned numStudentiInCorso() const;

        // restituisce il numero complessivo di studenti
        // che non sono ammessi allo scritto
        unsigned numStudentiNonAmmessiScritto() const;


#endif
