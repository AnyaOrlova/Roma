#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int A[100];
  int B[100];
  int a, b, n, i, j;
  float y, e, x;
  cout « "Vvedite x" « endl;
  cin » x;
  a = b = 1;
  e = 0.5;
  for (n = 1; n <= 30; n++) {
    y = cos(n * x + e);
    if (y < 0) {
      A[a] = n;
      a++;
    }
    if (y > 0) {
      B[b] = n;
      b++;
    }
    y = 0;
  }
  cout « "Znacheniya massiva A:" « endl;
  for (i = 1; i <= a; i++)
    cout « A[i] « " ";
  cout « endl « "Znacheniya massiva B:" « endl;
  for (j = 1; j <= b; j++)
    cout « B[i] « " ";
  cout « endl;
  return 0;
}
