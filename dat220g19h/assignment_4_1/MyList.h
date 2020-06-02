//
// Created by Andreas Høiberg Eike on 2019-09-12.
//

#ifndef ASSIGNMENT_4_1_MYLIST_H
#define ASSIGNMENT_4_1_MYLIST_H

#include <iostream>

template <class T>
class Node {
    public:
        T data;
        Node* next;

};

template <class T>
class MyList {

    private:
        Node<T> *head, *tail;

    public:
         MyList() {
            head = nullptr;
            tail = nullptr;
        }

        ~MyList(){
            Node<T>* node;
            node = head;
            while(node != nullptr) {
                delete node;
                node = nullptr;
                node->next= nullptr;
            }
            delete node;
            node = nullptr;
        }

        //Kompleksitet: konstant = 1, fordi vi bare legger value bak det siste elementet tail, og ingen kode blir repetert.
        void pushBack(const T& value){
            Node<T>* node = new Node<T>;
            node -> data = value;
            node -> next = nullptr;

            //If list is empty, set node to the head and tail, since its the only element
            if(head == nullptr) {
                head=node;
                tail=node;
            }

            //If list is not empty, add element after tail.
            else {
                tail -> next=node;
                tail=node;
            }

        }

        //Kompleksitet: hvis listen inneholder 1 element er kompleksiteten konstant = 1. Ellers er kompleksiteten lik O(position) (koden repeteres n antall ganger basert på hva variabelen position er).
        void remove(const std::size_t& position){
            Node<T>* currentNode;
            Node<T>* previousNode = new Node<T>;

            currentNode = head;

            if(position == 0) {
                head=head->next;
                delete currentNode;
                currentNode = nullptr;
            }

            else {
                for (int i = 0; i < position; i++) {
                    previousNode = currentNode;
                    currentNode = currentNode->next;
                }

                previousNode->next = currentNode->next;
            }
        }

        //Kompleksitet: lik antall noder, koden repeteres basert på hvor mange noder som er i listen.
        std::size_t size(){
            Node<T>* node;
            node = head;
            std::size_t count = 0;

            if(node != nullptr) {
                while (node != nullptr) {
                    node = node->next;
                    count++;
                }
            }

            return count;
        }

        //Kompleksitet: O(position).
        T& operator[](const std::size_t& position){
             Node<T>* node;

             node=head;
             for(int i=0; i < position; i++) {
                 node=node->next;
             }
             return node->data;
        }
};


#endif //ASSIGNMENT_4_1_MYLIST_H
