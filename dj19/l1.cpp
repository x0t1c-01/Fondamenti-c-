#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int somma=0 ;
    for(int i=1;i<=n;i++)
        somma+=i*2-1;
    for(int i=1;i<n;i++)
        somma+=i*2-1;
    cout<<somma;
    return 0;
}
