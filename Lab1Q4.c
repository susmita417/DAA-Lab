#include<stdio.h>

void print_array(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void Exchange(int *a,int *b)
{
    int t;
     t   = *a;
    *a   = *b;
    *b   =  t;
}

void Rotate_Right(int * arr,int r){
    if(r==0){
        return;
    }
    else{
        int p=r-1;
        for(int i=0;i<p;i++){
            Exchange(&arr[p],&arr[(p+i)%p]);
            
        }
    }
}

int main()
{
    int n,p,i=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of elements to be rotated: ");
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("Before Rotation: \n");
    print_array(n,arr);
    printf("\nAfter Rotation:\n");
    Rotate_Right(arr,p);
    print_array(n,arr);
    return 0;
}