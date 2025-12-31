#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int distance, result = 0, index = 0;
  vector<int> list = {5,4,3,2,1};

  cin >> distance;
  while(distance != 0){
    result += distance / list[index];
    distance %= list[index++];
  }
  cout << result;
}	

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
