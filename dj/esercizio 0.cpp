#include<iostream>
using namespace std;
int main(){
int v[5];
int voto;
for (int i=0;i<5;i++){
	cin>>voto;
	v[i]=voto;
}
if ((v[1]>24&&v[3]>24)||(v[0]>20&&v[2]>20&&v[4]>25)||(v[0]&&v[3]>=18||v[4]>28))
cout<<"ammesso";
else 
cout<<"non ammesso";
}
