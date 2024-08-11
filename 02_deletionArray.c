#include<stdio.h>

//This is Traversal
void display(int arr[],int n){
for (int i = 0; i < n; i++)
  {
     printf("%d\n",arr[i]); 
  
  }
}

//This is Deletion
int deletion(int arr[],int capacity,int index,int size){
if (index>=capacity)
  {
      return -1;
  }
for (int i = index; i < size-1; i++)
  {
      arr[i]=arr[i+1];
  }
return 1;
}


int main(){
    int arr[200]={1,4,6,9,45,348};
    int size=6;
    int index=3;
    printf("The elements of the array are:\n");
    display(arr,size);
    deletion(arr,100,3,6);
    size=size-1;
    printf("The element of an array after deletion\n");
    display(arr,size);
    return 0;
}