#include <iostream>
using namespace std;

int main() {
  int angka1 = 2;  // A food variable of type string
  int* angka2 = &angka1;    // A pointer variable, with the name ptr, that stores the address of food

  // Output the value of food (Pizza)
  cout << "variabel angka 1 bernilai : " << angka1 << "\n";

  // Output the memory address of food (0x6dfed4)
  cout <<  "alamat variabel angka 1 bernilai : " << &angka1 << "\n";

  // Output the value of food (Pizza)
  cout << "variabel angka 2 bernilai : " << angka2 << "\n";

  // Output the memory address of food (0x6dfed4)
  cout <<  "alamat variabel angka 2 bernilai : " << &angka2 << "\n";
}
