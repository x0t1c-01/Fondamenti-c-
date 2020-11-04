#include<iostream>
using namespace std;

void  leggimat(int mat[][100],int x){
	int y=1;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
mat[i][j]=y;
y++;
if(y>x)
y=1;	
}}	
	
	
}
void stampa(int mat[][100]){
	for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
	
		cout<<mat[i][j];
	}
	cout<<endl;
}}
int main(){
	int n,mat[100][100];
	cin>>n;
	
	leggimat(mat,n);
	stampa(mat);
}

