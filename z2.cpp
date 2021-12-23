#include <iostream>

using namespace std;
int main() {
  int i, j;
  float min, sum;
  float A[5][5];
  float X[5];
  sum = 0;
  min = 10000;
  cout « "Vvedite vash 2mernii massiv" « endl;
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      cin » A[i][j];
  cout « "**********" « endl;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      cout « A[i][j] « "\t";
    cout « endl;
  }
  cout « "**********" « endl;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      sum = sum + A[j][i];
    X[i] = sum;
    sum = 0;
    if (X[i] < min)
      min = X[i];
  }
  for (i = 0; i < 5; i++)
    cout « X[i] « "\n";
  cout « endl « "**********" « endl;
  cout « "Minimal'nii element massva X = " « min « endl;
  return 0;
}
