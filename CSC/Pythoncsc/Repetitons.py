#https://cses.fi/problemset/task/1069

def main():
    counter = 1
    cadena = input()
    maxi = 1
    for i in range (1, len(cadena)):
        if cadena [i] == cadena [i-1]:
            counter+=1
        else:
            counter=1
        maxi = max(maxi, counter)
    print(maxi)

main()