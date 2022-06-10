'''
I am using a probability of 0.5 and the maximum height = 16.
About 65,536 elements can be stored and searched efficiently.
The formula for max level is as follows:
max_level = s $\log_\frac{1}{p} n$.

'''
#Create an object
lst = Skiplist(16, 0.5)

lst.insert_node(6)
lst.insert_node(7)
lst.insert_node(9)
lst.insert_node(12)
lst.insert_node(19)
lst.insert_node(17)
lst.insert_node(26)
lst.insert_node(21)
lst.insert_node(25)
lst.display()

lst.remove(19)
lst.remove(25)
lst.display()
lst.insert_node(30)
lst.insert_node(35)
lst.display()

lst.remove(9)
lst.display()

lst.insert_node(37)
lst.display()

#Output
'''
Insertion of 6 successful
Insertion of 7 successful
Insertion of 9 successful
Insertion of 12 successful
Insertion of 19 successful
Insertion of 17 successful
Insertion of 26 successful
Insertion of 21 successful
Insertion of 25 successful
*******The skip list is*********
Level 15: 
Level 14: 
Level 13: 
Level 12: 
Level 11: 
Level 10: 
Level 9: 
Level 8: 
Level 7: 
Level 6: 
Level 5: 
Level 4: 
Level 3: 
Level 2: 17 
Level 1: 9 12 17 21 25 26 
Level 0: 6 7 9 12 17 19 21 25 26 
Deleted 19
Deleted 25
*******The skip list is*********
Level 15: 
Level 14: 
Level 13: 
Level 12: 
Level 11: 
Level 10: 
Level 9: 
Level 8: 
Level 7: 
Level 6: 
Level 5: 
Level 4: 
Level 3: 
Level 2: 17 
Level 1: 9 12 17 21 26 
Level 0: 6 7 9 12 17 21 26 
Insertion of 30 successful
Insertion of 35 successful
*******The skip list is*********
Level 15: 
Level 14: 
Level 13: 
Level 12: 
Level 11: 
Level 10: 
Level 9: 
Level 8: 
Level 7: 
Level 6: 
Level 5: 
Level 4: 
Level 3: 
Level 2: 17 35 
Level 1: 9 12 17 21 26 35 
Level 0: 6 7 9 12 17 21 26 30 35 
Deleted 9
*******The skip list is*********
Level 15: 
Level 14: 
Level 13: 
Level 12: 
Level 11: 
Level 10: 
Level 9: 
Level 8: 
Level 7: 
Level 6: 
Level 5: 
Level 4: 
Level 3: 
Level 2: 17 35 
Level 1: 12 17 21 26 35 
Level 0: 6 7 12 17 21 26 30 35 
Insertion of 37 successful
*******The skip list is*********
Level 15: 
Level 14: 
Level 13: 
Level 12: 
Level 11: 
Level 10: 
Level 9: 
Level 8: 
Level 7: 
Level 6: 
Level 5: 
Level 4: 
Level 3: 
Level 2: 17 35 
Level 1: 12 17 21 26 35 37 
Level 0: 6 7 12 17 21 26 30 35 37 
'''
