#include <iostream>

using namespace std;

void solve() {
  string s, t;
  cin >> s >> t;
  if(s.size() != t.size()) {
    cout << "NO";
    return;
  }
  for(int i = 0; i < s.size();i++){
    if(s[i] != t[(s.size() - i ) - 1]){
      cout << "NO";
      return;
    }
  }
  cout << "YES";
  //if(same) cout << "YES";
  //else cout << "NO";
}	

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
