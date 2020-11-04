#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int gp,gu,pp=0,pu=0;
	while(pp<3&&pu<3){
		gp=rand()%3+1;
		do{
			cout << "Inserisci la giocata del primo giocatore (1: sasso, 2: carta, 3: forbice):";
			cin>>gu;
		}while(gu<1||gu>3);
		switch(gu){
			case 1:cout << "hai giocato sasso"<<endl;break;
			case 2:cout << "hai giocato carta"<<endl;break;
			case 3:cout << "hai giocato forbice"<<endl;break;
		}
		switch(gp){
			case 1:cout << "il PC ha giocato sasso"<<endl;break;
			case 2:cout << "il PC ha giocato carta"<<endl;break;
			case 3:cout << "il PC ha giocato forbice"<<endl;break;
		}
		if(gu==gp)
			cout << "Pari:" << pu << '-' << pp << endl;
		else if((gu==1&&gp==3)||(gu==2&&gp==1)||(gu==3&&gp==2)){
			pu++;
			cout<<"Vinci tu:"<<endl<<pu<<'-'<<pp<<endl;
		}
			else{
				pp++;
				cout << "Vince il PC:"<<endl<<pu<<'-'<<pp<<endl;
			}
}
		if(pu==3)
			cout << "Hai vinto la sfida!" << endl;
			else
			cout << "Il PC ha vinto la sfida!" << endl;
	return 0;
}
