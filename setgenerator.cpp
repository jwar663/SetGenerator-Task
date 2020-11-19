#include <iostream>
#include <vector>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;

class SetGenerator { 
public:
    //store number
    vector<int> numberVector;
    //store number indices
    map<int, int> numberMap;
    /** Initialize your data structure here. */
    SetGenerator() {
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        //if value is in map then return false
        if(numberMap.find(val) != numberMap.end()) {
            return false;
        } else {
            //add element at end of vector
            numberVector.push_back(val);
            //specify the position of where the number was put in the vector
            numberMap[val] = (numberVector.size()-1);
            return true;
        }
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        //if value isnt in map then return false
        if(numberMap.find(val) == numberMap.end()) {
            return false;
        } else {
            //swap last number and number to be removed around, as you can only remove values from a vector when it is the last value
            int lastNumber = numberVector.back();
            int numberRemove = numberMap[val];
            numberVector[numberRemove] = lastNumber;
            numberMap[lastNumber] = numberRemove;
            numberMap.erase(val);
            numberVector.pop_back();
            return true;
        }
    }

    /** Get a random element from the set. */
    int getRandom() {
        //create a seed for random number generator, relating to time
        srand(time(NULL));
        //return a random value from the vector
        return numberVector[rand()%numberVector.size()];
    }
};

int main() {
    SetGenerator dataStructure = SetGenerator();
    dataStructure.insert(5);
    dataStructure.remove(8);
    dataStructure.insert(8);
    dataStructure.insert(3);
    dataStructure.insert(5);
    dataStructure.insert(4);
    dataStructure.insert(4);
    cout << dataStructure.getRandom();
    return 0;
}