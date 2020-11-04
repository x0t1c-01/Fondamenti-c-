//making a program that tells us the differens between two times in seconds
//making a function that converts hours,minuites and seconds into seconds 
#include<iostream>
using namespace std;
int convert(int a, int b, int c){
	return a*3600+b*60+c;	
}
int main(){
	int o1,m1,s1,o2,m2,s2;
	cin>>o1>>m1>>s1;
	cin>>o2>>m2>>s2;
	cout<<convert(o1,m1,s1)-convert(o2,m2,s2);	
	return 0;
}
