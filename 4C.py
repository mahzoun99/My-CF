if __name__ == "__main__":
    n = int(input())
    dict = {}
    for i in range(n):
        s = input()
        if s not in dict :
            dict[s] = 0
        else :
            dict[s] = dict[s] + 1
        if dict[s] == 0 :
            print("OK")
        else :
            print(s, dict[s], sep='')