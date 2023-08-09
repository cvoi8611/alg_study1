#include <iostream>
using namespace std;

int col[16];
int N, total = 0;

bool check(int level)
{
    for(int i = 0; i < level; i++)
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i)// 대각선이거나 같은 라인
            return false;
        //col[i] : X좌표, i : Y좌표 이며, col[i]와 i 간의 차이가 일정하다면 대각선이거나 같은 라인임
        //ex ) (2,2) , (0,0) 
    return true;
}

void nqueen(int x)
{
    if(x == N)
        total++;
    else
    {
        for(int i = 0; i < N; i++)
        {
            col[x] = i; // 해당 위치에 퀸을 배치
            if(check(x)) // 유효하다면(false) 다음행의 퀸 배치, 유효하지않다면(true) 다른 위치로 퀸 배치 변경
                nqueen(x+1);
        }
    }
}
int main() {
    cin >> N;
    nqueen(0);
    cout << total;
}