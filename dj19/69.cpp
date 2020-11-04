#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    char c[250];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int j=48;
    for(int i=0;i<n;i++){
        if(j==58)
            j=48;
        if((c[i]>=97)&&(c[i]<=122))
            c[i]=c[i]-32;
        else if((c[i]>=65)&&(c[i]<=90))
            c[i]=c[i]+32;
        else
            c[i]=j++;
        }
    for(int i=0;i<n;i++){
        cout<<c[i];
    }

return 0;
}
