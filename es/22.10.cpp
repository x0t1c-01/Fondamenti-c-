//esercizio 4

#include<iostream>
using namespace std;
/*
//make a function that calculates the sum of the numbers in the principal diagonal of a matrix
int diag(int a[][100],int n){
    int somma=0;
    for(int i=0;i<n;i++){
        somma+=a[i][i];
    }
    return somma;
}
//make a function the reads the matrix
void readmat(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}

//make a function that compares each element with the sum of the diagonal
bool exist(int a[][100],int n,int s){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==s)
                return true;
            }
        }
        return false;
}

int main(){
int a[100][100];
int n;
cin>>n;
readmat(a,n);
if(exist(a,n,diag(a,n)))
    cout<<"exist";
else
    cout<<"not";
    return 0;
}
*/

//esercizio 6
//make a recursive functionto check if number is perfect
//a number is perfect when the sum of the divisors of the number i equal to the number it self;

bool perfect(int n,int somma,int i){
    if(somma==n)
        return true;
    if(somma>n)
        return false;
    if(n%i==0)
        somma+=i;
        i++;
    perfect(n,somma,i);
}


int main(){
    int somma=0;int i=1;
    int n;
    cin>>n;
    if(perfect(n,somma,i))
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}
