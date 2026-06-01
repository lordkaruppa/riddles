// problem: https://leetcode.com/problems/concatenation-of-array/

// Using Iterative Approch
// time - O(N), space - O(2N)
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
  int *res = malloc(2 * numsSize * sizeof(int));
  if (!res) return NULL;

  // fill both parts of array in a single iteration
  for (int i = 0; i < numsSize; i++) {
    res[i] = nums[i];
    res[i + numsSize] = nums[i];
  }

  *returnSize = numsSize * 2;
  return res;    
}


// Using raw memory copy
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
  int *res = malloc(2 * numsSize * sizeof(int));
  if (!res) return NULL;

  memcpy(res, nums, sizeof(int) * numsSize);
  memcpy(res + numsSize, nums, sizeof(int) * numsSize);

  *returnSize = numsSize * 2;
  return res; 
}
