#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int M,N,i;
	bool isPrime=true,gemelli=true;
  	cin>>N>>M;
  		for(i=2;i<=N/2;++i){
			if(N%i==0){
        		isPrime=false;
        	break;
      		}
  		}
  		for(i=2;i<=M/2;++i){
			if(M%i==0){
        		isPrime=false;
        	break;
      		}
  		}
  	if(abs(M-N)!=2)
  		gemelli=false;
  	if(!isPrime)
  		cout<<"non entrambi primi";
  	if(isPrime&&!gemelli)
  		cout<<"non gemelli";
	if(isPrime&&gemelli)
		cout<<"gemelli";

	return 0;
}
