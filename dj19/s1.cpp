#include<iostream>
#include<cmath>
using namespace std;

int prime(int x){
    if(x<2){
        return 0;
    }

    int somma=0;
    while (x%2==0){
        somma+=2;
        x/=2;
    }
    for(int i=3;i<=sqrt(x);i+=2){
        while(x%i==0){
            somma+=i;
            x/=i;
        }
    }
    if(x>2)
        somma+=x;
return somma;

}

int main(){
int x,z;
cin>>x;
if(x>=0)
z=prime(x);
cout<<z;
return 0;
}
