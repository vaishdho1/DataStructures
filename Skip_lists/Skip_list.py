import random


class Node:
    def __init__(self, value, height):
        self.value = value
        
        # List of next pointers
        self.next = [None] * (height+1)


# Create a skip_list class

class Skiplist:
  
    def __init__(self, maxlevel, prob):

        self.height = maxlevel
        #Create the head node for the skip list
        self.head = Node(-1, self.height)
        
        #Predefined value of probability sent as input
        self.prob = prob
        
        #Level corresponding to the max height of the nodes
        self.level = 0
      
    # To randomly determine the height of a node
    def random_level(self):
        level = 0
        while random.random() < self.prob and level < self.height:
            level += 1
        return level

    def insert_node(self, element):

        # To create a current node which is the head node
        current = self.head
        layer = self.level

        # A list to update the pointers
        update = [None] * (self.height+1)
        
        '''
        Go through the skip list from the top most layer
        If the value to insert is lesser than next value,
        go one layer down.
        Otherwise, go to the next pointer in the same level
        '''
        
        while layer >= 0:
            if current.next[layer] is None or current.next[layer].value > element:
                update[layer] = current
                layer -= 1
            else:
                current = current.next[layer]
                
            # If the element to insert is already present, we do not insert it
            if current.value == element:
                print(f"{element} already present")
                return

        # To perform the insertion find the random height
        rlevel = self.random_level()
        new_node = Node(element, rlevel)

        '''
        If the height of the new node is greater than the ones seen so far,
        update the pointers and set the new height appropriately
        '''
        if rlevel > self.level:
            for i in range(self.level+1,rlevel+1):
                update[i] = self.head
            self.level = rlevel


        # Update the next pointers to account for the new node
        for i in range(rlevel+1):
            new_node.next[i] = update[i].next[i]
            update[i].next[i] = new_node
        print(f"Insertion of {element} successful")
        
        
    #To remove an element from the skiplist
    def remove(self, element):
        # To create a current node which is the head node
        current = self.head
        layer = self.level


        # A list to update the pointers
        update = [None] * (self.height+1)
        '''
        Go throught the list to get the nodes which point
        to the element.
        '''
        
        while layer >= 0:
            if current.next[layer] and current.next[layer].value < element:
                current = current.next[layer]
            else:
                update[layer] = current
                layer -= 1
        
        #Pick the possible element to delete
        current = current.next[0]

        # To check if the element is present and accordingly update the pointers

        if current != None and current.value == element:
            for i in range(self.level+1):
                if update[i].next and update[i].next[i] == current:
                    update[i].next[i] = current.next[i]
            while self.level > 0 and not self.head.next[self.level] :
                self.level -= 1
            print(f"Deleted {element}")
            
        print("Element not present")
     
     #To find an element in the skip list
     def find(self, element):
        curr = self.head
        layer = self.level
        while layer >= 0:
            if curr.value == element:
                print(f"Found {element}")
                return
            if curr.next[layer] is None or curr.next[layer].value > element:
                layer -= 1
            else:
                curr = curr.next[layer]

        print("Not found")
        
    #Displays the skip list in different levels
    def display(self):

        print("*******The skip list is*********")
        for layer in range(self.height - 1, -1, -1):
            curr = self.head
            print(f"Level {layer}", end=": ")
            while curr.next[layer]:
                print(curr.next[layer].value, end=" ")
                curr = curr.next[layer]
            print("")

   














