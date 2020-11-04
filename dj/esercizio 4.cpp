#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if ((N<0)||(N>30))
	   cout<<"VOTO NON VALIDO";
	else if (N>=18)
	   cout<<"ESAME SUPERATO";
	else 
	   cout<<"BOCCIATO";
return 0;
	
	
	
	
}
