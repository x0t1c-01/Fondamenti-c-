#include<iostream>
using namespace std;
bool pot2(int x) {
    return x>0&&!(x&(x-1));
}
int main(){
	int x,cont=0;
	cin>>x;
	if(x==0)
		cout<<"SI";
	else{
		while(x!=0){
		if(x%3==0)
			cont++;
		else
			if(!pot2(x))
			cont++;
		cin>>x;
	}
	
	if(cont>0)
		cout<<"NO";
	else
		cout<<"SI";
	}
	
	
	
	
	return 0;
}
