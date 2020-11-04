
#include<iostream>
using namespace std;

bool control(int n,int a[][100]){

	int somma=0,s=n-1,v;

		if(a[0][n-1]==a[n-1][0])
			v=a[0][n-1];

		else
			return false;

			for(int k=1;k<n;k++){
				for(int i=k;i>=0;i--){
					somma+=a[i][s--];
				}

				if(somma!=v)
					return false;

				somma=0;
				s=n-1;

			}

			for(int k=1;k<n-1;k++){
				for(int i=k;i>=0;i--){
					somma+=a[s--][i];
				}

				if(somma!=v)
					return false;

				somma=0;
				s=n-1;

			}

		return true;
}

int main(){
	int n;
	int a[100][100];
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	if(control(n,a))
		cout<<"OK";
	else
		cout<<"NO";

return 0;
}
