#include<iostream>
using namespace std;
int mcd(int a,int b);
int main(){
	int x,z,contn=0,contp=0;
	bool cop=true;
	cin>>x;
	while(x!=0){
		if(x>0)
			contp++;
		else
			contn++;
		cin>>x;		
	}
		if(mcd(contp,contn)==1)
			cout<<"SI";
		else
			cout<<"NO";
	return 0;
}
	int mcd(int a,int b){
  		int t;
  	while(b!=0){
    		t=b;
    		b=a%b;
    		a=t;
	}
  	return a;
}
