"""
O(N), na solução, verificamos se o elemento atual é diferente do anterior,
Caso seja, nós adicionaremos ele na posição k da lista e moveremos o k adiante
na questão, não é necessário fazer um pop na lista.
"""

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i-1]:
                nums[k] = nums[i]
                k+=1

        return k
            
