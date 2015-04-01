#if !defined (HYBRID_H)
#define HYBRID_H

#include "QueueLinked.h"
using CSC2110::QueueLinked;
#include "SortedListDoublyLinked.h"

template < class T >
class Hybrid
{

   private:
      QueueLinked<T>* q;
      SortedListDoublyLinked<T>* sldl;

   public:
      Hybrid(int (*comp_items) (T* item_1, T* item_2), int (*comp_keys) (String* key, T* item));
      ~Hybrid();

      bool isEmpty();
      void enqueue(T* item);
      T* dequeue();
      ListDoublyLinkedIterator<T>* iterator();

};

template < class T >
Hybrid<T>::Hybrid(int (*comp_items) (T* item_1, T* item_2), int (*comp_keys) (String* key, T* item))
{
   q = new QueueLinked<T>();
   sldl = new SortedListDoublyLinked<T>(comp_items, comp_keys);
}

template < class T >
Hybrid<T>::~Hybrid()
{
   delete q;
   delete sldl;
}

//DO THIS
//complete the implementation for the Hybrid ADT in two different ways
//as outlined in the Lab 10 description
//simply comment the first implementation out when working on the second implementation
//use the getKey method to dequeue/remove

template < class T>
bool Hybrid<T>::isEmpty(); // call isEmpty() from respecting files.
{
    
    
}

template <class T>
void Hyprid<T>::enqueue(T* item); // QueueLinked (Enqueue is just added to list
                        // SortedLinkedList (Added in to list in sorted order)
                        // Both enqueue function are called from respecting files.
{
    
}

template <class T>          //Deque is used by dequeing from queuelinked and deleteing the same element in SortedListDoublyLinked through reference.
T* Hybrid<T>::dequeue();
{
    
}

template <class T>
ListDoublyLinkedIterator<T>* Hybrid::iterator(); //iterates over sorted order list
{
    
}


#endif
