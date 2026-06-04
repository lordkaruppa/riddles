# problem: https://leetcode.com/problems/longest-common-prefix/

# Way 1: Compare & slicing
# time - O(N * L); space - O(1)  | N - no of strings, L - length of common prefix
class Solution:
  def longestCommonPrefix(self, strs: List[str]) -> str:
    # consider first string as common prefix
    prefix = strs[0]

    # start from second element
    for i in range(1, len(strs)):
      # slice last char of prefix, untile it matches the current word
      while not strs[i].startswith(prefix):
        prefix = prefix[:-1]

    return prefix


# Way 2: Vertical Scanning (check each chars of all string)
# time - O(N * M) : N-no of strings, M-len of common prefix, space - O(1)
# same complexity as above method but we avoided slicing of string for each iteration
class Solution:
  def longestCommonPrefix(self, strs: List[str]) -> str:
    if not strs: return ""

    # pick one char from first string and compare it with all strings
    # continue to do this until there is a mismatch
    for i, ch in enumerate(strs[0]):
      for st in strs[1:]:
        if i >= len(st) or ch != st[i]:
          return strs[0][0:i]

    return strs[0]