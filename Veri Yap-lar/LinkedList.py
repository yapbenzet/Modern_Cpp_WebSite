class Node:
    def __init__(self, incomingData=None):
        self.data = incomingData;
        self.next = None;

class NodeDoubly:
    def __init__(self, incomingData = None):
        self.data = incomingData
        self.previous = None
        self.next = None


class SimplyLinkedList:

    def __init__(self):
        self.root = None;
    def insert(self, data, previousNode=None):
        if(self.root is None):
            self.root = Node(data)
        elif(previousNode is None):
            self.last().next = Node(data)
        else:
            temp = previousNode.next
            previousNode.next = Node(data)
            previousNode.next.next = temp

    def listprint(self):
        temp = self.root
        while temp is not None:
            print(temp.data)
            temp = temp.next
    def isNull(self, node):
        if(node==None):
            return True
        return False
    def first(self):
        return self.root
    def last(self):
        temp = self.root
        temp2 = None
        while temp is not None:
            temp2 = temp
            temp = temp.next
        return temp2
    def isFirst(self, node):
        if(node == self.root):
            return True
        return False
    def isLast(self, node):
        if(node == self.last()):
            return True
        return False
    def remove(self, data):
        temp = self.root
        before = None
        while temp.data != data:
            before = temp
            temp = temp.next
        if(self.isFirst(temp)):
            self.root = temp.next
            temp.next = None
        elif(self.isLast(temp)):
            before.next = None
            temp = None
        else:
            before.next = temp.next
            temp = None

class DoublyLinkedList:
    def __init__(self):
        self.root = None
    def last(self):
        temp = self.root
        temp2 = None
        while temp is not None:
            temp2 = temp
            temp = temp.next
        return temp2
    def insert(self, data, previousNode=None):
        if(self.root is None):
            self.root = Node(data)
        elif (previousNode is None):
            temp = self.last()
            self.last().next = NodeDoubly(data)
            self.last().previous = temp
        else:
            afterNode = previousNode.next
            newNode = NodeDoubly(data)
            previousNode.next = newNode
            newNode.next = afterNode
            afterNode.previous =newNode
            newNode.previous = previousNode
    def listprint(self):
        temp = self.root
        while temp is not None:
            print(temp.data)
            temp = temp.next
    def first(self):
        return self.root
    def isFirst(self, node):
        if(node == self.root):
            return True
        return False
    def isLast(self, node):
        if(node == self.last()):
            return True
        return False
    def remove(self, data):
        dataToBeDeleted = self.root
        while dataToBeDeleted.data != data:
            dataToBeDeleted = dataToBeDeleted.next
        if (self.isFirst(dataToBeDeleted)):
            self.root = dataToBeDeleted.next
            self.root.previous = None
            dataToBeDeleted.next = None
        elif (self.isLast(dataToBeDeleted)):
            temp = self.last().previous
            self.last().previous = None
            temp.next = None
        else:
            previousNode = dataToBeDeleted.previous
            nextNode = dataToBeDeleted.next
            previousNode.next = nextNode
            nextNode.previous = previousNode
            dataToBeDeleted.next = dataToBeDeleted.previous = None


list1 = SimplyLinkedList()
list2 = DoublyLinkedList()



