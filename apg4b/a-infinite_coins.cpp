#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; // 支払額
  int a; // 1円玉の枚数

  cin >> n >> a;

  if (n % 500 <= a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
