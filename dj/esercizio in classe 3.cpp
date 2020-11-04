#include<iostream>
using namespace std;
int main()
{
	int a;
	int somma=0;
	int i=1;
	while(i<10)
	{
		i++;
		cin>>a;
		
		somma+=a;
	}
	cout<<somma;
	return 0;
}
