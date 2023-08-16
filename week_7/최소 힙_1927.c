#include <stdio.h>

int arr[100000];
int count = 0;
int min;

int heap(int a){
    if (a == 0){
        if (count == 0){
            printf("0\n");
        }
        else{
            printf("%d\n",arr[0]);
            for (int i=0; i<count; i++){
				arr[i] = arr[i+1];
            }
            count--;
        }            
    }
    else {
    	int min;
    	arr[count] = a;
        for (int i=count; i>0; i--){
        	if (arr[i] < arr[i-1]){
        		min = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = min;
			}
		}
		
		count++;
    }
    return 0;
}

int main(){
    int n,x;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d",&x);
        heap(x);
    }
    return 0;
}

