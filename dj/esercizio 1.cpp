#include<iostream>
using namespace std;
int main(){

int cilendrata;
int etA;
cout<<"inserici numero cilendrata"<<endl;
cin>>cilendrata;
cout<<"inserisci etA"<<endl;
cin>>etA;
if ((cilendrata<100&&14<etA<18)||(cilendrata>=100&&etA==18))
cout<<"puo guidare";
else
cout<<"non puo guidare";
}
