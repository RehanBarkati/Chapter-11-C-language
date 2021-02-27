# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    //size of operator in C
   // printf("The size of int on my pc is %d",sizeof(int));
    //printf("The size of float on my pc is %d",sizeof(float));
    //printf("The size of char on my pc is %d",sizeof(char));
    //malloc returns void pointer
    ptr=(int*)malloc(  6* sizeof(int)); //int*--> casting void pointer to int
    
for(int i=0;i<6;i++){
    printf("Enter the value of %d element \n",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<6;i++){
    printf("The value of %d element is: %d \n",i+1,ptr[i]);
}
    return 0;
}