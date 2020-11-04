#include<iostream>
#include<cstring>
using namespace std;

int function2(int a[],int dim,int x,int somma){
int cont=0;
    for(int i=0;i<dim;i++){
        if(a[i]==x){
            cont++;
            a[i]=0;
        }
    }
    if(cont==0)
    return somma;

    return function2(a,dim,cont,somma+=cont);

}




int main(){
/*    int a[100];
    int dim,x;
    cin>>dim;
    for(int i=0;i<dim;i++){
        cin>>a[i];
    }
    cin>>x;
    int cont=0,somma=0;
    int z=function2(a,dim,x,somma);
        cout<<z;

*/
char *str[100];
const int dim=100;
char f[dim];
cin.getline(f,dim);
cout<<f<<endl;
int cont=0;
const char *delim=" ";
    char *token=strtok(f,delim);
    str[0]=token;
    for(int i = 1; token!= NULL; i++)
    {
        token=strtok(NULL,delim);
        str[i] = token;
        cont = i;
    }

    for(int i=0;i<cont;i++){
        cout<<str[i]<<endl;
    }

        string s;
        for(int i=0;i<cont;i++){
            s=str[i];

            cout<<s.length()<<endl;
        }





    return 0;
}
