#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int min,max;
    printf("Enter the minimum range:");
    scanf("%d",&min);
    printf("Enter the maximum range:");
    scanf("%d",&max);
    printf("The numbers generated: \n");
    for(int i=0;i<n;i++){
        arr[i]=(rand() % (max-min+1))+min;
        printf("%d\t",arr[i]);
    }
    if(n<2){
        printf("not enough elements");
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        printf("\nSecond smallest: %d\n",arr[1]);
        printf("Second largest: %d",arr[n-2]);
    }
    
    return 0;
}
