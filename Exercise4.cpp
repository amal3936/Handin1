#include <vector>
#include <algorithm>

class MaxHeap : public std::vector<int>
{
public:
    // Constructor
    MaxHeap() {}

    // is the heap empty?
    bool isEmpty() const override
    {
        return empty();
    }

    // number of elements in the heap
    int size() override
    {
        return static_cast<int>(this->size());
    }

    // add an element to the heap
    void insert(const int x) override
    {
        push_back(x);
        std::push_heap(begin(), end());
    }

    // find the maximum element in the heap
    const int findMax() const override
    {
        return front();
    }

    // delete and return the maximum element of the heap
    int deleteMax() override
    {
        int maxElement = front();
        std::pop_heap(begin(), end());
        pop_back();
        return maxElement;
    }
};
