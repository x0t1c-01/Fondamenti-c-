#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int x;
    int a[100];
    int n,m,dim=0;
    cin>>n;
    cin>>m;
    cin>>x;
    while(x!=-1){
        if(x<0){
            cout<<"NO";
            return 0;
        }
        a[dim++]=x;
        cin>>x;
    }

    int cont=0;
    for(int i=0;i<dim;i++){
        for(int j=1;j<50;j++){
            if(a[i]==pow(m,j)){
                cont++;
                break;
            }
        }
    }

        if(n<=cont)
            cout<<"OK";
        else
            cout<<"NO";


return 0;
}
