# problem: https://leetcode.com/problems/valid-palindrome/

# filter out the chars other than alpha numeric
# reverse the string and check for palindrome
# time - O(N), space - O(N)
class Solution:
  def isPalindrome(self, s: str) -> bool:
    # filter out other characters in the string
    filtered_str = "".join(filter(str.isalnum, s)).lower()

    return filtered_str == filtered_str[::-1]