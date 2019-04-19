#include<stdio.h>
int main()
{
   int n1, n2, n3, i, j, k, sumn1 = 0, sumn2 = 0, sumn3 = 0;
   scanf("%d %d %d", &n1, &n2, &n3);
   for(i = 1; i <= n1; i++){
      scanf("%d", &k);
      sumn1 += k;
   }
 for(i = 1; i <= n2; i++){
      scanf("%d", &k);
      sumn2 += k;
   }
   for(i = 1; i <= n3; i++){
      scanf("%d", &k);
      sumn3 += k;
   }
   k = (sumn1 + sumn2 + sumn3)/ 3 - 3;
   printf("%d\n", k);

   return 0;
}
