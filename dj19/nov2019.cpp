#include<iostream>

using namespace std;

int div(int a,int b,int c){
    int cont=0,cont2=0;
        for(int i=b;i<=c;i++){
            cont=0;
            for(int j=1;j<=i;j++){

                if(i%j==0)
                    cont++;
        }
        if(cont==a)
            cont2++;
        }
    return cont2;
}


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int z=div(a,b,c);

    cout<<z;




    return 0;

}
