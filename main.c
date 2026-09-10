/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10]={10,20,30,40,50};
    int n=sizeof(arr[0]);
    int key=30;
    int found=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=i;
            break;
        }
    }
    if(found!=-1)
   printf("element founf at index %d,found");
   else
   printf("element not found");
    return 0;
}