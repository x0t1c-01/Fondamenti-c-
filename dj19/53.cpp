#include<iostream>
using namespace std;

int main(){
    bool cond=true;
    char c[26];
    int a[26]={0};
        char b[100];
    int l=65;
    for(int i=0;i<26;i++){
        c[i]=l++;
    }

char x;
cin>>x;
int dim=0;
while(x!='*'){
    b[dim++]=x;
    cin>>x;
}

    for(int i=0;i<dim;i++){
        for(int j=0;j<26;j++){
            if(b[i]==c[j]||b[i]==c[j]+32){
                a[j]+=1;
                break;
            }
        }
    }

    int tmp=0;
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            if(a[i]<tmp)
                cond=false;
            else
                tmp=a[i];
        }
    }

    if(cond)
        cout<<"SI";
    else
        cout<<"NO";


return 0;
}
