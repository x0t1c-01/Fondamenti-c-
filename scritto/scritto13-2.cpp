#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

bool verifica(char a[100]){
    int dim=strlen(a);
    bool cond=true;
    char b[100];
    int j=0;
    for(int i=0;i<dim;i++){
        if(a[i]!='/')
            b[j++]=a[i];
    }
    int k=j-1;
    for(int i=0;i<4;i++){
        if(b[i]!=b[k--])
            cond=false;
        if(!cond)
            return false;
    }
    return true;
}


bool comp(char p1[100],char p2[],int index){

    if(index>6)
        return true;

    if(strncmp(p1,p2,index)==0)
        comp(p1,p2,index+1);
    else
        return false;

}

int main(){

char c[300];
cin.getline(c,300,'*');
char *a[100];
char *w[10];
char *k[100];
int dim3=0;

int dim=0;
char* p=strtok(c,"-");

while(p!=NULL){
    a[dim++]=p;
    p=strtok(NULL,"-");
}
int dim2=0;
for(int i=0;i<dim;i++){
    bool cond=true;
    int cont=0;
    if(verifica(a[i])){
    for(int j=0;j<dim2;j++){
        if(strcmp(a[i],w[j])==0)
        cond=false;
    }
if(cond)
        w[dim2++]=a[i];
}
else
    k[dim3++]=a[i];
}

for(int z=0;z<dim2;z++){
    int cont=0;
    for(int j=0;j<dim3;j++){
        if(comp(w[z],k[j],0))
            cont++;
    }
    cout<<w[z]<<endl;
    cout<<cont<<endl;
}

    return 0;
}
