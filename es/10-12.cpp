#include<iostream>
#include<string>
#include<climits>
using namespace std;

string getBig(string str){
    string c;
    int cont=0;
    int max=INT_MIN;
    string maxword;
    for(int i=0;i<str.length();i++){
        if(str[i]!= ' '){
            cont++;
            c+=str[i];
        }
        else if(str[i]== ' '){
            if(cont>max){
                max=cont;
                maxword=c;
            }
            cont=0;
            c.clear();
        }
    }
    return maxword;
}

int main(){
    string str;
    getline(cin,str);
    string max=getBig(str);
    char a[100];
    char risultato[100];
    int j=0;
    if(str[0]!=' ')
        a[j++]=str[0];

    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
            a[j++]=str[i+1];
    }
    int dimRis=0;
    bool trovato;
    for(int i=0;i<max.length();i++){
        trovato=false;

        for(int x=0;x<j;x++){

        if(max[i]==a[x]){
            a[x]='*';
            trovato=true;
            }
        }
        if(trovato==false)
        risultato[dimRis++]=max[i];

    }

    for(int i=0;i<dimRis;i++){
        cout<<risultato[i];
    }

    return 0;
}
