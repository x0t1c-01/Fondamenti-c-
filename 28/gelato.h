#ifndef GELATO_H
#define GELATO_H
#include<iostream>
#include<string>
using namespace std;

enum class TipoGelato {CONO=0, COPPETTA, BRIOCHE};

class Gelato {
friend ostream& operator<<(ostream&, const Gelato &);
private:
    string* gusti;
    unsigned numeroGusti;
    TipoGelato tipo;
public:
    Gelato();
    Gelato(const string*,unsigned, TipoGelato);
    Gelato(const Gelato&);
    ~Gelato();
    Gelato& operator=(const Gelato&);
    unsigned getNumeroGusti() const;
    TipoGelato getTipo() const;
    void setTipo(TipoGelato);
    bool contieneGusto(const string &) const;
    bool operator==(const Gelato &) const;
};
#endif

