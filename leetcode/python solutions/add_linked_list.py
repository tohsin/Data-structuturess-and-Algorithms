
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    
node1= ListNode(7)
node1.next=ListNode(2)
node1.next.next=ListNode(4)
node1.next.next.next=ListNode(3)


node2= ListNode(5)
node2.next=ListNode(6)
node2.next.next=ListNode(4)

def addTwoNumbers(l1,l2):
        def returnend(node,prev=None):
            while True:
                node.prev=prev
                prev=node
                if node.next is  None: break
                node=node.next
            return node
        endnode1=returnend(l1)
        endnode2=returnend(l2)
        def add(node1,node2):
            answer_node= ListNode(None)
            answer_node.prev=ListNode(None)
            #main add loop
            while True:
                if node1 and node2:
                    extra=0 if answer_node.val==None else answer_node.val
                    added_value=node1.val +node2.val +extra
                    if added_value> 9:
                        cumulative=str(added_value)
                        answer_node.val= int(cumulative[0])
                        answer_node.prev=ListNode(int(cumulative[1]))
                    else:
                        answer_node.val=added_value
                    node1=node1.prev
                    node2=node2.prev
                    nex=answer_node
                    answer_node=answer_node.prev
                    answer_node.next=nex

        add(endnode1,endnode2)


print(addTwoNumbers(node1,node2))