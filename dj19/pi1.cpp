#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
char x,y;
cin>>x>>y;
char a[100];
int dim=0;
char z;
cin>>z;
while(z!='*'){
    a[dim++]=z;
    cin>>z;
}
int cont=0;
for(int i=0;i<dim-1;i++){
    if(a[i]==x&&a[i+1]==y)
        cont++;
}
if(cont==n)
    cout<<"OK";
else
    cout<<"NO";

    return 0;
}
