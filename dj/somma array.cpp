#include<iostream>
using namespace std;
int main(){
int v[6];
int somma;
int somma1=0;
int x;
float media;
for (int i=0;i<6;i++){

cin>>x;
v[i]=x;
}
for (int i=0;i<6;i++){
somma = somma +v[i];}
cout<<somma<<endl;
media=(float)somma/6;
cout<<media<<endl;
for (int i=3;i<6;i++){
somma1+=v[i];}
cout<<somma1<<endl;
int max;
max=v[0];
for (int i=1;i<6;i++){
if(v[i]>max){
max=v[i];}
}
cout<<max<<endl;
int min;
min=v[0];
for (int i=1;i<6;i++){
if(v[i]<min){
min=v[i];}
}
cout<<min<<endl;
}
