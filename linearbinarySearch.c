
#include<stdio.h>

void linearSearch(int a[],int size, int element){
    for(int i=0; i<5; i++){
        if(a[i]=element){
            printf("element found.");
        }
        else{
            printf("element not found.");
        }
        break;
    }
}
   
void binarySearch(int a[], int size, int element){
int low, mid, high;
low=0;
high=size-1;
while (low<=high)
{
    mid=(low+high)/2;
    if(a[mid]==element){
        printf("element found.");
    }
    else if(a[mid]<element){
        low=mid+1;
    }
    else if(a[mid]>element){
        high=mid-1;
    }
    else{
       printf("element not found."); 
    }
    break;
}

}

int main(){
    int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    linearSearch(a,5,n);
    binarySearch(a,5,n);
    return 0;
}