#include <list>
#include <iterator>

using namespace std;

class MaxHeap
{
private:
    list <int> listOfIntegers;

public:
    // is the heap empty?
    bool isEmpty() const
    {
        if (listOfIntegers.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // number of elements in the heap
    int size() const
    {
        return listOfIntegers.size();
    }
    // add an element to the heap
    void insert(const int x)
    {
        listOfIntegers.push_back(x);
    }
    // find the maximum element in the heap
    const int findMax() const
    {
        auto front = listOfIntegers.begin();
        int max = listOfIntegers.front();
        for(int i : listOfIntegers){
            advance(front, i);
            if(*front>max){
                max = *front;
            }
        }
        return max;
    }
    // delete and return the maximum element of the heap
    virtual int deleteMax()
    {
        int max = findMax();
        listOfIntegers.erase(find(listOfIntegers.begin(),listOfIntegers.end(),max));
        max = findMax();
        return max;
    }
};