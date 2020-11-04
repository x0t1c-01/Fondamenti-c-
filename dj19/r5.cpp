#include<iostream>

using namespace std;

void invert(int a[],int begin, int end){
    if(begin>=end){
        return;
    }

    int tmp;
    tmp=a[begin];
    a[begin]=a[end];
    a[end]=tmp;
    begin++;
    end--;
    invert(a,begin,end);
}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int begin=0;
    int end=n-1;
    invert(a,begin,end);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }



    return 0;
}
