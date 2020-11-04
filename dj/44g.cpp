#include <iostream>
using namespace std;

void leggo(char [], int &, int []);
void decifro(char [], int &, int []);

int main() {
   char lettere[26];
   int n;
   int key[100];

   leggo(lettere, n, key);
   decifro(lettere, n, key);

   return 0;
}

void leggo(char lettere[], int& n, int key[]) {
   for(int i = 0; i < 26; i++) {
      cin >> lettere[i];
   }
   cin >> n;
   for(int i = 0; i < n; i++){
      cin >> key[i];
   }
}


void decifro(char lettere[], int& n, int key[]) {
   for (int i = 0; i < n; i++) {
      if (key[i] < 26) {
         cout << lettere[key[i]];
      }

   }
}

