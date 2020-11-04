#include<iostream>
using namespace std;
bool vocale(char c){
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    return true;
  }
  return false;
}
int main(){
	bool voc=false,cond=true;
	char c;
	char a[100];
		for(int i=0;i<100;i++){
			cin>>a[i];
			if(vocale(a[i])){
			if(voc==false){
				c=a[i];
			voc=true;}					
			if(voc==true){
				if(a[i]!=c)
				cond=false;
			}		
			}
				
		}
	if(cond==true)
		cout<<"OK";
	else
		cout<<"ERRORE";	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
