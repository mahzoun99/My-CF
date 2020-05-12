def sub_lists(list):
    for i in list :
        if list.count(i) > 2 :
            return True
        elif list.count(i) == 2 :
            start = list.index(i)
            end = list.index(i,start+1)
            if end - start > 1 :
                return True
    return False


tc = int(input())
for j in range(tc):
    x = int(input())
    l1 = input().split(" ")
    if sub_lists(l1):
        print("YES")
    else:
        print("NO")
