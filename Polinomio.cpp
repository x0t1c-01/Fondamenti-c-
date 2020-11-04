#include "Polinomio.h"

Polinomio::Polinomio(unsigned int grado):dimensione(grado+1){
	array=new int[dimensione];
	for(unsigned int i = 0; i < dimensione; i++)
		array[i] = 0;
}

Polinomio::Polinomio(const Polinomio& p):dimensione(p.dimensione){
	//Polinomio p1(5); Costruttore default
	//Polinomio p2(p1); Costruttore copia
	array=new int[dimensione];
	for(unsigned int i = 0; i < dimensione; i++)
		array[i] = p.array[i];
}

Polinomio& Polinomio::operator=(const Polinomio& p){
	if(this!=&p) // Controllo auto-assegnamento, p=p
	{
		unsigned int dim = p.dimensione;
		if(dimensione < dim){
			dimensione = dim;
			delete [] array;
			array = new int[dimensione];
		}
		//In alternativa al posto dell'if (da linea 21 fino a 25) 
		//possiamo invocare il metodo di utilita' così:
		//ridimensionaArray(p.dimensione);
		for(unsigned int i = 0; i < dimensione; i++)
			array[i] = p.array[i];
	}
	return *this;
}

Polinomio::~Polinomio(){
	delete [] array;
}

unsigned int Polinomio::getGrado() const{
	return dimensione-1;
}

unsigned int Polinomio::getCoefficiente(unsigned int potenza) const{
	if (potenza < 0 || potenza > getGrado()) 
		return 0;
	return array[potenza];
}

void Polinomio::setCoefficiente(unsigned int potenza, int c){
	if (potenza < 0 || potenza > getGrado()) 
		return;
	array[potenza] = c;
}

void Polinomio::setGrado(unsigned int grado) {
	if(dimensione < grado + 1){
		//Polinomio p1(5);
		//p1.setGrado(8);
		int* tmpArray=new int[grado + 1];
		for(unsigned int i = 0; i < grado + 1; i++){
			if(i<dimensione)
				tmpArray[i] = array[i];
			else
				tmpArray[i] = 0;
		}
		delete [] array;	
		array = tmpArray;
	}
	else{
		//Polinomio p1(5);
		//p1.setGrado(3);
		for(unsigned int i = grado + 1; i < dimensione; i++)
			array[i] = 0;
	}
	dimensione = grado + 1;
}

void Polinomio::stampa() const {
	for(int i = dimensione-1; i >=0 ; i--){
		int coefficiente = array[i];
		
		if (coefficiente == 0){
			if(dimensione == 1)
				cout<<coefficiente;
		}
		else if(coefficiente > 0)
		{
			cout << "+";
			if(coefficiente != 1 || i == 0)
				cout << coefficiente;
		}
		else
		{
			cout << "-";
			if(coefficiente != -1 || i == 0)
				cout << coefficiente;				
		}
		
		if(coefficiente != 0 && i > 0) {
			cout << "p";
			if(i > 1)
				cout << "^" << i;
		}
	}
	cout << endl;
}

void Polinomio::leggi() {	
	unsigned int grado = 0;
	cin>>grado;
	int dim = grado+1;
	if(dimensione < dim){
		dimensione = dim;
		delete [] array;
		array = new int[dimensione];
	}
	//In alternativa al posto dell'if (da linea 112 fino a 116) 
	//possiamo invocare il metodo di utilita' così:
	//ridimensionaArray(grado +1);
	for(int i = 0; i <dimensione ; i++)
		cin>>array[i];
}

void Polinomio::ridimensionaArray(unsigned int dim){
	if(dimensione < dim){
		dimensione = dim;
		delete [] array;
		array = new int[dimensione];
	}
}



