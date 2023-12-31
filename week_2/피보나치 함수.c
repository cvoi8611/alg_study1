/*
피보나치 수열을 이용하여 나오는 0, 1의 수를 출력하는 문제이다.
이 문제에서 중요한 점은 시간 제한이 0.25초라는 점인데
이는 시간 복잡도가 O(n) 이하로 나오게끔 식을 유도해서 풀어야 한다

문제에서 제시하는 피보나치 수를 구하는 함수는 재귀적인 방식이다
이 방식은 피보나치 수를 하나씩 계산해가면서 찾아내는 방식으로, 계산했던 피보나치 수를 또 다시 반복하여 계산하는 방식이라 매우 비효율 적이다

이러한 점을 개선하려면 개산했던 피보나치 수는 다시 계산하지 않고 넘기는 것이다
처음 계산했던 피보나치 수는 따로 저장해 둘 배열을 선언하고, 이 문제에서 N의 값이 최대 40까지이므로 배열 크기를 이에 맞춰서 낭비되는 메모리가 없게 한다


피보나치 값     /   0의 개수        /       1의 개수
    0                   1                       0
    1                   0                       1
    1                   1                       1
    2                   1                       2
    3                   2                       3
    5                   3                       5

0의 개수는 이전 피보나치값의 1의 개수이고, 1의 개수는 피보나치 값이랑 같다

따라서 n번째 피보나치값의 0의 개수와 1의 개수는 각각, n-1번째 피보나치의 값, n번째 피보나치의 값이다


    * 0번째 피보나치 값은 0 , -1 번째 피보나치 값이 나오므로 0번째 피보나치 값을 출력하는 printf는 따로 씀
    
*/




#include <stdio.h>


int fibo[41];


int fibonacci(int n){
    if (n == 0){
        fibo[0] = 0;
        return 0;
    }
    else if (n == 1){
        fibo[1] = 1;
        return 1;
    }
    else if (fibo[n] != 0){
        //계산된 fib는 계산 안하고 그대로 출력
        return fibo[n];
    }
    else if (n > 1){
        return fibo[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int t,n,z,o;
    scanf("%d",&t);

    for (int i=0; i<t; i++){
        scanf("%d",&n);
        fibonacci(n);
        if(n == 0){
            printf("1 0\n");
        }
        else {
            printf("%d %d\n",fibo[n-1], fibo[n]);
        }
    }
    
    return 0;
}