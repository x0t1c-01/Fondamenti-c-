#include<iostream>
using namespace std;
int main(){
int a[100];
int x=0,y=0;
int i=0;
int somma=0;
int media=0;
bool cond=false;
cin>>x;
if(x==-50){
    cout<<"VUOTA";
    return 0;
}

while(x!=-50){
    a[i]=x;
    somma+=x;
    i++;
    cin>>x;
}
media=somma/i;

for(int j=0;j<i;j++){

    if(a[j]>=media){

        if(cond==false){
        y=a[j];
        cond=true;
    }

    if(cond){
        if(a[j]<y)
            y=a[j];
        }
    }
}
cout<<y;
return 0;
}
