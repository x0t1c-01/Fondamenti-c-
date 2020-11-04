#include<iostream>
#include<cmath>
using namespace std;

bool pot2(int n){
    int i=0;
    while(pow(2,i)<=n){
        if(pow(2,i)==n)
            return true;
        i++;
    }
    return false;
}

int main(){
        int x;
        cin>>x;
        int cont=0,cont2=0;
        if(x==0){
            cout<<"SI";
            return 0;
        }
        while(x!=0){

            if(pot2(x))
                cont++;
            cont2++;
            cin>>x;
        }
        if(cont==cont2){
            cout<<"SI";
        }
        else
            cout<<"NO";

    return 0;
}
