#include <iostream>

using std::cout;

int main() {
  int number1;
  int number2;

  cout << "Digite o primeiro número: ";
  std::cin >> number1;
  cout << "Digite o segundo número: ";
  std::cin >> number2;

  if (number1 == number2)
    cout << number1 << " ==  " <<  number2 << std::endl;
  if (number1 != number2)
    cout << number1 << " !=  " <<  number2 << std::endl;
  if (number1 < number2)
    cout << number1 << " <  " <<  number2 << std::endl;
  if (number1 > number2)
    cout << number1 << " >  " <<  number2 << std::endl;

  if (number1 <= number2)
    cout << number1 << " <=  " <<  number2 << std::endl;;
  if (number1 >= number2)
    cout << number1 << " >=  " <<  number2 << std::endl;;

  return 0;
}
