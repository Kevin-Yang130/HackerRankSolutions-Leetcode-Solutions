# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        queue,res= [root],[] 
        
        while queue:
            currSum, nodes=0,0
            length=len(queue)
            for i in range(length):
                temp=queue.pop(0)
                currSum+=temp.val
                nodes+=1
                if temp.left:
                    queue.append(temp.left)
                if temp.right:
                    queue.append(temp.right)
            res.append(currSum/nodes)
        return res
