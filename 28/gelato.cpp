#include "gelato.h"
ostream& operator<<(ostream& o, const Gelato& g)
{
    if ( g.tipo == TipoGelato::CONO) o<< "CONO ";
    if (g.tipo == TipoGelato::COPPETTA) o<< "COPPETTA ";
    if (g.tipo == TipoGelato::BRIOCHE) o<< "BRIOCHE "; 
    o<< g.numeroGusti <<" gusti: " <<"  ";
    for(unsigned j=0; j<g.numeroGusti; j++)
       o<<g.gusti[j]<<" ";
return o;
}

Gelato::Gelato():numeroGusti(0),gusti(0){}

Gelato::Gelato(const string* g, unsigned n, TipoGelato t):numeroGusti(n), tipo(t)
       {
        gusti = new string[numeroGusti];
        for(unsigned j=0; j<numeroGusti;j++)
             gusti[j] = g[j];
        }
		
Gelato::Gelato(const Gelato& g):numeroGusti(g.numeroGusti),tipo(g.tipo)
{
      gusti = new string[numeroGusti];
      for(unsigned j=0; j<numeroGusti;j++)
             gusti[j] = g.gusti[j];
}

Gelato::~Gelato() {delete[] gusti;}

Gelato& Gelato::operator=(const Gelato& g){
    if(this!= &g)   
        {
        delete[] gusti;
        numeroGusti = g.numeroGusti;
        tipo = g.tipo;
        gusti = new string[numeroGusti];
        for(unsigned j=0; j<numeroGusti;j++)   
             gusti[j] = g.gusti[j];
        }
     return *this;
}

unsigned Gelato::getNumeroGusti() const { return numeroGusti;}

TipoGelato Gelato::getTipo() const {return tipo;}

void Gelato::setTipo(TipoGelato t){tipo = t;}

bool Gelato::contieneGusto(const string& gusto) const { 
    for(int j=0; j<numeroGusti; j++){
        if (gusti[j] == gusto)
           return true;
    }
    return false;
}

bool Gelato::operator==(const Gelato& g) const {
    if( numeroGusti != g.numeroGusti || tipo != g.tipo)
       return false;
    
    for(int j=0; j<numeroGusti; j++){
        if (gusti[j] != g.gusti[j])
           return false;
    }
    return true; 
}
 

