#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int x){
    int i,n;
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            return false;

        }
    }
    return true;
}

bool both(int n,int m){

    if(isprime(m)&&isprime(n))
        return true;

    return false;

}
int main(){
  int n,m;
  cin>>n;
  cin>>m;
  bool cond=false;
  int d=m-n;
  if(!both(m,n)){
      cout<<"non entrambi primi";
      return 0;
    }

 else
      if(abs(d)==2){
        cout<<"gemelli";
        return 0;
    }
        else{
        cout<<"non gemelli";
        return 0;
  }
  return 0;
}
