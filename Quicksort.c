#include <stdio.h>
#include <stdlib.h>

int Partition(int k[],int low,int high){
    int temp;
    temp=k[low];

    while(low<high){

        while(low<high&&k[high]>=temp){

            high--;
        }
            k[low]=k[high];

        while(low<high&&k[low]<=temp){

            low++;
        }
            k[high]=k[low];
    }
        k[low]=temp;
    return low;





}
void QSort(int k[],int low,int high){
    int point;
    if(low<high){
        point=Partition(k,low,high);
        QSort(k,low,point-1);
        QSort(k,point+1,high);
    }


}

void   QuickSort(int k[],int n){
    QSort(k,0,n-1);
}


int main()
{
    int i,a[10]={2,3,5,4,1,6,9,7,12,32};

    QuickSort(a,10);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);

    }
    return 0;
}
