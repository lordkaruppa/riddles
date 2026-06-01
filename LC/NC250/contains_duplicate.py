# problem: 


# Using Set & Early-exit approch
# time - O(N), space - O(N)
class Solution:
  def containsDuplicate(self, nums: List[int]) -> bool:
    seen = set()

    for num in nums:
      if num in seen: return True

      seen.add(num)

    # no duplicates found
    return False


# Using Set & Length approch
class Solution:
  def containsDuplicate(self, nums: List[int]) -> bool:
    return len(nums) != len(set(nums))