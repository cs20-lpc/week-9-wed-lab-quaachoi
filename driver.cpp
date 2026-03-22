#include <iostream>
#include "ArrayQueue.hpp"

using namespace std;

int main()
{
    ArrayQueue<int>* queue = new ArrayQueue<int>(10);
    ArrayQueue<int>* queueClone = new ArrayQueue<int>(5);

    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);
    queue->enqueue(4);
    queue->enqueue(5);

    *queueClone = *queue;

    cout << queue->front() << endl;
    cout << queue->back() << endl;

    cout << queueClone->front() << endl;
    cout << queueClone->back() << endl;

    return 0;
}