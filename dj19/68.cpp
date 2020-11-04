#include<iostream>
#include<cstring>

using namespace std;

int main(){
    bool cond=false;
    char str[200];
    cin.getline(str,200,'.');
    int n;
    cin>>n;
    char* token =strtok(str," ");
    while(token!=NULL){
        if(strlen(token)==n){
            cout<<token;
            return 0;
        }
        token=strtok(NULL," ");
    }
    if(!cond)
        cout<<"ERRORE";
    return 0;
}
