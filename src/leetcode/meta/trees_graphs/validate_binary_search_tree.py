"""Complexidade O(N). De forma recurssiva eu valido se cada nó está corretamente alocado.
Em cada nó eu verifico se seu valor é menor ou maior do que deveria ser, levando em consideração
a sua ligação com o resto da árvore.
"""

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(root, min_value, max_value):
            if root == None:
                return True
            if (min_value != None and root.val <= min_value) or (max_value != None and root.val >= max_value):
                return False

            return (validate(root.left, min_value, root.val) and validate(root.right, root.val, max_value))

        return validate(root, None, None)