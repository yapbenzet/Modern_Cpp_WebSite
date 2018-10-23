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
        self.rear = self.front = None
        self.capacity = self.size
    def queuePrinter(self, temp):
        if(temp is None):
            return
        print(temp.data)
        temp = temp.prev
        self.queuePrinter(temp)
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

    def enqueue(self,incomingData):
        if(self.isFull()):
            print("Queue is Full!")
        elif(self.isEmpty()):
            self.front = node(incomingData)
            self.rear = self.front
            self.capacity = self.capacity - 1
        else:
            temp = node(incomingData)
            self.rear.prev =temp
            self.rear =temp
            self.capacity = self.capacity - 1
    def display(self):
        self.queuePrinter(self.front)
    def dequeue(self):
        if(self.isEmpty()):
            print("Queue is Empty!")
        else:
            temp = self.front
            self.front = self.front.prev
            self.capacity = self.capacity + 1
            return temp.data
    def peek(self):
        return self.front.data

test = Stack(5)

for i in range(6):
    test.enqueue(i+1)

test.display()

for i in range(6):
    test.dequeue()
print("-*/*-/-*/-*/-*/-*/")
test.display()



