if __name__ == "__main__":
    n, l = map(int, input().split())
    lats = sorted(list(map(int, input().split())))
    d = 2*lats[0]
    for i in range(len(lats) - 1):
        if lats[i+1] - lats[i] > d:
            d = lats[i+1] - lats[i]
    if (l - lats[len(lats)-1]) * 2 > d:
        d = (l - lats[len(lats)-1]) * 2
    print("{:.10f}".format(d/2))