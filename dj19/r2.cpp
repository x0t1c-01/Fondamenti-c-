#include<iostream>

using namespace std;

bool f(int a[],int start,int k){
    if(k==start)
        return true;
    if(a[start]!=a[k+start])
        return false;

    return f(a,start+=1,k);
}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n%2!=0||n>10)
        {
            cout<<"NO";
            return 0;
        }
        int k=n/2;
        int m=0;
    if(f(a,m,k))
        cout<<"SI";
    else
        cout<<"NO";


return 0;
}
