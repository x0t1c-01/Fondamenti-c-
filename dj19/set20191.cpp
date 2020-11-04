#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> v;
    char s[1000];
    cin.getline(s,1000,'.');
    char* token;
    token=strtok(s," ");
    while(token!=NULL){
        if(find(v.begin(),v.end(),token)==v.end())
            v.push_back(token);
        token=strtok(NULL," ");
    }
    cout<<v.size();
    return 0;
}
