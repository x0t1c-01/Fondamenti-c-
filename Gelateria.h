#ifndef GELATERIA_H_
#define GELATERIA_H_
#include"Gelato.h"
#include<iostream>

class Gelateria{
friend ostream& operator<<(ostream& ,const Gelateria& );
private:
    Gelato* array;
    int size;
    int capacity;

public:
    Gelateria();
    Gelateria(Gelato* ,int)const;
    Gelateria(Gelateria&)const;
    ~Gelato();
    void aggiungiGelato(const Gelato &);
    unsigned getNumeroGelatiPerTipo(TipoGelato) const;
    const Gelato & getGelatoConPiuGusti() const;
    void trasformaTuttiIConiInCoppette();
    const Gelato & getUltimoGelatoInserito() const;
    const int getsize()const;
}

#endif
