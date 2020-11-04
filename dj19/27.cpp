#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    int a[100];
    int x;
    int dim=0;
    int cont=0;
    cin>>x;
    while(x!=-1){
        a[dim++]=x;
        cin>>x;
    }
    for(int i=0;i<dim;i++){
        if(a[i]<=n)
            cont++;
        else{
            if(cont>=n)
                break;
            cont=0;
        }
    }

    if(cont>=n)
        cout<<"OK";
    else
        cout<<"NO";
    return 0;
}
