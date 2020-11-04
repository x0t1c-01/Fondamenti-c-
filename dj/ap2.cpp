#include<iostream>
#include<string>
using namespace std;


int main(){
	string str[20]={""};
	string temp="";
	cin>>temp;
	int dim=0;
	while(temp!="."){
		str[dim++]=temp;
		cin>>temp;
	}
	for(unsigned i=0;i<str[0].length()+2;i++)
		cout<<"*";
		cout<<endl;
	for(int i=0;i<dim;i++)
		cout<<"*"<<str[i]<<"*"<<endl;
	for(unsigned i=0;i<str[0].length()+2;i++)
		cout<<"*";
		cout<<endl;
	
	return 0;
}
