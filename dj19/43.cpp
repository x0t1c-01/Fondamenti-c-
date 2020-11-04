#include<iostream>
using namespace std;

bool controlsup(char a[],int dim){
    for(int i=0;i<dim;i++){
        if(a[i]=='('&&a[i+1]==')')
            return true;
    }
    return false;
}

bool controlben(char a[],int dim){
    int cont1=0,cont2=0;
    for(int i=0;i<dim;i++){
        if(a[i]=='(')
            cont1++;
        if(a[i]==')')
            cont2++;

    }
    if(cont1==cont2)
        return true;
    return false;
}

int main(){
    char a[100];
    char x;
    int dim=0;
    cin>>x;
    while(x!='.'){
        a[dim]=x;
        dim++;
        cin>>x;
    }
    if(controlben(a,dim))
        cout << " ok.. l'espressione e' ben parentesizzata... " << endl;
    else
        cout << " attento! parentesi non bilanciate! " << endl;

    if(controlsup(a,dim))
        cout << " attento! esistono coppie di parentesi superflue! " << endl;
    else
        cout << " ok.. l'espressione non contiene coppie di parentesi superflue " << endl;

    return 0;
}
