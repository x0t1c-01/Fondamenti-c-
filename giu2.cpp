#include<iostream>
#include<cstring>
using namespace std;

int returnva(char x){
    return (int)x-96;
}
void dycr(char p[]){
    int d=strlen(p);
    for(int i=0;i<d;i++){
        p[i]=returnva(p[i]);
    }
}
bool pal(char p[]){
    int d=strlen(p);
    int z=d-1;
    for(int i=0;i<d;i++){
        if(z>d)
            break;
        else
            {
                if(p[i]!=p[z])
                    return false;
            }
    }
    return true;
}
int main(){
char frase[200];
int dim=0;
char* parole[100];
cin.getline(frase,200);
char* p=strtok(frase," ");
while(p!=NULL){
    parole[dim++]=p;
    p=strtok(NULL," ");
}
char* parole2[100];
char* p2=strtok(frase," ");
while(p!=NULL){
    parole[dim++]=p2;
    p2=strtok(NULL," ");
}
for(int i=0;i<dim;i++){
    dycr(parole[i]);
}
for(int i=0;i<dim;i++){
cout<<parole[i]<<endl;
}
for(int i=0;i<dim;i++){
    if(pal(parole[i])){
        cout<<parole2[i];
        return 0;
    }
}
cout<<"ERRORE";

return 0;
}
