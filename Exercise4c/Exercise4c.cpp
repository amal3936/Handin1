#include <list>
#include <iterator>
#include "double_linked_list.h"
#include <iostream>

using namespace std;

class MaxHeap
{
	List<int> *doubleList = new DoubleLinkedList<int>();

public:
    // is the heap empty?
    bool isEmpty() const
    {
        return doubleList->empty();
    }
    // number of elements in the heap
    int size() const
    {
        return doubleList->size();
    }
    // add an element to the heap
    void insert(const int x)
    {
        doubleList->push_back(x);
    }
    // find the maximum element in the heap
    const int findMax() const
    {
        int max = doubleList->find_kth(0);
        for(int i = 0; i<doubleList->size();i++){
            if(doubleList->find_kth(i)>max){
                max = doubleList->find_kth(i);
            }
        }
        return max;
    }
    // delete and return the maximum element of the heap
    virtual int deleteMax()
    {
        int max = doubleList->find_kth(0);
        int index, maximum;
        list<int> newList;

        for(index = 0; index<doubleList->size();index++){
            if(doubleList->find_kth(index)>max){
                max = doubleList->find_kth(index);
                maximum = index;
            }
        }

        for(int i = 0; i<=maximum; i++){
            newList.push_front(doubleList->find_kth(0));
            doubleList->pop_front();
        }
        auto l_front = newList.begin();
        for(int i = 1; i<=maximum; i++){
            advance(l_front,i);
            doubleList->push_front(*l_front);
        }
        return max;
    }
};