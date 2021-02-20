#include<iostream>
using namespace std;
struct deque
{
    int arr[50];
    int front;
    int rear;
    int size;
    deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }
    bool isFull()
    {
        return ((front == 0 && rear == size-1)||
                front == rear+1);
    }

    // Checks whether Deque is empty or not.
    bool isEmpty ()
    {
        return (front == -1);
    }

    // Inserts an element at front
    void insertfront(int key)
    {
        // check whether Deque if full or not
        if (isFull())
        {
            cout << "Overflow\n" << endl;
            return;
        }

        // If queue is initially empty
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }

        // front is at first position of queue
        else if (front == 0)
            front = size - 1 ;

        else // decrement front end by '1'
            front = front-1;

        // insert current element into Deque
        arr[front] = key ;
    }
    void insertrear(int key)
    {
        if (isFull())
        {
            cout << " Overflow\n " << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size-1)
        {
            rear = 0;
        }
        else
        {
            rear = rear+1;
        }
        arr[rear] = key ;
    }
    void deletefront()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow\n" << endl;
            return ;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == size -1)
            {
                front = 0;
            }

            else
            {
                front = front+1;
            }
        }
    }
    void deleterear()
    {
        if (isEmpty())
        {
            cout << " Underflow\n" << endl ;
            return ;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
            rear = size-1;
        else
            rear = rear-1;
    }
    int getFront()
    {
        if (isEmpty())
        {
            cout << " Underflow\n" << endl;
            return -1 ;
        }
        return arr[front];
    }
    int getRear()
    {
        if(isEmpty() || rear < 0)
        {
            cout << " Underflow\n" << endl;
            return -1 ;
        }
        return arr[rear];
    }
    
};
int main()
{
    deque ob(50);
    ob.insertrear(15);
    ob.insertrear(30);
    cout << "get rear element:: "<< ob.getRear() << endl;
    ob.deleterear();
    cout << "After delete rear element new rear become " << ob.getRear() << endl;
    cout << "inserting element at front end \n";
    ob.insertfront(75);
    cout << "get front element "<< ob.getFront() << endl;
    ob.deletefront();
    cout << "After delete front element new front become " << ob.getFront() << endl;
    return 0;
}

