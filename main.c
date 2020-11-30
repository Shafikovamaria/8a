#include <stdio.h>
const int N = 5;
main()
{
int i, j, A[N], c;
int srav,perest;
srav=0;
perest=0;
    for ( i = 0; i < N; i ++ )
    {
        printf("A[%d]> ", i );
        scanf ("%d", &A[i]);
    }
    for ( i = 0; i < N-1; i ++ )
 for ( j = N-2; j >= i; j -- )
 {if ( A[j] > A[j+1] )
 {
 c = A[j]; A[j] = A[j+1];
 A[j+1] = c;
 srav++;
 perest++;
 }
 else
    srav ++;
 }
for ( i = 0; i < N; i ++ )
 printf("%d ", A[i]);
  printf("%d %d ", srav, perest );

}
