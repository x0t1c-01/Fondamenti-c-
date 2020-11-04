#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char frase[300];
    cin.getline(frase, 300, '.');
    char* token;
    char* elenco[300];
    int k = 0;

    token = strtok(frase, " ");

    while(token != NULL)
    {
        elenco[k] = token;
        k++;
        token = strtok(NULL, " ");
    }
    for(int i=0;i<k-1;i++){
        //Luca castano novanta vantarsi ieri
        bool vabene=false;
        int h=strlen(elenco[i]);
        for(int j=0;j<h;j++){
            bool ok=true;
            int k=0;
            for(int s=j;s<h;s++){
                if(elenco[i+1][k++]!=elenco[i][s]){
                    ok=false;
                }
            }
            if(ok){
                vabene=true;
                break;
            }
        }
        if(!vabene)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"OK";
    return 0;
}
