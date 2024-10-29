"""
A minha solução tem complexidade de tempo O(N), utilizo dicionários em que posso checar a presença de um elemento em tempo constante. 
Uso também ponteiros de right e left para a construção de substrings. Sempre que uma substring quebrar a regra da unicidade de caracteres, movo o ponteiro da esquerda para depois dele e continuo a contagem do tamanho.
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest_length = 0
        string_map = {}
        left = 0

        for right in range(len(s)):
            if s[right] not in string_map or string_map[s[right]] < left:
                string_map[s[right]] = right
                longest_length = max(longest_length, right - left + 1)
            else:
                left = string_map[s[right]] + 1
                string_map[s[right]] = right
        
        return longest_length


        [tmmzu]
        0 - 1 - 2 - 3 - 4

        right = 3
        left = 3
        map = {t:0, m:2}
        longest = 2