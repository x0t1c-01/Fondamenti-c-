#include<iostream>
using namespace std;
int main(){
	char x;
	bool num=false;
	while(x!='*'){
		cin>>x;
		if((x>='0')&&(x<='9'))
			num=true;
		}
	if(num)
		cout<<"ALMENO UNA";		
	else
		cout<<"NESSUNA";
	
		
		return 0;
}
