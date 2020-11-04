#include<iostream>
using namespace std;
int main(){

int x, dim;
int v[100];
int y;
cin>>x;
cin>>dim;
for(int i=0;i<dim;i++){
	cin>>v[i];
}

for(int i=0;i<dim;i++){
if(v[i]<x&&v[i]%2==0)
cout<<v[i];
}
return 0;
}
