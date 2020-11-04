#include<iostream>
using namespace std;
int main()
{
int materiale;
int ore;
int totale;
cin>>materiale;
cin>>ore;
totale=ore*40+materiale;
if(totale<100)
cout<<100;
else
cout<<totale;
}
