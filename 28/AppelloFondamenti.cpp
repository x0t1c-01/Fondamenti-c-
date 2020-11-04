#include "ApppelloFondamenti.h"
#include<iostream>

using namespace std;


AppelloFondamenti :: AppelloFondamenti()numPrenotati(0),numMaxPrenotati(0),numAmmessiScritto(0), numMaxAmmessiScritto(0){
    prenotatiLab=new Studente[numMaxPrenotati];
    ammessiScritto=new Studente[numMaxAmmessiScritto];
}
AppelloFondamenti ::AppelloFondamenti(const AppelloFondamenti& a){
    numPrenotati=a.numPrenotati;
	numMaxPrenotati=a.numMaxPrenotati;
	numAmmessiScritto=a.numAmmessiScritto;
	numMaxAmmessiScritto=a.numMaxAmmessiScritto;
	prenotatiLab=new Studente[numMaxPrenotati];
	ammessiScritto=new Studente[numMaxAmmessiScritto];
	for(int i=0;i<numPrenotati;i++){
		prenotatiLab[i]=a.prenotatiLab[i];
	}
	for(int i=0;i<numAmmessiScritto;i++){
		ammessiScritto[i]=a.ammessiScritto[i];
	}
}
AppelloFondamenti::~AppelloFondamenti(){
    delete[] ammessiScritto;
    delete[] prenotatiLab;
}


AppelloFondamenti & AppelloFondamenti::operator=(const AppelloFondamenti & a){
        if(this!=&a){
            if(numMaxPrenotati<a.numMaxPrenotati){
    			numMaxPrenotati = a.numMaxPrenotati;
    			delete [] prenotatiLab;
    			prenotatiLab = new Studente[numMaxPrenotati];
    		}
    		numPrenotati=a.numPrenotati;
    		for(int i=0;i<numPrenotati;i++)
    			prenotatiLab[i] = a.prenotatiLab[i];

    		if(numMaxAmmessiScritto<a.numMaxAmmessiScritto){
    			numMaxAmmessiScritto = a.numMaxAmmessiScritto;
    			delete [] ammessiScritto;
    			ammessiScritto = new Studente[numMaxAmmessiScritto];
    		}
    		numAmmessiScritto = a.numAmmessiScritto;
    		for(int i=0;i<numAmmessiScritto;i++)
    			ammessiScritto[i] = a.ammessiScritto[i];
        }
        return *this;


}
void AppelloFondamenti::stampaPrenotatiLab() const{
    for(unsigned i=0;i<numPrenotati;i++){
        cout<<prenotatiLab[i].getMatricola()<<endl;
    }
}


void AppelloFondamenti::stampaAmmessiScritto() const{
    for(unsigned i=0;i<numAmmessiScritto;i++){
        cout<<ammessiScritto[i].getMatricola()<<endl;
    }
}

void AppelloFondamenti::iscriviLab(const Studente& s){
    //check if capacisty and size are good
    if(numMaxPrenotati==numMaxPrenotati){
        if(numMaxPrenotati==0)
            numMaxPrenotati+=10;
        else
            numMaxPrenotati*=2;
    }

    Studente* tmp=new Studente[numMaxPrenotati];
    //copying elements to add dynamic array to add the new element then incremetn the size by 1
    for(unsigned i=0;i<numPrenotati;i++){
        tmp[i]=prenotatiLab[i];
    }

    delete [] prenotatiLab;
    prenotatiLab=tmp;
    prenotatiLab[numPrenotati]=s;
    numPrenotati++;
}

void AppelloFondamenti::superaLab(const Studente& s){
    //check if capacisties are good
    if(numAmmessiScritto==numMaxAmmessiScritto){
        if(numMaxAmmessiScritto==0)
            numMaxAmmessiScritto+=10;
        else
            numMaxAmmessiScritto*=2;
    }
    //create dynamic arrays to copy original arrays and play with index
    Studente* tmp= new Studente[numMaxAmmessiScritto];
    Studente* tmp2= new Studente[numPrenotati];


    int ind=0;
    for(unsigned i=0;i<numPrenotati;i++){
        //check if its not in the array , add everything else with incrementing the index
        if(s.getMatricola()!=prenotatiLab[i].getMatricola()){
            tmp[ind++]=prenotati[i];
        }
    }
    //delete original arrrays, then making them equal to the temp we created adjusting the size
    numPrenotati=ind;
    delete []prenotatiLab;
    prenotatiLab=tmp;
    //copying elements to add dynamic array to add the new element then incremetn the size by 1
    for(unsigned i=0;i<numAmmessiScritto;i++){
        tmp2[i]=ammessiScritto[i];
    }
    delete ammessiScritto[];
    ammessiScritto=tmp2;
    ammessiScritto[numAmmessiScritto]=s;
    numAmmessiScritto++;
}

bool AppelloFondamenti::superaEsame(const Studente& s, int voto){
    if(voto>=18){
        Studente* tmp=new studente[numAmmessiScritto];
        int ind=0;
        for(int i=0;i<numAmmessiScritto;i++){
            if(s.getMatricola()!=ammessiScritto[i].getMatricola()){
                tmp[i]=ammessiScritto[i];
                ind++;
            }
        }
        delete ammessiScritto[];
        ammessiScritto=tmp;
        numAmmessiScritto=ind;
        cout<<s<<voto;
        return true;
    }
    else
        return false;

}

unsigned AppelloFondamenti::numStudentiInCorso() const{
    return numAmmessiScritto+numPrenotati;
}

unsigned AppelloFondamenti::numStudentiNonAmmessiScritto() const{
    return numPrenotati;
}
