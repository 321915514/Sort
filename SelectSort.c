#include <stdio.h>
#include <stdlib.h>



void SelectSort(int k[],int n){
    int i,temp,j,min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(k[j]<k[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=k[min];
            k[min]=k[i];
            k[i]=temp;
            }
    }

}


int main()
{
    int i,a[10]={1,90,5,4,3,6,9,7,34,10};
    SelectSort(a,10);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
