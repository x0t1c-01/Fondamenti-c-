#include<iostream>
using namespace std;

bool f(int n,int cont){
    if(cont==n)
        return false;

    int somma=0;
    int i=cont;
    while(i>0){
        somma+=i%10;
        i=i/10;
    }
    somma+=cont;
    if(somma==n)
        return true;
    else
        f(n,cont+1);
}

int main(){
    int n;
    cin>>n;
    if(f(n,1))
        cout<<"F";
    else
        cout<<"si";


    return 0;
}
