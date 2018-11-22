def solve(a, n, k):
    m = dict()
    i = 0
    for i in range(len(a)):
        p = k - a[i]
        if m[p] == 1:
            print("YES\n")
            return
        m[a[i]] = 1

    print("No\n")


if __name__ == '__main__':
    n = int(input())
    k = int(input())
    a = []
    for i in range(n):
        a.append(int(input()))
    solve(a, n, k)
