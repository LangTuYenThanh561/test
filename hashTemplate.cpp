#include <iostream>
#include <list>
using namespace std;

class HashTable
{
private:
    int (*hashFunct)(int);
    list<int> *data;
    int size;

public:
    HashTable(int _size, int (*_hashFunct)(int))
    {
        size = _size;
        hashFunct = _hashFunct;
        data = new list<int>[_size];
    }
    ~HashTable()
    {
        clear();
    }
    void insert(int key)
    {
        //TODO: insert key into hash table
    }
    void remove(int key)
    {
        //TODO: remove key form hash table
    }
    bool search(int key)
    {
        //TODO: return true if hash table contains key, otherwise, return false 
        return -1;
    }
    void clear()
    {
        // TODO: clear all data and release all allocated memory
    }
    void printHashTable()
    {
        //TODO: print hash's information 
    }
};

// *hashing function, you can write some hash function here, ex hash15, hash 22, etc...
int hash11(int key)
{
    return key % 11;
}
int hash20(int key)
{
    return key % 20;
}

int main()
{
    //* TEST CASE EXAMPLE: hash table with size = 11
    HashTable* test = new HashTable(11, hash11);
    int data[] = {28, 81, 55, 92, 33, 29, 18, 23, 40, 99, 79, 74, 49, 64, 17};
    int size = 11;
    for(int i =0; i< size; i++)
        test->insert(data[i]);
    test->printHashTable();
    system("pause");
    return 0;
    
}
