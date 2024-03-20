#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int num = N;
  int sum = 0;
  while (num > 0) sum += num % 10, num /= 10;
  if (N % sum == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
