#include <iostream>

using namespace std;

int main() {
  int count;
  int number;
  int sum;
  do {
    cout << "Insira um novo número: " << endl;
    cin >> number;
    
    sum += number;
    count++;
  }  while (number != 0);

  float average = (float)sum/(float)(count-1);
  cout << "A média da série é: " << average << endl;
 
  return 0;
}
