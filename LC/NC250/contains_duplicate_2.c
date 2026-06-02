// problem: https://leetcode.com/problems/contains-duplicate-ii/

// time - O(N^2), space - O(1)
// Way 1: brute force approch - using nested loop to check against each entry for every i
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] == nums[j] && abs(i - j) <= k) return true;
    }
  }

  return false;    
}