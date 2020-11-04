#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char fr[100];
    cin.getline(fr,100);

    char *p=strtok(fr,"1 ");
    while(p!=NULL){
        p=strtok(NULL,"1 ");
    }

    cout<<*p;


return 0;
}
