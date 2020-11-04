#ifndef STUDENTE_H
#define STUDENTE_H

class Studente{
    friend ostream& operator<<(otream& o,Studente& s){
        o<<s.matricola<<"E' in corso";
        if(s.incorso)
            o<<"SI";
        else
            o<<"NO";
    }
private:
    int matricola;
    bool incorso;
public:
    Studente(){};
    Studente(int m,bool i):matricola(m),incorso(i);
    int getMatricola()const{return matricola};
    void setMatricola(int v){matricola=v};
    void setInCorso(bool x){incorso=x};
    bool getInCorso()const{return incorso};
    Studente& operator=(const Studente& s){matricola=s.getMatricola()};
};

#endif
