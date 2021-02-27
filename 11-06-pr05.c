# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    ptr=(int*)malloc(  10* sizeof(int)); //int*--> casting void pointer to int
    

for(int i=0;i<10;i++){
    ptr[i]=n*(i+1);
    printf("The value of %dx%d element is: %d \n",n,i+1,ptr[i]);
}
//reallocate ptr using realloc()
ptr=realloc(ptr,15 * sizeof(int));
printf("After reallocating\n");
    
for(int i=0;i<15;i++){
    ptr[i]=n*(i+1);
    printf("The value of %dx%d element is: %d \n",n,i+1,ptr[i]);
}
    return 0;
}