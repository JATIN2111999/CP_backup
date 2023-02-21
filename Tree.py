

class Tree:
    def __init__(self, left, data, right):
        self.left = left
        self.right = right
        self.data = data


leafnode1 = Tree(None, 1, None)
leafnode3 = Tree(None, 3, None)
leafnode2 = Tree(leafnode1, 2, leafnode3)


def printTree(root):
    if root:
        printTree(root.left)
        print(root.data)
        printTree(root.right)


printTree(leafnode2)
