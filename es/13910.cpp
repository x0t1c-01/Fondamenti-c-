#include<iostream>

using namespace std;

bool riempi(char a[],char b[],char c[],int ia,int ib,int ic,int dima,int dimb,int dimc){
    if(dima!=dimb)
        return false;
    if(dima+dimb!=dimc)
        return false;

    if(dimc==ic)
        return true;
        cout<<a[ia]<< " "<<b[ib]<<endl;
    c[ic]=a[ia];
    c[ic+1]=b[ib];
    riempi(a,b,c,ia=ia+1,ib=ib-1,ic=ic+2,dima,dimb,dimc);
}


int main(){

    char a[100],b[100],c[100];
    int dima,dimb,dimc;
    cin>>dima>>dimb>>dimc;
    for(int i=0;i<dima;i++){
        cin>>a[i];
    }
    for(int i=0;i<dimb;i++){
        cin>>b[i];
    }
    int ia=0;
    int ib=dimb-1;
    int ic=0;
    if(riempi(a,b,c,0,dimb-1,0,dima,dimb,dimc))
    for(int i=0;i<dimc;i++){
        cout<<c[i];
    }
    else
        cout<<"FALSE";

    return 0;
}
