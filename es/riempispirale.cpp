#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int in;
    cin>>in;

    for(int i=0;i<in;i++){
        cin>>arr[i];
    }
    for(int i=0;i<in;i++){
        cout<<arr[i];
    }

    int mat[100][100];
    int m;
    cin>>m;
    int ind=0;
    int top=0,bottom=m-1,left=0,right=m-1;

       while(1){


	    if(left>right)
            break;

        for(int i=left;i<=right;i++)
            mat[top][i]=arr[(ind++)%in];

        top++;

        if(top>bottom)
            break;

        for(int i=top;i<=bottom;i++)
            mat[i][right]=arr[(ind++)%in];

        right--;

        if(left>right)
            break;

        for(int i=right;i>=left;i--)
            mat[bottom][i]=arr[(ind++)%in];

        bottom--;

        if(top>bottom)
            break;

        for(int i=bottom;i>=top;i--)
            mat[i][left]=arr[(ind++)%in];

        left++;
	}

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

return 0;
}
