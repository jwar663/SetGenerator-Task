Set Generator
==========

In this task, you are required to design a simple data structure. There are only three operations in this data structure.
However, they all should be implemented such that their operation time complexity is O(1) on average.

The operations are as follow:

`insert(value)`: This method inserts an item (value) to the array (set). If the value is already present, it should ignore it.

`remove(value)`: This method removes an item (value) from the set. If the value is not present, then simply return.

`getRandom`: This method returns a random item from the existing values in the set. Please note that each item should have
the same probability of being returned.


Example:

````
 // Initialise an empty set.
SetGenerator setGen = new SetGenerator();

 // Insert 5 to the set. Returns true as 5 was inserted successfully.
setGen.insert(5);

 // Try remove 8. This should return false as 8 does not exist in the set.
setGen.remove(8);

 // Insert 8 to the set.
randomSet.insert(8);

// getRandom should return either 5 or 8 randomly.
setGen.getRandom();

// 8 was already in the set, so return false.
setGen.insert(8);

````

There are three skeleton codes in this repo written in Python, Java, and C++. Please write the code in any language you
are most comfortable with. You can create a new file if the language you want to use is not any of the templates in here.