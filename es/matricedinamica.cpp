#include<iostream>

using namespace std;

bool checkNull (int mat[][100],  int n ,  int r , int m) {
for ( int i=r ; i<r+m; i++){
	for ( int j =0; j<n; j++){
		 if (mat[ i ] [ j ] != 0)
  return false ;
	}
}
return true ;
}

bool findNull (int mat [][100],  int n ,  int m) {
    int r;
	for (r=0; r<=n-m; r++)
	    if (checkNull (mat,n , r ,m))
  	      return true ;

return false ;
}


int main(){
    int mat[100][100];
    int n;
    int m;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cin>>m;

if(findNull(mat,n,m))
    cout<<"esiste";
else
    cout<<"NO";


    return 0;
}
