if __name__ == '__main__':
    Y = 0
    L = list(map(int, input().split()))
    while L[0] <= L[1] :
        L[0] *= 3
        L[1] *= 2
        Y += 1
    print(Y)