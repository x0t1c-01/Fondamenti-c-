#include"Gelato.h"

ostream& operator<<(ostream& o,const Gelato& g){
if(g.gettipoGelato()==tipoGelato::CONO)
    o<<"CONO";
if(g.gettipoGelato()==tipoGelato::COPPETTA)
    o<<"COPPETTA"
if(g.gettipoGelato()==tipoGelato::BRIOCHE)
    o<<"BRIOCHE";

cout<<" "<<numGusti<<"gusti :";
for(int i=0;i<numGusti;i++){
    o<<g.gusti[i]<<endl;
}
    return o;
}
Gelato::Gelato():numGusti(0),gusti(0){}

Gelato::Gelato(const string* a,unsigned t, TipoGelato s):numeroGusti(t),tipo(s){
    gusti=new string[numeroGusti];
    for(int i=0;i<numeroGusti;i++){
        gusti[i]=a[i];
    }

}

Getlato::Gelato(const Gelato& g)numeroGusti(g.numeroGusti),tipo(g.tipo){
    gusti=new string [numeroGusti];
    for(int i=0;i<numGusti;i++){
        gusti[i]=g[i];
    }
}
 Gelato::~Gelato(){
     delete  []gusti;
 }

Gelato& Gelato::operator=(const Gelato& g){
    if(this!=&g){
        delete []gusti;
        numGusti=g.numGusti;
        tipo=g.tipo;
        gusti=new string[numGusti];
        for(int i=0;i<numGusti;i++){
            gusti[i]=g[i];
        }
    }
    return *this;
}

bool Gelato::contieneGusto(const string& g)const{
    for(int i=0;i<numGusti;i++){
        if(gusti[i]==g)
            return true;
    }
    return false;
}

unsigned Gelato::getnumGusti()const{
    return numGusti;
}

Tipo Gelato:: gettipoGelato()const{
    return tipoGelato;
}
void Gelato::setTipo(Tipo t)const{
    tipoGelato=t;
}

bool Gelato::operator==(const Gelato& g)const{
    if(numGusti!=g.numGusti||tipoGelato!=g.tipoGelato )
        return false;
    for(int i=0;i<numGusti;i++){
        if(gusti[i]!=g[i])
            return false;
    }

    return true;
}
