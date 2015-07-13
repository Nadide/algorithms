class node:
	def __init__(self, value=None, next=None, prev=None):
		self.value = value
		self.next = next
		self.prev = prev 

def insert_cell (after_me, new_cell):
	new_cell.next = after_me.next
    after_me.next = new_cell
    
    new_cell.next.prev = new_cell
    new_cell.prev = after_me