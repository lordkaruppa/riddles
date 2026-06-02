// problem: https://leetcode.com/problems/valid-palindrome/

// Using 2 pointer approch
// time - O(N), space - O(1)
bool isPalindrome(char* s) {
  int l = 0, r = strlen(s) - 1;

  while (l < r) {
    // ignoring non alpha numeric characters
    while (l < r && !isalnum(s[l]) ) l++;
    while (l < r && !isalnum(s[r]) ) r--;

    if (tolower(s[l]) != tolower(s[r])) return false;

    l++, r--;
  }

  return true;    
}