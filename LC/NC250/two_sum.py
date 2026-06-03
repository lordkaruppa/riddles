# problem: https://leetcode.com/problems/two-sum/

# way 2: using hashtable to hold the position with value
# time - O(N), space - O(N)
class Solution:
  def twoSum(self, nums: List[int], target: int) -> List[int]:
    seen = {}

    for i, num in enumerate(nums):
      diff = target - num

      if diff in seen:
        return i, seen[diff]

      seen[num] = i
        