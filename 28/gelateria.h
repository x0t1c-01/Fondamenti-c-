#ifndef GELATERIA_H
#define GELATERIA_H
#include"gelato.h"

class Gelateria{
friend ostream& operator<<(ostream&, const Gelateria &);
private:
    Gelato* gelatiInVendita;
    unsigned size;
    unsigned capacity;
public:
    Gelateria();
    Gelateria(Gelato*, unsigned);
    Gelateria(const Gelateria &);
    ~Gelateria();
    Gelateria& operator=(const Gelateria &);
    void aggiungiGelato(const Gelato &);
    unsigned getNumeroGelatiPerTipo(TipoGelato) const;
    const Gelato& operator[](unsigned) const;
    Gelato& operator[](unsigned i);
    const Gelato& getGelatoConPiuGusti() const;    
    void trasformaTuttiIConiInCoppette();
    const Gelato& getUltimoGelatoInserito() const;
    
    const unsigned getSize() const;
    const Gelato* getGelatiInVendita() const;
};
#endif

