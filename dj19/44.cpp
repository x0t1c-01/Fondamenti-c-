#include<iostream>
using namespace std;


int main(){
char a[26];
int b[100];
int n,x;
    for(int i=0;i<26;i++){
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        if(b[i]<26){
            x=b[i];
            cout<<a[x];
        }
    }

    return 0;
}
