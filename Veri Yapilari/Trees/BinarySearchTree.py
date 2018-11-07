
class node:
    def __init__(self, incomingData=None):
        self.right = None
        self.left = None
        self.data = incomingData


class BinarySearchTree:

    def __init__(self):
        self.root = None

    def insert(self, incomingData):
        if (self.root is None):
            self.root = node(incomingData)
            print(incomingData, " inserted in root")
        else:
            temp = self.root
            parentNode = node()
            parentNodePosition = "right";
            while (True):
                if (temp is None):
                    if (parentNodePosition == "right"):
                        print(incomingData, " inserted in", parentNode.data, "'s right")
                        parentNode.right = node(incomingData)
                        break
                    elif (parentNodePosition == "left"):
                        print(incomingData, " inserted in", parentNode.data, "'s left")
                        parentNode.left = node(incomingData)
                        break
                elif (incomingData < temp.data):
                    parentNode = temp
                    temp = temp.left
                    parentNodePosition = "left";
                elif (incomingData > temp.data):
                    parentNode = temp
                    temp = temp.right
                    parentNodePosition = "right";
                elif (incomingData == temp.data):
                    print("Value already inserted")
                    break

    def findDeleted(self,incomingNode):
        incomingData = incomingNode.data
        if (incomingNode is None):
            print("Node Not Found!")
            return
        else:
            counter = 0
            temp = self.root
            parentNode = node()
            parentNodePosition = "right";
            while (True):
                if (temp is None):
                    print("Node Not Found!")
                    return
                elif (incomingData < temp.data):
                    parentNode = temp
                    temp = temp.left
                    parentNodePosition = "left";
                elif (incomingData > temp.data):
                    parentNode = temp
                    temp = temp.right
                    parentNodePosition = "right";
                elif (incomingData == temp.data):
                    counter +=1
                    if(counter == 1 ):
                        temp = temp.right
                        continue
                    if (parentNodePosition == "right"):
                        parentNode.right = None
                        return
                    elif (parentNodePosition == "left"):
                        parentNode.left = None
                        return



    def min(self, incomingNode=None):
        check = 1
        if (incomingNode is None):
            incomingNode = self.root
            check = 0
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            temp = incomingNode
            parentNode = node()
            while (True):
                if (temp is None):
                    if(check == 1):
                        return parentNode
                    else:
                        print("Minimum value of Tree is =", parentNode.data)
                        return parentNode.data
                else:
                    parentNode = temp
                    temp = temp.left

    def max(self, incomingNode=None):
        check = 1
        if (incomingNode is None):
            incomingNode = self.root
            check = 0
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            temp = incomingNode
            parentNode = node()
            while (True):
                if (temp is None):
                    if (check == 1):
                        return parentNode
                    else:
                        print("Maximum value of Tree is =", parentNode.data)
                        return parentNode.data
                else:
                    parentNode = temp
                    temp = temp.right

    def preorder(self):
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            nodeStack = []
            nodeStack.append(self.root)
            while (len(nodeStack) > 0):

                node = nodeStack.pop()
                print(node.data)

                if node.right is not None:
                    nodeStack.append(node.right)
                if node.left is not None:
                    nodeStack.append(node.left)

    def inorder(self):
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            current = self.root
            s = []  # initialze stack
            done = 0
            while (not done):
                if current is not None:
                    s.append(current)
                    current = current.left
                else:
                    if (len(s) > 0):
                        current = s.pop()
                        print(current.data)
                        current = current.right
                    else:
                        done = 1

    def display(self, choice=2):
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            if (choice == 1):
                self.preorder()
            elif (choice == 2):  # INORDER DİSPLAY
                self.inorder()
            elif (choice == 3):
                self.postorder()
            else:
                print("Please input right parameters : Preorder(1) Inorder(2) Postorder(3) ")
                return

    def postorder(self):
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            s1 = []
            s2 = []

            # Push root to first stack
            s1.append(self.root)

            # Run whil8le first stack is not empty
            while s1:

                # Pop an item from s1 and append it to s2
                node = s1.pop()
                s2.append(node)

                # Push left and right children of removed item to s1
                if node.left:
                    s1.append(node.left)
                if node.right:
                    s1.append(node.right)

            # Print all elements of second stack
            while s2:
                node = s2.pop()
                print(node.data)


    def search(self, incomingData, incomingNode):
        temp = incomingNode
        while (True):
            if (temp is None):
                print("Searched Value Not Found!")
                return
            elif (incomingData < temp.data):
                temp = temp.left
            elif (incomingData > temp.data):
                temp = temp.right
            elif (incomingData == temp.data):
                return temp

    def find(self, incomingData):
        print((self.search(incomingData, self.root)).data, "found.")

    def remove(self, incomingData):
        if (self.root is None):
            print("Tree is Empty!")
            return
        else:
            temp = self.root
            parentNode = node()
            parentNodePosition = "right";
            while (True):
                if (temp is None):
                    print(incomingData, " not found Tree!")
                    break
                elif (incomingData < temp.data):
                    parentNode = temp
                    temp = temp.left
                    parentNodePosition = "left";
                elif (incomingData > temp.data):
                    parentNode = temp
                    temp = temp.right
                    parentNodePosition = "right";
                elif (incomingData == temp.data):
                    if (temp.right is not None and temp.left is not None):
                        minNode = self.min(temp.right)
                        temp.data = minNode.data
                        minNode = self.search(incomingData=temp.data , incomingNode = temp.right)
                        if (minNode.right is None and minNode.left is None):
                            self.findDeleted(minNode)
                            #self.findDeleted(minNode) = None
                        else:  # Node have only 1 child
                            if (minNode.right is not None):

                                minNode.data = minNode.right.data
                                minNode.right = None
                            else:
                                minNode.data = minNode.left.data
                                minNode.left = None
                        break
                    elif (temp.right is None and temp.left is None):
                        if(parentNodePosition == "right"):
                            parentNode.right = None
                            break
                        else:
                            parentNode.left = None
                            break
                    else:  # Node have only 1 child
                        if (temp.right is not None):
                            temp.data = temp.right.data
                            temp.right = None
                        else:
                            temp.data = temp.left.data
                            temp.left = None
                        break


Tree1 = BinarySearchTree()
Tree1.insert(6)
Tree1.insert(2)
Tree1.insert(10)
Tree1.insert(1)
Tree1.insert(3)
Tree1.insert(8)
Tree1.insert(12)
Tree1.insert(15)
Tree1.insert(7)

Tree1.min()
Tree1.max()
Tree1.display(2)
Tree1.remove(15)
print("=================")
Tree1.display() # 1/2/3
Tree1.min()
Tree1.max()

