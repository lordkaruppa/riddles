// problem: https://leetcode.com/problems/two-sum/

// way 1: using nested loop
// time - O(N^2), space - O(1)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int *res = malloc(sizeof(int) * 2);
  *returnSize = 2;

  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        res[0] = i;
        res[1] = j;
        return res;
      }
    }
  }

  return res;    
}