#include <stdio.h>

int main() {
 int a[7] = {23, 5678, 2, 564, 365, 77, 443};
 for (int i = 0; i < 6; ++i) {
  printf("a[%i] = %d ", i, a[i]);
 }
 printf("\n\n");

/////////////////////////////////////////////////

 int     m_a[2][2] = {1, 1, 1, 4},
         m_b[2][2] = {1, 2, 4, 1},
         m_c[2][2];

 for (int i = 0; i < 2; ++i) {
    for (int k = 0; k < 2; ++k) {
      int s = 0;
      for (int j = 0; j < 2; ++j) {
         s += m_a[i][j] * m_b[j][k];
      }
      m_c[i][k] = s;
    }
 }

   printf("A x B:\n");
 for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", m_c[i][j]);
    }
    printf("\n");
 }
}