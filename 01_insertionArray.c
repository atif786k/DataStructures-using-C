#include<stdio.h>

//This is Traversal
void display(int arr[],int n){
for (int i = 0; i < n; i++)
  {
     printf("%d\n",arr[i]); 
  }
}

//This is Insertion
int insertion(int arr[],int element,int capacity,int index,int size){
if (size>=capacity)
  {
      return -1;
  }
for (int i = size-1; i >= index; i--)
  {
      arr[i+1]=arr[i];
  }
arr[index]=element;
return 1;
}


int main(){
    int arr[200]={1,4,6,9,45,348};
    int size=6,element=8;
    int index=3;
    printf("The elements of the array are:\n");
    display(arr,size);
    insertion(arr,element,100,3,6);
    size=size+1;
    printf("The element of an array after insertion\n");
    display(arr,size);
    return 0;
}