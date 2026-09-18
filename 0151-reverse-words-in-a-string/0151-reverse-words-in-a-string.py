class Solution:
    def reverseWords(self, s: str) -> str:
        I = s.split()
        I.reverse()
        string = ' '.join(I)
        return string