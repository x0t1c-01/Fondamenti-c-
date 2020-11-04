#include<iostream>
using namespace std;

bool vocale(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;

    return false;
}

int main(){
    bool cond=true;
    char c[100];
    int dim=0;
    char a;
    cin>>a;
    while(a!='*'){
        if(a<97||a>122){
            cout<<"NO";
            return 0;

        }
        c[dim++]=a;
        cin>>a;
    }
    if(dim==1&&!vocale(c[0])){
        cout<<"SI";
        return 0;
    }

    char x='a';
    for(int i=0;i<dim;i++){
        if(!vocale(c[i])){
            if(c[i]>=x)
                x=c[i];
            else{
                cond=false;
                break;
        }
    }
    }
    if(cond)
        cout<<"SI";
    else
        cout<<"NO";

    return 0;
}
