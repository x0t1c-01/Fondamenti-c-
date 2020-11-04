#include"Escursione.h"


class MondoViaggi{

private:
    Escursione* escursioni;
    unsigned size;
    unsigned capaicty;
public:
    MondoViaggi();
    MondoViaggi(Escursione*,unsigned);
    ~MondoViaggi();
    string destinazionMax();
    Escursione costoinferiore();
    int numeroMedia();
    string cognomeMedia();
    int numTotale(LivelliDifficolta&);

};

MondoViaggi::MondoViaggi(){
    unsigned size=0;
    unsigned capacity=1;
    escrusioni=new Escursione[capacity];
}

MondoViaggi::MondoViaggi(Escursione& E,unsigned s){
size=s;
capacity=s;
escursioni= new Escursione[capacity];
    for(int i=0;i<size;i++){
        escursioni[i]=E[i];
    }
}


MondoViaggi::~MondoViaggi(){

    delete[] escrusioni;
}


string MondoViaggi::destinazionMax(){
    int index=0;
    int cont=0,contmax=-1;
    for(int i=0;i<size;i++){
        cont=0;
        for(int j=0;j<size;j++){
            if(escrusioni[i].getNomeDest()==escrusioni[j].getNomeDest())
                cont++;
        }
        if(cont>max){
            cont=max;
            i=index;
        }
    }
    return escrusioni[i].getNomeDest();
}

Escursione MondoViaggi::costoinferiore(){
    int index=0;
    int durata=0;
    for(int i=0;i<size;i++){
        if(escursioni[i].getCosto()<150){
            if(escrusioni[i].getDurata()>max){
                max=escrusioni[i].getDurata();
                index=i;
            }
        }
    }

    return escursioni[index];
}

int MondoViaggi:: numeroMedia(){
    int cont=0;
    for(int i=0;i<size;i++){
        if(escrusioni[i].getLivello()==3)
            cont++;
    }
    return cont;
}

string MondoViaggi::cognomeMedia(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(escursioni[i].)
        }
    }
}
