#include<iostream>
using namespace std;

void leggi(int[][100],int);
void calc(int [][100]);

int main(){
	int x;
	cin>>x;
	int a[100][100];
	
	leggi(a,x);
	calc(a);
		
	return 0;
}

void leggi(int mat[][100],int x){
	int y=1;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				mat[i][j]=y;
				y++;
					if(y>x){
						y=1;
					}
			}
		}
}
void calc(int mat[][100]){
	int somma=0;
	for(int i=0;i<10;i++){
		
			somma+=mat[i][10-i-1];
		}
	
	cout<<somma;
}
