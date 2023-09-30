#include<stdio.h>
#include<stdlib.h>

struct myArray{
   int total_size;
   int used_size;
   int *ptr;
};

void createArray(struct myArray* m, int t_size, int u_size){
// (*m).total_size=t_size;  dereferencing or
// m->total_size=t_size;  both ways are correct
(*m).total_size=t_size;
(*m).used_size=u_size;
(*m).ptr=(int*)malloc(t_size*(sizeof(int)));
}
void show(struct myArray* m){
    for(int i=0; i<(*m).used_size; i++){
        printf("%d\n", (*m).ptr[i]);
    }
}
void setVal(struct myArray* m){
    int n;
    for(int i=0; i<(*m).used_size; i++){
    printf("enter the %d value: ",i);
    scanf("%d", &n);
    (*m).ptr=n;
    }
}

void main(){
    struct myArray marks;
    createArray(&marks, 100, 20)
  
}