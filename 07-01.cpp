#include <iostream>
#include <algorithm>

using namespace std;

// 2つの整数値を小さい順に並び替える
// 関数 myswap をポインタを引数として受け取る
void myswap(int *a[5] ,int *b[5])
{
  int x = 0;
  if(*a[x] > *b[x])
      {
        int temp;
        temp = *a[x];
        *a[x] = *b[x];
        *b[x] = temp;
      }
}

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int b[5] = {5, 4, 3, 2, 1};
    
    for (int i = 0; i < 5; ++i)
    {
     myswap(&a[i], &b[i]);
                                                   // myswap を呼び出して a[i] と b[i] を並び替え
     cout << a[i] << ", " << b[i] << endl;
    }
    return 0;
}
