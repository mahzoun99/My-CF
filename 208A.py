if __name__ == "__main__":
    l = list(map(str , input().replace("WUB"," ").split(" ")))
    for i in l :
        print(i, end='')
        if len(i) > 0 :
            print(" ", end='')