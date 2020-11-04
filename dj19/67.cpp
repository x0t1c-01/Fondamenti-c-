#include<iostream>
#include<cstring>
using namespace std;

int main(){
bool cond=false;
char str[1000];
int a[100];
const char* str2="fine";
const char* str3="amico";
int dim=0;
char* point;
char* str1;
    while(1){
        cin.getline(str,1000);
        str1=str;
        if(strcmp(str1,str2)==0)
            break;

        point=strtok(str," ");
        while(point!=NULL){
            if(strcmp(str3,point)==0)
                cond=true;
            point=strtok(NULL," ");
            }
        if(cond)
            a[dim++]=1;
        else
            a[dim++]=0;
        cond=false;
    }

for(int i=0;i<dim;i++){
    if(a[i]==1)
        cout<<"trovato"<<endl;
    else
        cout<<"non trovato"<<endl;
}







return 0;
}
