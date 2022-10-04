def binarySearch(l, n, low, high):
    while low <= high:
        mid = low + (high - low)//2
        if l[mid] == n:
            return mid
        elif l[mid] < n:
            low = mid + 1
        else:
            high = mid - 1
    return -1

l = list(map(int,input().split()))
n = int(input())
result = binarySearch(l, n, 0, len(l)-1)
if result != -1:
    print("Index of number: " + str(result))
else:
    print("Number not found")