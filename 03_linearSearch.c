#include<stdio.h>
int linearSearch(int arr[],int size,int element){
for (int i = 0; i < size; i++)
{
    if (arr[i]==element)
    {
        return i;
    }
}return -1;

}
int main(){
int arr[584]={3,65,34,54,65,344,6,544,87};
int size=9,element=344;
int indexSearch=linearSearch(arr,size,element);
printf("The element %d is found on the index %d\n",element,indexSearch);
return 0;
}