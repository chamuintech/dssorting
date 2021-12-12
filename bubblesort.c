#include <stdio.h>
#include <stdlib.h>
void print_arr(int a[],int n){
    int i;
    printf("Elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void bubblesort(int a[],int n){
    int i,j,z,flag=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                z=a[j];
                a[j]=a[j+1];
                a[j+1]=z;
                flag=1;
            }
        }
        if(flag==0){
            printf("Elements are sorted");
            break;
        }

    }

}
int main()
{
    int a[20],size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("\nEnter number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    print_arr(a,size);
    bubblesort(a,size);
    print_arr(a,size);
}