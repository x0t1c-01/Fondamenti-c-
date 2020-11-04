#include<iostream>

using namespace std;

bool verifica1(int a,int b){
    if(b%a!=0)
        return false;
    return true;
}

bool verifica2(int a,int b){
    if(a%b!=0)
        return false;
    return true;
}

int main(){
    bool cond=true;
    int n;
    int z=-1;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        if(cond==false)
            break;

        if(verifica1(a[i],a[i-1])||verifica2(a[i],a[i-2]))
            cond=true;
        else{
            cond=false;
            z=a[i];
            }

    }
    cout<<z;
    return 0;

}
