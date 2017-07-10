#binary search tree
class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data

class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def print_tree(self,tree):
    	if tree:
        	print tree.data
        	print_tree(tree.left)
        	print_tree(tree.right)

    def getHeight(self,root):
        #Write your code here
	print "root is ", root
	for i in root:
		print i
        pass

T=int(raw_input())
myTree=Solution()
root=None
for i in range(T):
    data=int(raw_input())
    root=myTree.insert(root,data)
print "tree is ", myTree.print_tree(myTree)
# height=myTree.getHeight(root)
# print height  
