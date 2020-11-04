#include<iostream>
#include<string.h>
using namespace std;
bool vocale(char c){
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    return true;
  }
  return false;
}
int main(){
	bool cond=false;
	int n,m,o,cont=0,cont1=0;
	string s;
	cin>>n;
	cin>>m;
	cin>>s;
		if(s.length()>100)
			return 0;
			int z=s.length();
		for(int i=0;i<=z-m+1;i++){
			cond=false;
			cont1=0;
			if(vocale(s[i])&&vocale(s[i+m+1])){
				o=i;	
				for(int k=o;k<=o+m+1;k++){	
					if(!vocale(s[k]))
						cont1++;
				}
				if(cont1==m)
				cond=true;
				if(cond)
				cont++;
					
			}
		}	
	if(cont>=n)
		cout<<"OK";
	else
		cout<<"NO";		
	return 0;
}
