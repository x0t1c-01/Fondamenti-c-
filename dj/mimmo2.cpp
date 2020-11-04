#include<iostream>
using namespace std;

int sommaa(int v[],int index,int somma){
	if(index==5)
		return somma;

	somma+=v[index];
	sommaa(v,index+=1,somma);	
	
}
int main(){
	int v[5]={1,2,3,4,5};
	cout<<sommaa(v,0,0);
	
	
}
