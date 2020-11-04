#include<iostream>
using namespace std;
int main()
{
	float costo;
	cin>>costo;
	int condizione;
	cin>>condizione;
	 if (condizione==0)
	    cout<<costo;
	 else if (condizione==1)
	    cout<<costo-((costo/100)*10);
	 else if (condizione==2)
		cout<<costo-((costo/100)*15);
	 else if (condizione==3)
	 	cout<<costo-((costo/100)*25);	   

	return 0;
}
