
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int prefix_arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    printf("Printing array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
        prefix_arr[i]=sum+arr[i];
        sum=prefix_arr[i];
    }
    printf("\nPrinting prefix array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",prefix_arr[i]);
    }

    return 0;
}
