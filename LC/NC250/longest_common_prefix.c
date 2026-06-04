// problem:

// Way 1: Vertical Scanning (scan a char across all the strings)
// time - O(N * L); space - O(1)  | N - no of strings, L - length of common prefix
char* longestCommonPrefix(char** strs, int strsSize) {
  if (strs == NULL) return strdup("");

  // pick a char from first string, compare it across all strings
  // if we got a mismatch or string runs out, then return by slicing first str until that index

  for (int p = 0; p < strlen(strs[0]); p++) {
    for (int s = 1; s < strsSize; s++) {

      // if string runs out or there is a mismatch
      if (strs[s][p] == '\0' || strs[0][p] != strs[s][p]) {
        return strndup(strs[0], p);
      }

    }
  }

  // if we reached here then, then entire first string is the longest prefix
  return strs[0];    
}