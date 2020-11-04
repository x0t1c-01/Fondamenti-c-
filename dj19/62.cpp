#include<iostream>
using namespace std;
int main(){
int k;
cin>>k;
int a[1000];
for(int i=0;i<k;i++){
    cin>>a[i];
}
int n,m;
cin>>n;
cin>>m;
int mat[1000][1000];
int top=0,bottom=n-1,left=0,right=m-1;
int ind=0;

while(1){
    if(left>right)
        break;

     for(int i=left;i<=right;i++){
         mat[top][i]=a[(ind++)%k];
     }
        top++;

    if(top>bottom)
        break;

    for(int i=top;i<=bottom;i++){
        mat[i][right]=a[(ind++)%k];
    }
        right--;

    if(left>right)
        break;

    for(int i=right;i>=left;i--){
        mat[bottom][i]=a[(ind++)%k];
    }
        bottom--;

    if(top>bottom)
        break;

    for(int i=bottom;i>=top;i--){
        mat[i][left]=a[(ind++)%k];
    }
        left++;
}

for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cout<<mat[i][j];
    cout<<endl;

return 0;
}
