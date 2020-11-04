#include<iostream>
#include<cstring>
using namespace std;
bool control(string a,string b){
	int cont=0;
	for(unsigned i=0;i<a.length();i++){
		if(a[i]==b[i])
			cont++;
	}
		return false;
	
	return true;
}
bool equal(string a,string b){
	bool exist;
		if(a.length()!=b.length())
			return false;
		if(a==b)
			return true;
		int cont=0;
			for(unsigned i=0;i<b.length();i++){
				for(unsigned j=0;j<b.length();j++){
					if(a[i]!=b[j])
						exist=false;			
				}
				if(!exist)
					return false;
			}
		return true;
}

int main(){
	string a;
	string b;
	
	getline(cin,a);
	getline(cin,b);
	if(equal(a,b)){
		if(control(a,b))
			cout<<"SI";
		else
			cout<<"NO";
		}
	else
		cout<<"NO";
		return 0;
}
