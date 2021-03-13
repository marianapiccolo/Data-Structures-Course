#include <iostream>

const int NUM_ELEM = 10;

int main() {
  int c[NUM_ELEM];
  for (int i = 0; i < NUM_ELEM; i++) {
    c[i] = 2*i;
  }
  for (int i = 0; i < NUM_ELEM; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }  
  return 0;
}

