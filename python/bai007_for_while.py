def main():
    n = int(input())

    for i in range(n):
        print(i, end=" ")
    print()

    for i in range(1, n):
        print(i, end=" ")
    print()

    for i in range(n - 1, -1, -1):
        print(i, end=" ")
    print()

    while n > 0:
        print(n, end=" ")
        n -= 1

    # break continue

main()
