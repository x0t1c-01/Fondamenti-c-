//continue makes you jump the next instruction 
#include<iostream>
using namespace std;
int main(){
int x=0;
	while(x<10){
	x++;
	if(x==5)
	continue;
	cout<<x;
// putting continue there makes the program jump over printing the number 5
}
cout<<"fine";
	return 0;
}
