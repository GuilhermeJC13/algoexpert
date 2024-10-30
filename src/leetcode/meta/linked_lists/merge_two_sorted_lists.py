"""
Complexidade O(N). Começa verificando se as listas estão vazias. Em seguida vai verificando
qual o menor número para adicionar, quando a lista se acaba é colocado o maior número inteiro em seu 
valor, garantindo q ningúem passará dele.
"""

MAX_INT = pow(2,63) - 1

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        merged_list = ListNode()
        aux_list = merged_list

        if list1 == None and list2 != None:
            return list2
        if list2 == None and list1 != None:
            return list1
        if list1 == None and list2 == None:
            return list1

        while True:

            if list1.val >= list2.val:
                aux_list.val = list2.val
                if list2.next != None:
                    list2 = list2.next
                else:
                    list2.val = MAX_INT
            else:
                aux_list.val = list1.val
                if list1.next != None:
                    list1 = list1.next
                else:
                    list1.val = MAX_INT
            
            if  list1.val == MAX_INT and list2.val == MAX_INT:
                break
            
            aux_list.next = ListNode()
            aux_list = aux_list.next

        return merged_list