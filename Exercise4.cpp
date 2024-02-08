#include <vector>
class MaxHeap
{
private:
    std::vector<int> heap;

public:
    // is the heap empty?
    bool isEmpty() const
    {
        if (heap.size() == 0)
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
        return heap.size();
    }
    // add an element to the heap
    void insert(const int x)
    {
        heap.push_back(x);
    }
    // find the maximum element in the heap
    const int findMax() const
    {
        int max = heap[0];
        for (int i = 0; i < heap.size(); i++)
        {
            if (heap[i] > max)
            {
                max = heap[i];
            }
        }
        return max;
    }
    // delete and return the maximum element of the heap
    virtual int deleteMax()
    {
        int max = heap[0];
        int index = 0;
        for (int i = 0; i < heap.size(); i++)
        {
            if (heap[i] > max)
            {
                max = heap[i];
                index = i;
            }
        }
        heap.erase(heap.begin() + index);
        return max;
    }
};