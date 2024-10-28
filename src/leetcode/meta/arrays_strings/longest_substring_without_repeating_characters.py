"""
A minha solução tem complexidade de tempo O(N), utilizo dicionários em que posso checar a presença de um elemento em 
tempo constante. Caso já exista, retorna o valor, caso não, adiciona no dicionário e soma o tamanho.
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest_length = 0
        repeated_char = None
        
        while(True):
            length = 0
            letter_dict = {}
            for char in s:
                if char in letter_dict:
                    repeated_char = char
                    break
                else:
                    letter_dict[char] = length
                    length+=1
            if length > longest_length:
                longest_length = length
            
            if len(s) == length:
                break
                
            s = s[letter_dict[repeated_char]:]
        
        return longest_length