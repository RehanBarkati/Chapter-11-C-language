# include<stdio.h>
# include<stdlib.h>

//CALLOC by default initilize the value to 0.

int main(){
    int n;
    printf("How many you want to enter:\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int)); //int*--> casting void pointer to int
    
for(int i=0;i<n;i++){
    printf("Enter the value of %d element \n",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++){
    printf("The value of %d element is: %d \n",i+1,ptr[i]);
}
    return 0;
}