//il break si usa anche per interrompere un ciclo, example..
#include<iostream>
using namespace std;
int main(){
int x=0;
while(x<10){
	cout<<x;
	if(x==5)
	break;
	x++;
}
//the break closes the ciurcit after x gets to 5.
cout<<"fine";
return 0;
}


