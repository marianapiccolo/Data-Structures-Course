#include <iostream>

int sum(int number1, int number2){
  return number1 + number2;
}

int sub(int number1, int number2){
  return number1 - number2;
}

int mul(int number1, int number2){
  return number1 * number2;
}

int idiv(int number1, int number2){
  return number1 / number2;
}

float fdiv(int number1, int number2){
  return (float)number1 / (float)number2;
}

int res(int number1, int number2){
  return number1 % number2;
}

int main() {
  int number1;
  int number2;

  std::cout << "Digite o primeiro número: ";
  std::cin >> number1;

  std::cout << "Digite o segundo número: ";
  std::cin >> number2;

  std::cout << "Soma:            " << sum(number1, number2)  << std::endl;
  std::cout << "Subtração:       " << sub(number1, number2)  << std::endl;
  std::cout << "Multiplicação:   " << mul(number1, number2)  << std::endl;
  std::cout << "Divisão Inteira: " << idiv(number1, number2)  << std::endl;
  std::cout << "Divisão Real:    " << fdiv(number1, number2) << std::endl;
  std::cout << "Resto:           " << res(number1, number2)  << std::endl;

  return 0;
}
