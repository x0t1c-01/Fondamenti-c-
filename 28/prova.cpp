#include <iostream>
using namespace std;

int main(){
	int n;
	char a[100];
	cin>>n;
	cin.ignore();
	cin.getline(a,100);
	cout<<"n: "<<n<<endl;
	cout<<"a: "<<a<<endl;
	return 0;
}
