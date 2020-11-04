#include"Gelateria.h"
#include<cassert>

ostream& operator<<(ostream& o,const Gelateria& g){
    for(int i=0;i<g.size;i++){
        o<<g.array[i];
    }
    return o;
}


Gelateria::Gelateria():array(0)size(0),capacit(0);

Gelateria:: Gelateria(Gelato* a,int s)size(s),capacity(s){
    array = new Gelato[capacity]
    for(int i=0;i<size;i++){
        array[i]=a[i];
    }
}

Gelateria::~Gelateria(){
    delete[] array;
}
void Gelateria::aggiungiGelato(const Gelato& g){
    if(size==capacity){
        if(capacity==0)
            capacity+=10;
        else
            capacity*=2;
    Gelato *tmp = new Gelato[capacity];
    for(int i=0;i<size;i++){
        tmp[i]=array[i];
    }
    delete[] array;
    array=tmp;
    }
    array[size]=g;
    size++;

}

unsigned Gelateria::getNumeroGelatiPerTipo(tipoGelato t)const{
    unsigned cont=0;
    for(for(int i=0;i<size;i++){
        if(array[i].getTipo()==t)
            cont++;
    }
    retrun cont;
}

const Gelato& Gelateria::getGelatoConPiuGusti()const{
    int max=0;
    int pos=0;
    for(int i=0;i<size;i++){
        if(array[i].getnumGusti()>max){
            max=array[i].getNumeroGusti();
            pos=i;
        }
    }
    return array[i];
}

void Gelateria::trasformaTuttiIConiInCoppette(){
    for(int i=0;i<size;i++){
        if(arra[i].getTipo==TipoGelato::CONO) // ????
        arra[i].setTipo(TipoGelato::COPPETTA); // ?????
    }
}


const Gelato & Gelateria:: getUltimoGelatoInserito() const{
    assert(size);
    return array[size-1];


}

const int Gelateria::getSize()const{
    return size;
}
