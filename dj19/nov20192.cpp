#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string st={"1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_"};
    string nu{"1234567890"};
    char var[255];
    cin.getline(var,255);
    char *p = strtok(var," ");
    char *a[10];
    int dim=0;
    if(var[0]==' ')
    {
        cout<<"NO";
        return 0;
    }
    while(p!=NULL){
        a[dim++]=p;
        p=strtok(NULL," ");
    }

    if(dim>1){
        cout<<"NO";
        return 0;
    }

    bool cond=true;
    int dem=strlen(a[0]);
    string x=a[0];
    for(int i=0;i<10;i++){
        if(nu[i]==x[0]){
            cout<<"NO";
            return 0;
        }
    }

    int cont=0;
    int dim2=st.length();

    for(int i=0;i<dem;i++){
        cont=0;
        for(int j=0;j<dim2;j++){
            if(x[i]==st[j])
                cont++;
    }
    if(cont==0)
        cond=false;
}
if(cond)
    cout<<"SI";
else
    cout<<"NO";


    return 0;
}
