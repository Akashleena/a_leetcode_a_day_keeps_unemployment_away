def lengthOfLongestSubstring(s: str) -> int:
    seen_letters = {}  # Dictionary to store character counts
    L = R = 0  # Left and right pointers
    longest_substring = 0  # Final answer

    while R < len(s):
        seen_letters[s[R]] = seen_letters.get(s[R], 0) + 1

        while seen_letters[s[R]] > 1:
            seen_letters[s[L]] -= 1
            L += 1

        cur_substr_len = R - L + 1
        if cur_substr_len > longest_substring:
            longest_substring = cur_substr_len

        R += 1

    return longest_substring
