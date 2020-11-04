#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
using namespace std;

class Polinomio{
	private:
		int* array;
		unsigned int dimensione;
		
		void ridimensionaArray(unsigned int dim);
		
	public:
		Polinomio(unsigned int grado);
		void setCoefficiente(unsigned int potenza, int c);
		unsigned int getCoefficiente(unsigned int potenza) const;
		void setGrado(unsigned int grado);
		unsigned int getGrado() const;
		Polinomio(const Polinomio& p);
		Polinomio& operator=(const Polinomio& p);
		~Polinomio();	
		void stampa() const;
		void leggi();
		
};

#endif