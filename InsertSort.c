#include<stdio.h>



void InsertSort(int k[],int n){
    int i,j,temp,m;

    for(i=1;i<n;i++){
            if(k[i]<k[i-1]){
                temp=k[i];
                for(m=i-1;k[m]>temp;m--){
                    k[m+1]=k[m];
                }
            k[m+1]=temp;

            }
        }
    }







int main(){
    int i,a[10]={1,3,2,5,4,6,5,10,7,8};
    InsertSort(a,10);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }

}
