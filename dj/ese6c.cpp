#include<iostream>
using namespace std;
int main()
{
	int chiamate;
	cin>>chiamate;
	if (chiamate<=80)
        cout<<5;
	else if ((chiamate>80)&&(chiamate<=140))
        cout<<5+((chiamate-80)*0.10);
	else if ((chiamate>140)&&(chiamate<=190))
	    cout<<11+((chiamate-140)*0.07);
	else if (chiamate>190)
	    cout<<14.5+((chiamate-190)*0.05);
	return 0;
}
