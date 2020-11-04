#include<iostream>
using namespace std;
int main()
{
int A,B,C;
cin>>A>>B>>C;
if (A<(B+C) && B<(C+A) && C<(A+B))
    {
	if(A==B && B==C)
        cout<<"TRIANGOLO EQUILATERO";
	else if (A==B || B==C || C==A)
	    cout<<"TRIANGOLO ISOSCELE";
	else 
	    cout<<"TRIANGOLO SCALENO"; 
    }
else 
    cout<<"NO";
}
