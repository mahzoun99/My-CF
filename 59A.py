if __name__ == '__main__':
    s = input()
    upc = 0
    lowc = 0
    for i in range(len(s)):
        if s[i].islower() :
            lowc += 1
        else :
            upc += 1
    if upc > lowc :
        print(s.upper())
    else :
        print(s.lower())