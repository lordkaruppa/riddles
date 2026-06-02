# problem: https://leetcode.com/problems/contains-duplicate-ii/

# Way 2: Using Hashtable - to record the previously visited element
# time - O(N), space - O(N)
def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
seen = {}

for i, num in enumerate(nums):
    if num in seen:
        if abs(seen[num] - i) <= k: 
            return True

    # either update the index if value exist or add a new entry to seen
    seen[num] = i

return False



# Way 3: Using Sliding window + Hashtable - remove the element from hashtable
# as the window slides and add new element to the right, then make sure the
# hashtable always has K elements
# time - O(N), space - O(K);   k - window size
def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
  window = {}

  for i, num in enumerate(nums):
    # adjust window size (remove the first entry from window)
    if i > k:
      del window[nums[i - k - 1]]

    # check if the value is present in the window
    if num in window:
      return True
    
    # finally add the new element to window
    window[num] = i

  return False