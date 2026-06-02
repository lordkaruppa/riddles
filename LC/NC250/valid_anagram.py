# problem: https://leetcode.com/problems/valid-anagram/

# time - O(N), space - O(1)
class Solution:
  def isAnagram(self, s: str, t: str) -> bool:
    # initial condition validation
    if len(s) != len(t): return False

    freq = {}

    for i in range(len(s)):
      # increment freq for char presence in 's'
      if s[i] in freq: freq[s[i]] += 1
      else: freq[s[i]] = 1

      # decrement freq for char presence in 't'
      if t[i] in freq: freq[t[i]] -= 1
      else: freq[t[i]] = -1

    for ch in freq:
      if freq[ch] != 0: return False

    return True