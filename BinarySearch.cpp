#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size() - 1;
  int mid = 0;
  while(left <= right){
        mid = (left + (int)(right - left)/2);
        //cout << mid << endl;
        if(a[mid] == x)
            return mid;
        else if(x < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
  }
  return  -1;
}

/*int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}*/

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    cout << binary_search(a, b[i]) << ' ';
    //cout << linear_search(a, b[i]) << ' ';
  }
}

