/*
 * author: cyclexit
 * start from: 2020-11-07 17:32
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int a, b;
  cin >> a >> b;
  cout << a << " " << b << endl;
  swap(a, b);
  cout << a << " " << b << endl;
  return 0;
}