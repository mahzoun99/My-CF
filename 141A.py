if __name__ == "__main__" :
    s1 = input()
    s1 += input()
    s2 = input()
    if len(s1) != len(s2):
        print("NO")
        exit(0)
    for ch in s1 :
        if ch not in s2 :
            print("NO")
            exit(0)
        else :
            s2 = s2.replace(ch,"",1)
    print("YES")