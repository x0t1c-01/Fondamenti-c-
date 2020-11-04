#include<iostream>
using namespace std;
int main(){
	int seq[100]={0};
	int tmp=0,dim=0,x=0;
	cin>>tmp;
 	while (tmp!=0&&dim<100) { 
    	seq[dim++] = tmp;
    	cin >> tmp;
	}
	for (int i=0;i<dim;i++){
    	for (int j=0;j<dim;j++){
			if((seq[i]!=seq[j])&&(seq[i]%seq[j]==0)) {
        		x++;
      		}
    	}
    }
   cout<<x;
   return 0;
}
