"""
Minha primeira solução teria complexidade O(N), passariamos por toda string e fariamos as verificações das condições.
"""

INT_MAX = pow(2, 31) - 1
INT_MIN = -pow(2, 31)

class Solution:
    def myAtoi(self, s: str) -> int:
        number_list = []
        number_is_negative = False
        number_has_sign = False
        number_started = False
        number_int = 0
        
        for char in s:
            if char == " " and not number_started and not number_has_sign:
                continue
            elif char == "+" and not number_started and not number_has_sign:
                number_has_sign = True
            elif char == "-" and not number_started and not number_has_sign:
                number_is_negative = True
                number_has_sign = True
            elif char in ["0","1","2","3","4","5","6","7","8","9"]:
                if not number_started:
                    number_int = int(char)
                    number_started = True
                else:
                    if (number_int + int(char)/10) > INT_MAX/10 and not number_is_negative:
                        number_int = INT_MAX
                        break
                    elif -(number_int + int(char)/10) < INT_MIN/10 and number_is_negative:
                        number_int = -INT_MIN
                        break
                        
                    number_int *= 10
                    number_int += int(char)
            else:
                break
                
        if number_is_negative:
            number_int = -number_int
        
        return number_int
            