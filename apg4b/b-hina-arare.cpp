#include <bits/stdc++.h>
using namespace std;

int main() {
  bool flag = false;
  int N;

  cin >> N;

  for (int i=0; i<N; i++) {
    char S;
    cin >> S;
    if (S == 'Y') 
      flag = true;
  }

  cout << (flag ? "Four" : "Three") << endl;
}
