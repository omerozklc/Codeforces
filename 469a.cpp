#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, x, y;
  cin >> n;
  vector<int> list(n, 0); 
  cin >> x;

  for(int i = 0; i < x;i++){
    int temp;
    cin >> temp;
    list[temp - 1] = 1;
  }
  cin >> y;
  for(int i = 0; i < y;i++){
    int temp;
    cin >> temp;
    list[temp - 1] = 1;
  }

  for(int i : list) {
    if(i == 0){ 
      cout << "Oh, my keyboard!";
      return;
    }
  }
  cout << "I become the guy.";
}	

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
