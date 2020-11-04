#include<iostream>

using namespace std;

int main(){
int n,m;
cin>>n>>m;
int a[100];
int l=0,r=n-1;
for(int i=0;i<n;i++){
    cin>>a[i];
}

int k[100][100];

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if(i<j)
            k[i][j]=a[(l++)%n];
        else if(i>j)
            k[i][j]=a[(r--+n)%n];

        if(i!=j)
            k[j][j]+=k[i][j];
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<k[i][j]<<' ';
    }
    cout<<endl;


}
    return 0;

}
