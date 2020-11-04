#include<iostream>

using namespace std;

bool anagramma(char f1[],char f2[],int dimf1,int dimf2,int ind){

    if(ind==dimf2)
        return true;
    if(dimf1!=dimf2)
        return false;

            for(int i=0;i<dimf2;i++){
                if(f1[ind]==f2[i]){
                    f2[i]='#';
                    return anagramma(f1,f2,dimf1,dimf2,ind+=1);
                }
            }

        return false;
}

int main(){
    string frase;
    char f1[100];
    char f2[100];
    getline(cin,frase,'*');

    for(int i=0;i<frase.size();i++)
        cout<<frase[i];
        cout<<endl;

    int n;
    cin>>n;

    int dimf1=0,dimf2=0;

    for(int i=0;i<n;i++){
        if(frase[i]!=' '){
            f1[dimf1++]=frase[i];
        }
    }

    int l=frase.size();

    for(int j=n;j<l;j++){
        if(frase[j]!=' '){
            f2[dimf2++]=frase[j];
        }
    }

    for(int i=0;i<dimf1;i++)
        cout<<f1[i];
        cout<<endl;

    for(int j=0;j<dimf2;j++)
        cout<<f2[j];
        cout<<endl;

    if(anagramma(f1,f2,dimf1,dimf2,0))
        cout<<"OK";
    else
        cout<<"NO";


    return 0;
}
