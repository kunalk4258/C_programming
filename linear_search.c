#include<stdio.h>

int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
}
int main(){
    int element=32;
    int arr[]={10,1,15,14,2,36,5874,32,13};
    int size=sizeof(arr)/sizeof(int);
    int ls=linearsearch(arr,size,element);
    printf("the element %d present at index %d",element,ls);
return 0;
}