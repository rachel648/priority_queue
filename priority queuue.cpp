#include <iostream>

using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void enqueue()
{
    int val;
    if (rear == n - 1)
        cout << "Queue overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in the queue: ";
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue underflow" << endl;
        return;
    }
    else
    {
        cout << "Element removed from the queue: " << queue[front] << endl;
        front++;
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
