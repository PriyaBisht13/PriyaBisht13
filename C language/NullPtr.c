#include <stdio.h>  
int main()  
{  
    int *ptr=NULL;  
    if(ptr!=NULL)  
    {  
        printf("value of ptr is : %d",*ptr);  
    }  
    else  
    {  
        printf("Invalid pointer");  
    }  
  return 0;  
}  