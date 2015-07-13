class node:
    def __init__(self, value=None, next=None):
        self.value = value
        self.next = next

    def iterate(top):
        while (top != None):
            print top.value
            top = top.next

    def find_cell(top, target):
        while (top != None):
            if (top.value == target):
                return top
            top = top.next
        return None

    def find_before(top, target):
        while (top.next != None):
            if (top.next.value == target):
                return top.next
            top = top.next
        return None

    def add_at_begin(top, new_cell):
        new_cell.next = top.next
        top.next = new_cell

    def add_at_end(top, new_cell):
        while (top.next != None):
            top = top.next
        top.next = new_cell
        new_cell.next = None

    def insert_cell(after_me, new_cell):
        new_cell.next = after_me.next
        after_me.next = new_cell

    
top = node ()

        
