#include <iostream>
using namespace std;

int main() {
  float a = 0, b = 0, x = 0, y = 0, z = 0; //inizializzo le variabili
  cin >> a >> b >> x >> y;
  if (x < 0 && y > 0) //controllo i casi come da consegna
    {
      z = a * x - b * y;
      cout << "\n" << z << endl; //stampo in caso ci siano le condizioni
    }
  else if (x >= 0 && y <= 0)
    {
      z = a * (x * x) - b * y; 
      cout << "\n" << z << endl;
    }
  else
    {
      z = a * x + b * (y * y);
      cout << "\n" << z << endl;
    }
   return 0;
}
