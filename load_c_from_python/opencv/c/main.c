#include <stdio.h>
#include <stdlib.h>

// 声明外部函数
extern int gen();

int main() {
  // 调用动态库中的函数
  gen();
  printf("Random image has been generated.\n");
  return 0;
}
