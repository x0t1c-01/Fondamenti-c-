#ifndef ESCURSIONE_H_
#define ESCURSIONE_H_

enum LivelloDifficolta{lv1=1,lv2,lv3,lv4,lv5}
#include<iostream>
using namespace std;


class Escursione{
    friend ostream& operator<<(ostream& ,const Escursione&);
    friend istream& operator>>(istream&,Escursione&);
private:
    string nomedestinazione;
    int durata;
    int costo;
    string* persone;
    LivelliDifficolta livello;
    unsigned size;
    unsigned capacity;


public:
    Escursione();
    Escursione(string ,int ,int,string* ,LivelliDifficolta );
    Escursione(Escursione&)
    ~Escursione();
    void RimuoviPartecipanti(string&);
    void aggiungiPartecipante(string&);
    string restituisciCognome();
    bool operator>(Escursione&);
    string getNomeDest()const {return nomedestinazione;}
    int getDurata()const{return durata;}
    int getCosto()const{return costo;}
    LivelliDifficolta getLivello()const{return livello;}




};

Escursione::Escursione(){
    nomedestinazione="";
    durata=0;
    costo=0;
    livello=LivelliDifficolta(1);
    size=0;
    capacity=1;
    persone = new string[capacity];
}

Escursione::Escursione(string p,int c,string* pp,unsigned si,LivelliDifficolta lv){
    nomedestinazione=p;
    costo=c;
    size=si;
    capacity=si;
    persone=new string[capacity];
    for(int i=0;i<size;i++){
        persone[i]=pp[i];
    }
    livello=lv;

}

Escursione::Escursione(Escursione& E){
    nomedestinazione=E.nomedestinazione;
    durata=E.durata;
    costo=E.costo;
    livello=E.livello;
    size=E.size;
    capacity=E.capacity;
    persone=new string[capacity];
    for(int i=0;i<size;i++){
        persone[i][E.persone[i]];
    }
}

Escursione::~Escursione(){
    delete[] persone;
}

void Escursione::aggiungiPartecipante(string& p){
    if(size==capacity){
        if(capacity==0)
            capacity+=10;
        else
            capacity=capacity*2;
    }
    string* tmp=new string[capacity];
    for(int i=0;i<capacity;i++){
        tmp[i]=persone[i];
    }
    delete[] persone;
    persone=tmp;
    persone[size]=p;
    size++;
}

void Escursione::RimuoviPartecipanti(string& s){
    string* tmp=new string[capacity];
    unsigned index=0;
    for(int i=0;i<size;i++){
        if(persone[i]!=s)
            {
                tmp[i]=persone[i];
                index++;
            }
    }
    delete[] persone;
    persone=tmp;
    size=index;
}

string Escursione::restituisciCognome(){
    string p;
    int cont=0;
    int contmax=0;
    for(int i=0;i<size;i++){
        cont=0;
        for(int j=0;j<size;j++){
            if(persone[i]==persone[j]){
                cont++;
            }
        }
        if(cont>contmax){
            p=persone[i];
            contmax=cont;
        }

    }
    return p;
}


bool Escursione:: operator>(Escursione& E){
    if(durata!=E.escrusione){
        if(durata>E.durata)
            return true;
        }
    else{
            if(costo!=E.costo){
                if(costo>E.costo)
                    return true;
            }
            else{
                if(size>E.size)
                    return true;
                }
        }
        return false;

}
ostream& operator<<(ostream& out,const Escursione& E){
    out<<E.nomedestinazione;
    out<<E.costo;
    out<<E.durata;
    out<<E.livello;
    out<<"cisono "<<E.size<<"part.";
    for(int i=0;i<E.size;i++){
        out<<E.persone[i];
    }
    return out;
}
istream& operator>>(istream& in,Escursione& E){
    in>>E.nomedestinazione;
    in>>E.costo;
    in>>E.durata;
    in>>E.livello;
    in>>E.size;
    delete[] E.persone;
    E.capacity=(E.size+1)*2;
    E.persone= new string[E.capacity];
    for(int i=0;i<E.size;i++){
        in>>E.persone[i];
    }

    return in;
}



#endif
