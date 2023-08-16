#include <stdio.h>
int fibonacchi(int x){
    if (x == 1){
        return 1;
    }
    else if (x == 2){
        return 2;
    }
    else if (x > 2){
        return fibonacchi(x-1) + fibonacchi(x-2);
    }
}

int main() {
	int x,res=0;
	scanf("%d", &x);
	res = fibonacchi(x);
    printf("%d",res % 10007);
    // 피보나치 x번째 수를 출력
}