#include<iostream>
using namespace std;
int main(){
	int g,m;
	
	cin>>m;
		
	if(m==1||m==2)
    cout<<"Inverno"<<endl;
	else if(m==4||m==5)
	cout<<"Primavera"<<endl;
	else if(m==7||m==8)
	cout<<"Estate"<<endl;
	else if(m==10||m==11)
	cout<<"Autunno"<<endl;
	
    else
	cin>>g;
	if(g>=1&&g<=20)
	{
		if (m==3)
		cout<<"Inverno"<<endl;
		if (m==6)
		cout<<"Primavera"<<endl;
		if (m==9)
		cout<<"Estate"<<endl;
		if (m==12)
		cout<<"Autunno"<<endl;
	}
	else 
	if(g>20)
    {
    	if (m==3)
		cout<<"Primavera"<<endl;
		if (m==6)
		cout<<"Estate"<<endl;
		if (m==9)
		cout<<"Autunno"<<endl;
		if (m==12)
		cout<<"Inverno"<<endl;
    }
	}
