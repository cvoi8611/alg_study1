#include <stdio.h>


int sum_num (int i){
    int num = i;
    while (i >0) {
    	num += i%10;
    	i/= 10;
	}
	return num;
}

int main(){
    int arr[10001]={-1}, check;

    for (int i=0; i<10001; i++){
        check = sum_num(i);
        if (check < 10001) {
            arr[check] = 1;   
        }
    }
    for (int i=0; i<10001; i++){
        if (arr[i] != 1){
            printf("%d\n",i);
        }
    }


    
    return 0;
}