#include<iostream>
#include<cstring>
using namespace std;

int main(){
char str[99];
int cont=0;
cin.getline(str,99);

char* point;
point =strtok(str," ,.");
while(point!=NULL){
    cont++;
    point=strtok(NULL," ,.");
}

cout<<cont;
delete point;


return 0;
}
