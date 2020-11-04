#include<iostream>
#include<vector>
using namespace std;
int main(){
	int vec[100];
	int num,small,large,agami=0;
	cin>>num;
	small=num;
	large=num;
	while(num!=0){
		for(int i=0;i<100;i++){
			vec[i]=num;
	    	if (vec[i]<small)
                small=vec[i];
				if(vec[i]>large)	
				large=vec[i];
		}
		cin>>num;
		agami++;	
	}
	agami-=2;
	cout<<large-small-1-agami;
	return 0;
}
