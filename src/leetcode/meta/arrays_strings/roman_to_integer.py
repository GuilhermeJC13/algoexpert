"Solução O(N). Verifico se o valor do próximo digito é menor maior que o do atual, caso sim, subtrai"

class Solution:
    def romanToInt(self, s: str) -> int:
        roman_integer_map = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000
            }

        n = len(s)    
        integer = 0
        for i, digit in enumerate(s):
            if i+1 < n:
                if roman_integer_map[digit] >= roman_integer_map[s[i+1]]:
                    integer += roman_integer_map[digit]
                else:
                    integer -= roman_integer_map[digit]
            else:
                integer += roman_integer_map[digit]

        return integer
