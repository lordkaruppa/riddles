// problem: https://leetcode.com/problems/reverse-string/

// time - O(N), space - O(1)
void reverseString(char* s, int sSize) {
  char tmp;

  // two pointer approach (converging pointers)
  char *l = s;
  char *r = s + (sSize - 1);

  while (l < r) {
    tmp = *l;
    *l++ = *r;
    *r-- = tmp;
  }  
}