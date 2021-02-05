class SLList:

    class node:
        def __init__(self,data):
            self.element = data
            self.next = None

    def __init__(self):
        self.head = None
        self.sz = 0

    def insertLast(self,data):
        u=self.node(data)
        #insert your code here
        curnode = self.head
        while curnode.next:
            curnode = curnode.next
        curnode.next = u
        self.sz += 1
        return

    def insertFirst(self,data):
        u=self.node(data)
        #insert your code here
        u.next = self.head
        self.head = u
        self.sz += 1
        return

    def insertAfter(self,u,v): #insert v after u node.
    
        x=self.node(u)
        y=self.node(v)
        #Insert your code here
        if(self.isEmpty()):
            print ("Linked List Empty Exception")
        else:
            curnode = self.head
            while curnode.element != x.element:
                curnode = curnode.next
            if(curnode.next == None):
                curnode.next = y
                y.next = None
                return
            y.next = curnode.next
            curnode.next = y
            self.sz += 1
        return

    def deleteFirst(self):
        #insert your code here
        if(self.isEmpty()):
            print ("Linked List Empty Exception")
        else:
            curnode = self.head
            temp = curnode.next
            self.head = temp
            curnode.next = None
            self.sz -= 1
        return

    def deleteLast(self):
        #insert your code here
        if(self.isEmpty()):
            print ("Linked List Empty Exception")
        else:
            curnode = self.head
            i=1
            while i<self.sz-1:
                curnode = curnode.next
                i +=1
            curnode.next = None
        return

    def printList(self):
        if (self.isEmpty()):
            print ("Linked List Empty Exception")
        else:
            tnode = self.head
            while tnode!= None:
                print(tnode.element,end = " ")
                tnode = tnode.next
            print(" ")
        return


    def findElement(self, val):
        curnode = self.head
        u=self.node(val)
        #insert your code here
        if (self.isEmpty()):
            print ("Linked List Empty Exception")
        else:
            while curnode != None:
                if(curnode.element==u.element):
                    print("Element Found")
                    return True
                else:
                    curnode=curnode.next

        return False

    def deleteSecondLast(self):
        #insert your code here
        if(self.isEmpty() or self.sz<2):
            print ("Insufficient Elements Exception")
            return
        cur = self.head
        cnt = 1
        while(cnt < self.sz-2):
            cur = cur.next
            cnt += 1
        cur.next = cur.next.next
        self.sz -= 1
        return

    def isEmpty(self):
        return self.sz==0

    def size(self):
        return self.sz

#--------------------Driver Code---------
#-------------------DO NOT MODIFY--------------------- 


def testSLL():
    sll = SLList()
    inputs=int(input())
    while inputs>0:
        command=input()
        operation=command.split()
        if(operation[0]=="S"):
            print(sll.size())
        elif(operation[0]=="I"):
            print(sll.isEmpty())
        elif(operation[0]=="IF"):
            sll.insertFirst(int(operation[1]))
            sll.printList()
        elif(operation[0]=="IL"):
            sll.insertLast(int(operation[1]))
            sll.printList()
        elif(operation[0]=="DF"):
            sll.deleteFirst()
            sll.printList()
        elif(operation[0]=="DL"):
            sll.deleteLast()
            sll.printList()
        elif(operation[0]=="DSL"):
            sll.deleteSecondLast()
            sll.printList()
        elif(operation[0]=="FE"):
            if(sll.findElement(int(operation[1])) is False):
                print("Element Not Found")
            else:
                sll.printList()
        elif(operation[0]=="IA"):
            sll.insertAfter(int(operation[1]), int(operation[2]))
            sll.printList()
        inputs-=1

def main():
    testSLL()

if __name__ == '__main__':
    main()