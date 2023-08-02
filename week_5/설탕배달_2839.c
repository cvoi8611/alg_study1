#include <stdio.h>>

sum_num(int num){
	int a;
    while (1){
        if (num % 5 == 0) {
            a += num / 5;
            return a;
        }
        num = num - 3;
        a++;
 
        if (num < 0) {
            a = -1;
            return a;
        }
    }
}

int main (){
    int a = 0, num;
    scanf("%d", &num);

    a = sum_num(num);
    if (a == -1){
        printf("-1");
    }
    else {
        printf("%d",a);
    }
}