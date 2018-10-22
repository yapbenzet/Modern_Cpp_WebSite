class node:
    def __init__(self, incomingData=None):
        if (incomingData is not None):
            self.data = incomingData;
            self.prev = None;
        else:
            self.data = None;
            self.prev = None;
class Stack:
    def __init__(self, incomingSize):
        self.size = incomingSize
        self.root = node()
        self.SP = self.root
        self.capacity = self.size
    def stackPrinter(self, temp):
        if(temp.prev is None):
            return
        print(temp.data)
        temp = temp.prev
        self.stackPrinter(temp)
    def isFull(self):
        if(self.capacity == 0):
            return True
        else:
            return False
    def isEmpty(self):
        if (self.capacity == self.size):
            return True
        else:
            return False

    def  push(self,incomingData):
        if(self.isFull()):
            print("StackOverFlow!")
        else:
            temp = node(incomingData)
            temp.prev = self.SP
            self.SP = temp
            self.capacity = self.capacity - 1
    def display(self):
        self.stackPrinter(self.SP)
    def pop(self):
        if(self.isEmpty()):
            print("StackUnderFlow!")
        else:
            temp = self.SP
            self.SP = self.SP.prev
            self.capacity = self.capacity + 1
            return  temp.data

test = Stack(5)

for i in range(6):
    test.push(i+1)

test.display()

for i in range(6):
    test.pop()



