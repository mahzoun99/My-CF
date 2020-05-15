if __name__ == '__main__':
    num = int(input())
    str = input()
    if str.count('A') > num/2 :
        print("Anton")
    elif str.count('D') > num/2 :
        print("Danik")
    else :
        print("Friendship")