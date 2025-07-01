# https://neetcode.io/problems/two-integer-sum-ii

class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        l, r = 0, len(numbers) - 1
        while l < r:
            curSum = numbers[l] + numbers[r]  
            if curSum > target:
                r -= 1
            elif curSum < target:
                l += 1
            else:
                return [l + 1, r + 1]
        return []

def main():
    numbers = [2, 7, 11, 15]
    target = 9
    sol = Solution()
    result = sol.twoSum(numbers, target)
    print("Indices (1-based):", result)

if __name__ == "__main__":
    main()  
