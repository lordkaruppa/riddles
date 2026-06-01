// problem: https://leetcode.com/problems/contains-duplicate/description/


int comp(const void* a, const void* b) { 	
  // if a is smaller, positive value will be returned
  return (*(int*)a - *(int*)b);
}

// time - O(N log N), space - O(1)
bool containsDuplicate(int* nums, int numsSize) {
  // way 1: hash map to calculate frequency, time & space - O(N)
  // way 2: use two pointer to identify unique, time - O(N^2)
  // way 3: sort, then iterate to see if values are same, time - O(N log N)

  // sort the array
  qsort(nums, numsSize, sizeof(int), comp);

  for (int i = 1; i < numsSize; i++) {
    if (nums[i -1] == nums[i]) return true;
  }

  // no duplicate found
  return false;    
}