// 编译命令 g++ -o libtryPython.so -shared -fPIC tryPython.cpp
#include <iostream>
using namespace std;
extern "C" {

void show_matrix(float *matrix, int rows, int columns) {
  int i, j;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      cout << matrix[i * columns + j] << "\t";
    }
    cout << endl;
  }
}
}
