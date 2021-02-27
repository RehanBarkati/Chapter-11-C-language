# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;
    //size of operator in C
   // printf("The size of int on my pc is %d",sizeof(int));
    //printf("The size of float on my pc is %d",sizeof(float));
    //printf("The size of char on my pc is %d",sizeof(char));
    //malloc returns void pointer
    ptr=(int*)malloc(  600 * sizeof(int)); //int*--> casting void pointer to int
    
for(int i=0;i<600;i++){
    ptr2=(int*)malloc(  600 * sizeof(int)); //int*--> casting void pointer to int
    printf("Enter the value of %d element \n",i+1);
    scanf("%d",&ptr[i]);
    free(ptr2);
}
for(int i=0;i<6;i++){
    printf("The value of %d element is: %d \n",i+1,ptr[i]);
}
    return 0;
}