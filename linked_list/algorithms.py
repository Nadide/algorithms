class node:
    def __init__(self,value=None, next=None):
        self.value = value
        self.next = next


    def writelist (root):
        while (root.next != None):
            root = root.next
            print root.value,
        print '\n'

    def add_after (after_me, node1):
        new = node()
        new.value = node1.value
        new.next = after_me.next
        after_me.next = new

    def copylist (root):
        copy_root = copy = node()
        while (root.next != None):
            copy.next = node()
            copy = copy.next
            root = root.next
            copy.value = root.value
        return copy_root

    def insertionsort (root):
        sorted_root = node()
        root = root.next
        node.add_after (sorted_root, root)   #add first item
        while (root.next != None):
            root = root.next
            sorted = sorted_root
            while (sorted.next != None and root.value > sorted.next.value):     # skip until proper position
                sorted = sorted.next
            node.add_after (sorted, root)
        return sorted_root

    def selectionsort (root):
        sorted = node()
        list = root
        while (list.next != None):
            max = list.next.value
            max_node = list
            while (list.next != None):
                if (list.next.value > max):
                    max = list.next.value       # keep before node which contains max_value
                    max_node = list
                list = list.next
            node.add_after (sorted, max_node.next)      # add max_item to sorted
            max_node.next = max_node.next.next      # delete added max_item from list
            list = root
        return sorted



# creating list that contain top_sentinel and n_items
node1 = root = node()
for i in range(input()):
    node1.next = node()
    node1 = node1.next
    node1.value = input()

    
# copying list
print 'Root >>  ',
node.writelist (root)
print 'Copy >>  ',
node1 = node.copylist (root)
node.writelist (node1)


'''
insertion sort
-----------------
take item from input list and add to proper position in sorted output list
'''
print 'Insertionsorted >>  ',
node1 = node.insertionsort (root)
node.writelist (node1)


'''
selection sort
-----------------
take max value item from input list and add to front of growing sorted output list
'''
print 'Selectionsorted >>  ',
node1 = node.selectionsort (root)
node.writelist (node1)
