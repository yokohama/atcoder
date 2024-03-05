#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  int remaining;

  int p1000 = x / 1000;
  int p100 = (x / 100) % 10;
  int p10 = (x / 10) % 10;
  int p1 = x % 10;
  
  if ((p1000 == p100 && p100 == p10) || (p100 == p10 && p10 == p1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
