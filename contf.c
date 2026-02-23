#include <iostream>

int main() {
  int n, A,B;

  std::cin >> n;

  std::cin >> A;
  for (int i = 1; i < n; i++) {
    std::cin >> B;
    if (B < A) {
      std::cout << "No" << std::endl;
      return 0;
    }
    A = B;
  }

  std::cout << "Yes" << std::endl;
  return 0;
}
