#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int size;
  cin >> size;
  vector<int> planes(size);

  for(int i = 0; i < size; i++){
    int temp;
    cin >> temp;
    planes[i] = temp;
  }

  for(int i = 0; i < size; i++){
    int start = i + 1;
    for(int j = 1; j < 4; j++){
      start = planes[start - 1];
    }
    if(start == i + 1){
      cout << "YES";
      return;
    }
  }
  cout << "NO";
}	

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
