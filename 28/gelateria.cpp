#include "gelateria.h"
#include<cassert>
 
ostream& operator<<(ostream& o, const Gelateria& g)
{
   o<<  g.size << " gelati in questa gelateria " << endl;
   for(unsigned i=0; i< g.size; i++)
   {
       o << g.gelatiInVendita[i]<<endl;
   }
   return o;
}

Gelateria::Gelateria():gelatiInVendita(0),size(0),capacity(0)
{}

Gelateria::Gelateria(Gelato* G, unsigned N):size(N),capacity(N)
{
   gelatiInVendita = new Gelato[capacity];
   for(unsigned i=0; i< size; i++)
     {
     gelatiInVendita[i] = G[i];
     }   
}

Gelateria::Gelateria(const Gelateria& G): size(G.size),capacity(G.capacity)
{
   gelatiInVendita = new Gelato[capacity];
   for(unsigned i=0; i< size; i++)
     {
     gelatiInVendita[i] = G.gelatiInVendita[i];
     }
}

Gelateria::~Gelateria() { delete[] gelatiInVendita; }

Gelateria& Gelateria::operator=(const Gelateria& G)
{
   if(this!= &G)
      {
      delete[] gelatiInVendita;
      size = G.size;
      gelatiInVendita = new Gelato[size];
      for(unsigned i=0; i< size; i++)
        {
        gelatiInVendita[i]=G.gelatiInVendita[i];
        }
      }
   return *this;
}

void Gelateria::aggiungiGelato(const Gelato& g)
{
   if (size == capacity)
      {
      if(size == 0)  capacity=10;
      else capacity*=2;
      Gelato *temp= new Gelato[capacity];
      for(unsigned i=0; i< size; i++)
        {
        temp[i]=gelatiInVendita[i];
        }
      delete []gelatiInVendita;
      gelatiInVendita=temp;
      }
      gelatiInVendita[size]= g;
      size++;
}

unsigned Gelateria::getNumeroGelatiPerTipo(TipoGelato t) const
{    
     unsigned num = 0;
     for(unsigned i=0; i< size; i++)
        {
        if( gelatiInVendita[i].getTipo() == t)
           num++;
        }
     return num;
}

const Gelato& Gelateria::operator[](unsigned i) const
{
    return gelatiInVendita[i];
}

Gelato& Gelateria::operator[](unsigned i) 
{
    return gelatiInVendita[i];
}

const Gelato& Gelateria::getGelatoConPiuGusti() const
{   
    unsigned max = 0;
    unsigned idx = 0;
    for(unsigned i=0; i< size; i++)
        {
        if( gelatiInVendita[i].getNumeroGusti() > max )
           {
           max = gelatiInVendita[i].getNumeroGusti();
           idx = i;
           }
        }
     return gelatiInVendita[idx];    
}

void Gelateria::trasformaTuttiIConiInCoppette()
{
    for(unsigned i=0; i< size; i++)
        {
        if( gelatiInVendita[i].getTipo() == TipoGelato::CONO )
              gelatiInVendita[i].setTipo(TipoGelato::COPPETTA); 
        }
}

const Gelato& Gelateria::getUltimoGelatoInserito() const
{
 assert(size>0);
 return gelatiInVendita[size-1];
}

const unsigned Gelateria:: getSize() const
{
    return size;
}

const Gelato* Gelateria::getGelatiInVendita() const
{
    return gelatiInVendita;
}

