#https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

def remove_duplicates(arr: list[int]) -> int:
    slow = 0
    for fast in range(len(arr)):
        if arr[fast] != arr[slow]:
            slow+=1
            arr[slow] = arr[fast]
    return slow +1

if __name__ == '__main__':
    arr = [int(x) for x in input().split()]
    res = remove_duplicates(arr)
    print(" ".join(map(str, arr[:res])))
    






"""
Syntax Revision
1. input().split()
   - Reads a line of input and splits it into a list of strings.
   - Example: input "10 20 30" → ['10', '20', '30']

2. print(" ".join(map(str, arr[:res])))
   - Prints the first 'res' elements of list 'arr', space-separated.
   - Converts elements to strings before joining.
   - Example: arr = [1, 2, 3, 4], res = 3 → Output: "1 2 3"
"""
