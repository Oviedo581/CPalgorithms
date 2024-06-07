#https://cses.fi/problemset/task/1083

def main():
    n = int(input())
    lista = [int(x) for x in input().split()]
    sum=0
    for i in range (len(lista)):
        sum+=lista[i]

    print(n*(n+1)//2-sum)

main()