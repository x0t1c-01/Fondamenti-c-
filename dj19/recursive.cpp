#include<iostream>
using namespace std;

double doubble(int n,double c){
    if(n<=1)
        return c;
    return doubble(--n,c*2);
}
int main(){
int n;
double c;
cin>>n;
cin>>c;
int y=doubble(n,c);
cout<<y;



return 0;
}
