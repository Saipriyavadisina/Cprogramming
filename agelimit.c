#include <stdio.h>

int main(void) {
    int i;
    scanf("%d",&i);
    while(i--){
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);
        if((n>=a) && (n<b)){
            printf("yes\n");
            
        }
        else{
            printf("no\n");
        }
    }
	return 0;
}
