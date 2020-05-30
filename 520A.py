import string
if __name__ == "__main__":
    def ispangram(str):
        alpha = "abcdefghijklmnopqrstuvwxyz"
        for ch in alpha:
            if ch not in str.lower():
                return False
        return True
    str = input()
    str = input()
    if ispangram(str) :
        print("YES")
    else :
        print("NO")
