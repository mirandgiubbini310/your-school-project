#include <iostream>
#include <string>
using namespace std;

string getRandomCode() {
  string code = "";
  int length = rand() % 8 + 10;
  for (int i = 0; i < length; i++) {
    code += ((rand() % 2) ? "0" : "1");
  }
  return code;
}
