if __name__ == '__main__':
    L = list(map(int, input().split()))
    for _ in range(L[1]):
        if L[0]%10 == 0 :
            L[0] /= 10
        else:
            L[0] -= 1
    print(int(L[0]))