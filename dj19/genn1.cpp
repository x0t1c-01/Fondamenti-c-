#include<iostream>

using namespace std;


int main(){
    char c[100];
    bool cond=false,condd=true;
    char x;
    int dim=0,temp=0,cont=0;
    cin>>x;
    while(x!='*'){
    c[dim++]=x;
    cin>>x;
}
    for(char z='a';z<='z';z++){
        for(int i=0;i<dim;i++){
            if(z==c[i])
            cont++;
        }
        if(cont==0){
            if(cond==false)
                cond=true;
            else{
                if(temp==0)
                    break;
                else{
                        condd=false;
                        break;
                    }
        }
    }
        else {
            if(cont>temp){
                condd=false;
                break;
            }
            else{
                temp=cont;
                cont=0;
            }
        }
    }

    if(condd)
        cout<<"SI";
    else
        cout<<"NO";






    return 0;
}
