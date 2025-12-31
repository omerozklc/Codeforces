#include <cstdlib>
#include <iostream>

using namespace std;

void solve() {
  int x, y, temp;
  for(int i = 1; i <= 25; i++){
    cin >> temp;
    if(temp == 1) {
      if(i % 5 == 0) x = i / 5;
      else x = (i / 5) + 1;
      if(i % 5 == 0)  y = 5;
      else y = i % 5;
      break;
    }
  }
  cout << abs(abs(x - 3) + abs(y - 3));
}	

int main() {
	ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
