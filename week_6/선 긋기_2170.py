import sys

input = sys.stdin.readline

N = int(input())
origin_lines = list(tuple(map(int, input().split())) for _ in range(N))

origin_lines.sort()

start = origin_lines[0][0]
end = origin_lines[0][1]

ans = 0
for k in range(1, N):
    now_start, now_end = origin_lines[k]

    if end > now_start:
        end = max(end, now_end)

    else:
        ans += (end - start)
        start, end = now_start, now_end

ans += (end - start)
print(ans)