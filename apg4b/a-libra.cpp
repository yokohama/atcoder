#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int left = A + B;
  int right = C + D;

  if (left > right) {
    cout << "Left" << endl;
  } else if (left < right) {
    cout << "Right" << endl;
  } else {
    cout << "Blanced" << endl;
  }
}
