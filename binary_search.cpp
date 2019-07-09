#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

long long binarySearch(const vector<int> &a, long long l, long long r, long long x) 
{ 
    if (r >= l) { 
        long long mid = l + (r - l) / 2; 
        if (a[mid] == x) 
            return mid; 
        if (a[mid] > x) 
            return binarySearch(a, l, mid - 1, x); 
        return binarySearch(a, mid + 1, r, x); 
    } 
  
    return -1; 
} 

long long binary_search(const vector<int> &a, long long x) {
  long long left = 0, right = (int)a.size() - 1; 
  return binarySearch(a,left,right,x);
}

long long linear_search(const vector<int> &a, long long x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}


 int main() {
  long long n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long long m;
  std::cin >> m;
  vector<int> b(m);
  for (long long i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (long long i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
