#include <iostream>

int main() {
  int c[10] = {14, 0, 13};
  
  c[5] = 30;
  c[7] = 40;
  c[8] = 50;

  for (int i = 0; i < 10; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }  
  return 0;
}

