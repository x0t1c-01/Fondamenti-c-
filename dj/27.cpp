#include<iostream>
using namespace std;
int main(){
	int N,x,z;
	z=0;
	bool seq=false;
	cin>>N;
	cin>>x;
		while(x!=-1){
			if(x<=N)
			z++;
			else
				z=0;
			if(z>=N)
				seq=true;			
		cin>>x;
}
	if(seq==true)
		cout<<"OK";
	else
		cout<<"NO";
}
