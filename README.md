# Queue in C++

## Title: Understanding Queues in C++
-----

## Aim  
To study and implement Queues in C++.

##  Tools Used  
- Visual Studio Code  
- Programiz Online Compiler  

---

## Theory  

A **queue** is a linear data structure that follows the **First-In-First-Out (FIFO)** principle, where elements are inserted at the rear and removed from the front.  

- Commonly used in scheduling, buffer management, and resource sharing.  
- Can be implemented using **arrays, linked lists, or STL queue class**.  
- Primary operations:  
  - **Enqueue** → insert an element.  
  - **Dequeue** → remove an element.  
  - **Front/Rear** → access first and last elements.  
- Types:  
  - **Static (fixed-size)**  
  - **Dynamic (resizable)**  
- Variants:  
  - Circular Queue  
  - Priority Queue  
  - Double-ended Queue (Deque)  

Queues are essential for managing data sequentially while preserving order of arrival.  

---

## Program  

### Array-Based Implementation of Queue in C++  

```cpp
#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    // Constructor
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value);

    // Dequeue operation
    void dequeue();

    // Display queue
    void display();

    // Check if queue is empty
    bool isEmpty();

    // Check if queue is full
    bool isFull();
};
```

---

## Key Points  

- Traversal requires moving sequentially from **front → rear**.  
- **Dynamic queues** grow or shrink at runtime.  
- **Static queues** have a fixed size.  

---

## Algorithm  

1. **Start**  
2. Define a class `Queue` with:  
   - Integer array `arr[SIZE]` to store elements.  
   - Two integers `front` and `back` to track first & last elements.  
3. Initialize `front = -1`, `back = -1` in constructor.  
4. **Enqueue Operation**  
   - If `back == SIZE-1` → Overflow.  
   - If `front == -1` → set `front = 0`.  
   - Increment `back` and insert value.  
5. **Dequeue Operation**  
   - If `front == -1` or `front > back` → Underflow.  
   - Print removed element `arr[front]`.  
   - Increment `front`.  
6. **Display Operation**  
   - If queue is empty → Print "Queue is empty".  
   - Else → Traverse from `front` to `back` and print elements.  
7. **Stop**  

---

## Conclusion  

Queues are a linear data structure that follow the **FIFO principle**.  
Array-based queues allow efficient **insertion at the rear** and **deletion from the front**, but their size is fixed.  

They are widely used in **scheduling, buffering, and sequential data processing**, helping manage data in an **orderly and reliable manner**.  

---
