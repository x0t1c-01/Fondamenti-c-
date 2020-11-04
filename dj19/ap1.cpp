#include<iostream>
using namespace std;

int main(){
    int a[100];
    int x,dim,e,i=1;
    bool cond=true,cond2=false  ;
    cin>>x;
    while(x!=0){
        a[dim++]=x;
        cin>>x;
    }
        for(int j=i;j<=20;j+=i){
            for(int x=0;x<dim;x++){
                if(j==a[x]){
                cond=false;
                break;
            }
            }
            if(cond){
                e=j;
                break;
            }
            else
                cond=true;
            i++;
        }

    cout<<e;


    return 0;
}
