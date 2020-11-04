#include<iostream>
using namespace std;

void riempi(int dimv,int dimR,int dimC,int newdimR,int newdimC,int i,int j,int mat[][100],int v[100],int iv){
int cont=0;
int turno=0;
while(cont<dimR*dimC-1){

i=dimR-newdimR;
j=dimC-newdimC;
cout<<i<<j<<endl;
if(i==dimR-newdimR&&j==dimC-newdimC){

for(j=0;j<newdimC;j++){
cout<<iv<<" "<<v[iv]<<endl;
mat[i][j]=v[iv++];
cout<<iv<<" "<<v[iv]<<endl;
cont++;

if(iv==dimv)
iv=0;	
}}

if(i==dimR-newdimR&&j==newdimC){

for(i=dimR-newdimR+1;i<newdimR;i++){

mat[i][newdimC-1]=v[iv];
cont++;
iv++;
if(iv==dimv)
iv=0;	
}}
if(i==newdimR&&j==newdimC){
for(j=newdimC-2;j>=dimC-newdimC;j--){
mat[newdimR-1][j]=v[iv++];
cont++;
if(iv==dimv)
iv=0;	
}}	
j=dimC-newdimC;
if(i==newdimR&&j==dimC-newdimC){
for(i=newdimR-2;i>dimR-newdimR;i--){
mat[i][j]=v[iv++];
cont++;
if(iv==dimv)
iv=0;
	
}	
}
newdimR-=2;
newdimC-=2;
}
	
	
}

int main(){
	
	int k;
	int a[100];
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
		for(int i=0;i<k;i++){
		cout<<a[i];
	}
	int mat[100][100];
	int dimR,dimC;
	cin>>dimR>>dimC;
	
riempi(k,dimR,dimC,dimR,dimC,0,0,mat,a,0);
for(int i=0;i<dimR;i++){
for(int j=0;j<dimC;j++){
cout<<mat[i][j]<<" ";	
	
}
cout<<endl;

}
	
	return 0;
}
