#ifndef GELATO_H_
#define GELATO_H_

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

enum class Tipo(CONO=0,COPPETTA,BRIOCHE);

class Gelato{
    friend ostream& operator<<(ostream &,const Gelato & );
private:
    string* gusti;
    unsigned numGusti;
    Tipo tipoGelato;
public:
    Gelato();
    Gelato(const string*,unsigned,tipoGelato);
    Gelato(const Gelato&);
    ~Gelato();
    Gelato& operator=(const Gelato&);
    bool contieneGusto(const string &) const;
    unsigned getnumGusti()const;
    Tipo gettipoGelato()const;
    void setTipo(Tipo);
    bool operator==(const Gelato&) const;


}




#endif
