#include<iostream>

using namespace std;

int main(){
int x;
cin>>x;
int z=1;
int mat[10][10];

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(z>x)
            z=1;
        mat[i][j]=z++;
    }
}

int l=0,r=9,somma=0;
    for(int i=0;i<10;i++)
        somma+=mat[l++][r--];

cout<<somma;
    return 0;
}
