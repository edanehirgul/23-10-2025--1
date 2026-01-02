
#include <stdio.h>

int main()
{
    int arr[3]= {1,2,3};
    // arr[0]=1, arr[1]=2, arr[2]=3
   
    int *p= arr; //p=&arr[0]
    
    printf("%d\n",*(p+1));
   
   
   
    return 0;
    
}
