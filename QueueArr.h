template <class T>

class QueueArr{
    int front,rear,size,elements;
    T *arr;

    QueueArr();
    void enqueue(T);
    void dequeue();
    T front();
    bool isempty();
    int length();

    ~QueueArr();
};