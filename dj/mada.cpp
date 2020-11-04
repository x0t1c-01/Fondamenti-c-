#include<iostream>
using namespace std;
int inverse(int b){
    int s=0;
    while(b>0)
    {
        s=s*10+(b%10);
        b/=10;
    }
    return s;
}

int main(){
	int a,b;
	cin>>a>>b;
	if(a>b)
		return 0;
	for(int i=a+1;i<b;i++){
		if(inverse(i)>a&&inverse(i)<b)
			cout<<i;
	}
	
	return 0;
}
