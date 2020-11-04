#include<iostream>
using namespace std;
int main(){
	
	int a[5][5];int riga;int col;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		cin>>a[i][j];
	}
	int max=a[0][0];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		if(max<a[i][j]){
			max=a[i][j];
	riga=i;col=j;
	}}

		
		cout<<"a["<<riga<<"]["<<col<<"]5oh Enta"<<endl;
		
	cout<<max;
	return 0;
}
