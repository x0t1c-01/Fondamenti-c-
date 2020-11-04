#include<iostream>

using namespace std;

int main(){
    int ind=0;
    char x;
    char a[1000];
    cin>>x;
    while(x!='*'){
        a[ind++]=x;
        cin>>x;
    }

    char y[3];
    for(int i=0;i<3;i++){
        cin>>y[i];
    }

    int cont=0;
if(ind>2){
    for(int i=0;i<ind-1;++i){
        if((a[i]==y[0])&&(a[i+1]==y[1])&&(a[i+2]==y[2])){
            cont++;
            i=i+2;
        }
    }
}
    cout<<cont;

    return 0;
}
