#include <iostream>
using namespace std;

int main() {
  int valore, somma = 0;
  char misura;

  cin >> valore;
  while (valore != 0) {
    cin >> misura;
      switch(misura) {
        case 's':
          somma += valore;
          break;
        case 'm':
          somma += valore * 60;
          break;
        case 'h':
          somma += valore * 60 * 60;
          break;
      }
      cin >> valore;
  }

  cout << somma;

  return 0;
}
