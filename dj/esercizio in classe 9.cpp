//using switch, making a calculator
#include<iostream>
using namespace std;
int main(){
	char x;
	int a,b;
	cin>>a>>x>>b;
//using switch as condition to x, if x in case 1 is +, then continue with the instructions down below
//using break to stop the case at theat point and not going on with the other cases
	switch(x){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			if(b!=0)
				cout<<a/b;
			else
				cout<<"div impossibile";
				break;
	    case '%':
			if(b!=0)
			cout<<a%b;
			else
			cout<<"mod impossibile";
			break;
		default:
			cout<<"operatore non valido";
	}
	return 0
	;
	}
