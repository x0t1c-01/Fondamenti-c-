#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
    char c[250];
    vector<string> s;
    cin.getline(c,250,'.');
    int i=0,j=0;
    char *token=strtok(c," \n;,?");
    while(token!=NULL){
        s.push_back(token);
        token=strtok(NULL," \n;,?");
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    cout<<endl;
    string m=s[0];
    char p[m.length()];

    for(int i=0;i<sizeof(m);i++){
            p[i]=m[i];
            cout<<p[i]<<' ';
        }
    return 0;
}
