"""
Solução O(N), Inicialmente eu garanto que o tamanho de l1 é maior que l2.
Em seguida eu passo por cada elemento e somo eles junto com o carry que é o resto da soma anterior
No final, caso ainda exista resto, adiciona uma dimensão a mais.
"""

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        def length(head: ListNode):
            return 0 if not head else 1 + length(head.next)

        list_sum = ListNode()
        list_aux = list_sum
        n = length(l1)
        m = length(l2)

        if m > n:
            aux = l1
            l1 = l2
            l2 = aux
            
            aux = m
            m = n
            n = aux

        carry = 0
        for i in range(0, n):
            sum = 0
            if i < m: # If there is still a number on l2 to sum
                sum = l1.val + l2.val + carry
                if sum >= 10:
                    carry = 1
                    sum -= 10
                else:
                    carry = 0
                list_aux.val = sum
                l2 = l2.next
            else: # Case there is only the higher list
                if carry == 1:
                    sum = l1.val + carry 
                    if sum >= 10:
                        carry = 1
                        sum -= 10
                    else:
                        carry = 0
                else:
                    sum = l1.val
                list_aux.val = sum

            if i != n-1:
                list_aux.next = ListNode()
                list_aux = list_aux.next
                l1 = l1.next
            elif carry == 1:
                list_aux.next = ListNode()
                list_aux = list_aux.next
                list_aux.val = carry

        return list_sum        