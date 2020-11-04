
#include<iostream>
#include<cstring>
using namespace std;

bool control(char a[],char b[]) {
    int dim1=strlen(a);
    for(int i=0;i<dim1;i++){
        int k=0;
        bool cond=true;
        if(a[i]==b[k]){
            for(int j=i;j<dim1;j++){
                if(a[j]!=b[k++])
                    cond=false;
            }
            if(cond)
                return true;
        }
    }
return false;
}

int main(){
    char frase[300];
    bool cond= true;
    cin.getline(frase,300,'.');
    char *p=strtok(frase," ");
    char *arr[100];
    int dim=0;
    while(p!=NULL){
        arr[dim++]=p;
        p=strtok(NULL," ");
    }
    for(int i=0;i<dim-1;i++){
        if(!control(arr[i],arr[i+1]))
                cond=false;
        }

    if(cond)
        cout<<"OK";
    else
        cout<<"NO";

return 0;
}
