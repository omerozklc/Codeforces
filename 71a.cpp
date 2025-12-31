//
// Omer Ozkilic 12/31/2025 02:51
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int size;
  vector<string> list;
  string temp;
  cin >> size;
  for(int i = 0; i < size; i++){
    cin >> temp;
    list.push_back(temp);
  }
  for(string str : list){
    if(str.size() <= 10) cout << str << endl;
    else{
      temp = "";
      temp += str[0];
      int i = str.size() - 2;
      temp += to_string(i);
      temp += str[str.size() - 1];
      cout << temp << endl;
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
