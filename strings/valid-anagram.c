/*
 * Problem: Valid Anagram
 * Link: https://leetcode.com/problems/valid-anagram/
 * Topic: Strings
 * Pattern: Hash Map
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Date: 2026-09-01
 */

bool isAnagram(char *s, char *t)
{
    int count[26] = {0};
    while (*s)
        count[*s++ - 'a']++;
    while (*t)
        count[*t++ - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            return false;
    return true;
}