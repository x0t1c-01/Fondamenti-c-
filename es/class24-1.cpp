enum LivelloDifficolta {VERDE=0, BLU, ROSSO}
class ImpiantoSciistico {
    friend istream& operator>>(istream&, ImpiantoSciistico &);
    friend ostream& operator<<(ostream&, const ImpiantoSciistico &);
    private:
        string* piste;
        LivelloDifficolta* livelliDifficolta;
        unsigned numPiste, numPisteMax;
    public:
        ImpiantoSciistico();
        ImpiantoSciistico(int num);
        ImpiantoSciistico(const ImpiantoSciistico&);
        string dammiPistaInBaseALivelloDifficolta(LivelloDifficolta);
        string aggiungiPista(const string&, LivelloDifficolta);
        string rimuoviPista(const string&);
        bool operator==(const ImpiantoSciistico&);
        ImpiantoSciistico& operator=(const ImpiantoSciistico&);
        ~ImpiantoSciistico();
    };

ImpiantoSciistico::ImpiantoSciistico(unsigned num,string* p,LivelliDifficolta* ld){
    numPiste = num;
    numPisteMax = num;
    piste = new string[numPisteMax];
    livelliDifficolta = new LivelloDifficolta[numPisteMax];
    for(int i=0;i<numPisteMax;i++)
    {
        piste[i]=p[i];
        livelliDifficolta[i]=ld[i];
    }
}

ImpiantoSciistico::dammiPistaInBaseALivelloDifficolta(LivelloDifficolta l){
    for(int i=0;i<numPiste;i++){
        if(LivelloDifficolta[i]==l)
            return piste[i];
    }
    return;
}

void ImpiantoSciistico::aggiungiPista(string s,LivelloDifficolta l){
        if(numPiste==numPisteMax)
        {
            if(numpistemax==0){
                numpistemax+=10;
            }
            else{
            numPisteMax=numPisteMax*2;
            }

        }
            string* tmp = new string[numPisteMax];
            LivelloDifficolta* tmp2 = new LivelloDifficolta[numPisteMax];
            for(int i = 0 ; i < numPiste ; ++i)
            {
                tmp[i]=piste[i];
                tmp2[i]=livelliDifficolta[i];
            }
            delete[] piste;
            delete[] livelliDifficolta;
            piste = tmp;
            livelliDifficolta = tmp2;
        piste[numpiste]=s;
        livelliDifficolta[numPiste]=l;
        numPiste++;
}

void ImpiantoSciistico::rimuoviPista(string& s){
    string* tmp=new string[numPiste];
    livelliDifficolta* tmp2=new livelliDifficolta[numPiste];
    unsigned index=0;
    for(int i=0;i<numPiste;i++){
        if(piste[i]!=s)
            {
                tmp[index]=piste[i];
                tmp2[index]=livelliDifficolta[i];
                index++;
            }
    }
    delete[] piste;
    delete[] livelliDifficolta;
    piste=tmp;
    numpiste=index;
    livelliDifficolta=tmp2;
}


ImpiantoSciistico::ImpiantoSciistico& operator=(const ImpiantoSciistico& im){
    if(this !=&im){
        numPiste=im.numPiste;
        numPisteMax=im.numPisteMax;
        delete[] piste;
        delete[] livelliDifficolta;
        piste= new string[numPisteMax];
        livelliDifficolta= new LivelliDifficolta[numPisteMax];
         for(int i=0;i<numPiste;i++){
            piste[i]=im.piste[i];
            livelliDifficolta[i]=im.livelliDifficolta[i];
        }
    }
    return *this;

}

ImpiantoSciistico::~ImpiantoSciistico(){
    delete[] piste;
    delete[] livelliDifficolta;
}




    class MaestroDiScii{
    private:
        string nomeCognome;
        LivelloDifficolta livello;
        unsigned numAllievi;
        unsigned numMaxAllievi;
    public:
        MaestroDiScii(const string& n, LivelloDifficolta l, unsigned nA):
            nomeCognome(n), livello(l), numAllievi(0), numMaxAllievi(nA) {}
        MaestroDiScii(): nomeCognome(“”), livello(VERDE),
            numAllievi(0), numMaxAllievi(15) {}
        void setNomeCognome(const string& n){nomeCognome=n;}
        void setLivello(LivelloDifficolta l){livello=l;}
        void setNumMaxAllievi(unsigned n){numMaxAllievi=n;}
        const string& getNomeCognome(){return nomeCognome;}
        LivelloDifficolta getLivelloDifficolta(){return livello;}
        unsigned getNumMaxAllievi(){return numMaxAllievi;}
        void incrementaAllievi(){numAllievi++;}


    };
