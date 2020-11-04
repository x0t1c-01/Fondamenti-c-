#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char a[1000];
    cin.getline(a,1000,'.');
    char *p=strtok(a," ");
    char *s[100];
    unsigned dim=0;
    while(p!=NULL){
        s[dim++] = p;
        p=strtok(NULL," ");
    }
    dim/=2;
    cout<<s[dim];


    return 0;
}
