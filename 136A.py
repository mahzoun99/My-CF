import array
if __name__ == '__main__':
    n = int(input())
    inp = list(map(int,input().split(' ')))
    out = [None]*n
    for i in range(n) :
        out[inp[i]-1] = i+1
    for i in range(n) :
        print(out[i], end=' ')