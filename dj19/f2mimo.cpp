#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool control(char parola[100], char parola2[]) {
    int dim1 = strlen(parola);
    int dim2 = strlen(parola2);
    if (dim1 < 3 || dim2 < 3)
        return false;
    for (int i = 0; i < 3; i++) {
            if (parola[--dim1] != parola2[--dim2])
                return false;
    }
    return true;
}

int main()
{
    char buf [250];
    cin.getline(buf, 250,'.');
    int i = 0;
    char *p = strtok(buf, " \n;,?");
    char *array[100];

    while (p != NULL)
    {
        array[i++] = p;
        p = strtok(NULL," \n;,?");
    }

    string parolafinale="ERRORE";

    int max = 0;
    for (int k = 0; k < i - 1; k++) {
        int conta = 0;
        for (int j = 0; j < i; j++) {
            if (k != j)
                if (control(array[k], array[j]))
                    conta++;
        }
        if (conta > max) {
            max = conta;
            parolafinale= array[k];
        }
    }
   cout  << parolafinale;

    return 0;
}
