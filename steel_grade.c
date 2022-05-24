#include<stdio.h>  
  
int main()  
{  
    int h, t;  
    float carbon;  
    printf("Enter hardness, tensile & Carbon in Steel\n");  
    scanf("%d %d %f", &h, &t, &carbon);  
    if(h > 50 && carbon < 0.7 && t > 5600)  
    {  
        printf("10\n");  
    }  
    else if(h > 50 && carbon < 0.7)  
    {  
        printf("9\n");  
    }  
    else if(carbon < 0.7 && t > 5600)  
    {  
        printf("8\n");  
    }  
    else if(h > 50 && t > 5600)  
    {  
        printf("7\n");  
    }  
    else if(h > 50 || carbon < 0.7 || t > 5600)  
    {  
        printf("6\n");  
    }  
    else if(h < 50 && carbon > 0.7 && t < 5600)  
    {  
        printf("5\n");  
    }
    return 0;  
}  
