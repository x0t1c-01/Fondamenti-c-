#include <iostream>
#include <vector>
using namespace std;

int main() {
  int attuale, precedente;
  int parziale = 0;
  vector<int> somme;

  cin >> attuale;																				
  if (attuale == 0) {
    somme.push_back(attuale);
  } else {
    parziale += attuale;
  }

  precedente = attuale;
  cin >> attuale;

  while (!(attuale == 0 && precedente == 0)) {

    if (attuale != 0) {
      parziale += attuale;
    } else {
      somme.push_back(parziale);
      parziale = 0;
    }

    precedente = attuale;
    cin >> attuale;
  }

  for (int i = 0; i < somme.size(); i++) {
    cout << somme[i] << endl;
  }

  return 0;
}
