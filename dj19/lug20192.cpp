#include<iostream>
using namespace std;

int main(){
long long n;
cin>>n;

int a[100],b[100];
int dim=0;
if(n<10)
{
    cout<<1<<n<<' '<<2;
    return 0;
}
while(n>0){
    a[dim++]=n%10;
    n/=10;
}
int x=dim-1;
for(int i=0;i<dim;i++){
    b[i]=a[x--];
}

int cont=1;

int cont2=0;
for(int i=0;i<dim-1;i++){
    if(b[i]==b[i+1])
        cont++;
    else
        {
            cout<<cont<<b[i];
            if(cont>9)
                cont2+=3;
            else
                cont2+=2;

            cont=1;
        }
}

if(cont>0){
    cout<<cont<<b[dim-1];
    if(cont>9)
        cont2+=3;
    else
        cont2+=2;
}

cout<<' '<<cont2;

return 0;
}
