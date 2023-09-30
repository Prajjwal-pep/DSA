#include<stdio.h>
int t_size=10;
void indInsert(int arr[], int size, int element, int index){
    int i;
      if(index>=t_size){
          printf("no space to insert.");
      }
      for(i=size-1; i>=index; i--){
         arr[i+1]=arr[i];
      }
      arr[index]=element;
}

void showArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
     int arr[10]={1,2,3,5,7};
     int size=5, element, index=3;
     showArray(arr, 5);
     printf("\nenter the element to insert: ");
     scanf("%d", &element);
     indInsert(arr, 5, element, 3);
     size=size+1;
     showArray(arr, size);
}