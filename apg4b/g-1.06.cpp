#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  if (x < 10) {
    cout << "xは10より小さい" << endl;
  } else if (x > 20) {
    cout << "xは10より大きくて20より大きい" << endl;
  } else if (x == 15) {
    cout << "xは15" << endl;
  } else {
    cout << "xは10より大きくて20より小さくて15ではない" << endl;
  }


  cout << "終了" << endl;
}
