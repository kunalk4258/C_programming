#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int size, int i){
    int largest=i;
    int left=2*i+1;    //indexing both the right and left
    int right=2*i+2;  //indexing both the right and left

    if(left<size && arr[left]> arr[largest])
        largest=left;

    if(right<size && arr[right]> arr[largest])
        largest=right;

    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,size,largest);
    }
}

void heapsort(int arr[],int size){
    for(int i=size/2;i>=0;i--){
        heapify(arr,size,i);
    }
    for (int i = size- 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int arr[]={10,11,15,9,25,650};
    int size=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,size);
    printf("sorted array is:\n");
    printarray(arr,size);

return 0;
}