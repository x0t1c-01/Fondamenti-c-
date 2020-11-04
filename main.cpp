#include "Polinomio.h"

int main(){
	Polinomio pol1(6);
	pol1.setCoefficiente(2,5);
	cout<<"POLINOMIO 1:"<<endl;
	pol1.stampa();

	Polinomio pol2(6);
	pol2.setCoefficiente(2,2);
	cout<<"POLINOMIO 2:"<<endl;
	pol2.stampa();

	Polinomio pol3=pol1;
	cout<<"POLINOMIO 3, COPIA DI POLINOMIO 1 tramite operator= :"<<endl;
	pol3.stampa();

	Polinomio pol4(pol2);
	cout<<"POLINOMIO 4, COPIA DI POLINOMIO 2 tramite costruttore di copia:"<<endl;
	pol4.stampa();

	pol1.setGrado(8);
	pol1.setCoefficiente(7,2);
	cout<<"POLINOMIO 1 DOPO CAMBIO DI GRADO:"<<endl;
	pol1.stampa();

	pol1.setGrado(4);
	cout<<"POLINOMIO 1 DOPO CAMBIO DI GRADO:"<<endl;
	pol1.stampa();

	return 0;
}
