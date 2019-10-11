#include <stdio.h>
#include <stdlib.h>

void ShellSort(int k[],int n,int d){
    int i,j,temp;
        for(i=d;i<n;i++){
            if(k[i-d]>k[i]){
                temp=k[i];
                for(j=i-d;k[j]>temp&&j>=0;j-=d){
                    k[j+d]=k[j];
                }
                    k[j+d]=temp;
                }
            }
            }

int main()
{
    int i,a[10]={16,25,12,30,47,11,23,36,9,18};
    ShellSort(a,10,5);
    //ShellSort(a,10,3);
    //ShellSort(a,10,1);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }

}
