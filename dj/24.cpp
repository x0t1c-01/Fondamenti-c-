#include <iostream>
using namespace std;

bool vocale(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return true;
  }
  return false;
}

int main() {
  int sequenze = 0;
  char attuale;
  char precedente;

  cin >> attuale;

  if (attuale == '.') {
    cout << sequenze;
    return 0;
  }

  precedente = attuale;

  while (attuale != '.') {
    if ((vocale(attuale) && vocale(precedente)) || (!vocale(attuale) && (!vocale(precedente)))) {
      sequenze++;
    }
    precedente = attuale;
    cin >> attuale;
  }

  cout << sequenze;

  return 0;
}
