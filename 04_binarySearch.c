#include<stdio.h>

int binarySearch(int arr[],int size,int element){
int low=0,high=size-1,mid;
while(low<=high){
mid=(high+low)/2;
if (arr[mid]==element)
    {
        return mid;
    }
if (arr[mid]<element)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
  }return -1;
}


int main(){
    int arr[78]={1,3,5,7,9,45,76};
    int size=7,element=45;
    int indexSearch=binarySearch(arr,size,element);
    printf("The element %d is found in the index %d",element,indexSearch);
    return 0;
}