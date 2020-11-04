#include<iostream>
using namespace std;
int main(){
    int n,z;
    bool x=false;
    cin>>n;
    if(n==0){
        cout<<"NO";
        return 0;
    }

    while(n>0){
        z=n%10;
        if(z==0)
            x=true;
        n/=10;
    }

    if(x)
        cout<<"NO";
    else
        cout<<"SI";
    return 0;
}
