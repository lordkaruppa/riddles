// problem: https://leetcode.com/problems/valid-anagram/


int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// anagram - word created by shuffling
// WAY 1: sort both strings and check for equality, t - O(N log N), s - O(1)
bool isAnagram(char* s, char* t) {
  int s_len = strlen(s);
  int t_len = strlen(t);

  if (s_len != t_len) return false;

  // sort the string
  qsort(s, s_len, sizeof(char), compareChars);
  qsort(t, t_len, sizeof(char), compareChars);

  while (*s) {
    if (*s++ != *t++) return false;
  }

  return true;
}



// way 01: use hashmap to track the frequency, frequency must match, t - O(N), s - O(1)
bool isAnagram(char* s, char* t) {
  int freq[26] = {0};

  // for words in s, +1 freq & for words in t, -1 freq
  // at the end all the values should be 0

  while (*s || *t) {
    if (*s) freq[(*s++) - 'a']++;
    if (*t) freq[(*t++) - 'a']--;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] != 0) return false;
  }

  return true;
}