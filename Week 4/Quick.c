#include<stdio.h>
int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=temp;
    return (i+1);
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int pi=partition(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}
int main(){
    int arr[]={157,110,147,122,111,149,151,141,123,112,117,133};
    int h=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,h-1);
    printf("Sorted Array: ");
    for(int i=0;i<h;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}