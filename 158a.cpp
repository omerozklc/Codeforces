#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> list;
  int temp;
  for(int i = 0; i < n; i++){
    cin >> temp;
    list.push_back(temp);
  }
  int result = 0;
  for(int i = 0; i < n; i++){
    if(list[i] != 0 && list[i] >= list[k - 1]) result++;
    else break;
  }
  cout << result; 
}	

int main() {
	ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
