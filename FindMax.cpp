#include <iostream>

using namespace std;

class MaximumFinder {
  public:
    int findMax(int num1, int num2) {
      if (num1 > num2)
        return num1;
      else
        return num2;
    }
};

int main() {
  int num1, num2, max;
  MaximumFinder mf;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  max = mf.findMax(num1, num2);

  cout << "Maximum of " << num1 << " and " << num2 << " is " << max;

  return 0;
}