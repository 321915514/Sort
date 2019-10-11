#include<stdio.h>

void BubbleSort(int k[],int n){
	int i,temp,j,count1=0,count2=0,m=n-1,flag=1;
	while(m>0&&flag==1){
		flag=0;
			for(j=0;j<n;j++){
				for(i=j+1;i<n;i++){
				count1++;
			if(k[j]>k[i]){
				flag=1;
				count2++;
				temp=k[i];
				k[i]=k[j];
				k[j]=temp;
				}
			
			}
		}
			m--;
		
	}
	printf("±È½Ï%d,½»»»%d\n",count1,count2);
}



int main(){
	int i,a[10]={2,3,59,8,4,5,6,88,1,7};
	BubbleSort(a,10);

	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

	return 0;

}
