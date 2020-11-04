#include<iostream>

using namespace std;


int main(){

    bool cond= true;

    char l;
    char a[100];
    int ind=0;

    cin>>l;
    while(l!='*'){
        a[ind++]=l;
        cin>>l;
    }

    int let=97;
    int delta[26];
    for(int i=0;i<26;i++)
        delta[i]=let++;

    int b[26]={0};

    for(int i=0;i<ind;i++){
        for(int j=0;j<26;j++){
            if(a[i]==delta[j])
                b[j]++;
        }
    }

    for(int i=0;i<25;i++){
        if(b[i]<b[i+1])
            cond=false;

    }


    if(cond==false)
        cout<<"NO";
    else
        cout<<"SI";


    return 0;
}
