# include <stdio.h>
void main() 
{ 
    int i, n, d ;
    printf("n value is : ") ; 
    scanf("%d", &n) ; 
    printf("\nEnter the number : ") ; 
    scanf("%d", &d) ; 
    printf("\nMultiples of %d are : ", d) ; 
    for(i = 1 ; i <= n ; i++)
    if(i % d == 0)
    printf("%d ", i) ; 
}
