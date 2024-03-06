#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;
  cin >> A;

  int a = A / 1000;
  int b = A / 100 % 10;
  int c = A / 10 % 10;
  int d = A % 10;

  if ((a == b && b == c) || (b == c && c == d)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
