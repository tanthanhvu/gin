#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;

template <class T>
class Node
{
    public:
    T data;
    Node * next;
    Node(){}
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class Queue
{
    private:
    Node<T> * head;
    Node<T> * tail;
    int size;
    public:
    Queue()
    {
        this->head = NULL;
        this->tail = this->head;
        this->size = 0;
    }
    int inEmpty()
    {
        return this->size == 0;
    }
    void enqueue(T data)
    {
        Node<T> *newNode = new Node<T>(data);
        if (this->inEmpty())
        {
            this->head = newNode;
            this->tail = newNode;
            this->size += 1;
        }
        else
        {
            this->tail->next = newNode;
            this->tail = newNode;
            this->size +=1;
        }
    }
    T dequeue()
    {
        T data = this->head->data;
        Node<T> *p = this->head;
        this->head = this->head->next;
        delete p;
        this->size -= 1;
        return data;
    }
    void display()
    {
        Node<T>* p = this->head;
        while(p->next != NULL)
        {
            printf("%d   ", p->data);
            p = p->next;
        }
        printf("%d" , p->data);
    }
};

class request
{
    private:
    string nameRequest, information;
    long IP;
    int times;
    public:
    request(string _nameRequest, string _information, long _IP, int _times)
    {
       this->nameRequest = _nameRequest;
       this->information = _information;
       this->IP = _IP;
       this->times = _times;
    }
    request(){}
    string getName()
    {
        return this->nameRequest;
    }
    string getInformation()
    {
        return this->information;
    }
    long getIP()
    {
        return this->IP;
    }
    int getTime()
    {
        return this->times;
    }
};

int random(int min, int max)
{
    return min + rand() % (max - min +1);
}
int main ()
{
    Queue<request> listRequest;
    int startTime = 0, stopTime = -1;
    int check = 0;
    request requestServer;
    for (int i = 0 ; i < 20 ; i++)
    {
        if(random(0,1))
        {
            request a("request","task",rand(), random(2,4));
            listRequest.enqueue(a);
            printf("\nThoi gian %d, request %ld den!", i , a.getIP());
        }
        if (stopTime == i)
        {
            check = 0;
            printf("\nThoi gian %d request %ld da phuc vu xong!",i ,  requestServer.getIP());
            continue;
        }
        if(!check && !listRequest.inEmpty())
        {
            check = 1;
            requestServer = listRequest.dequeue();
            startTime = i;
            stopTime = startTime + requestServer.getTime();
            printf("\nTime %d request %ld !",i, requestServer.getIP());
        }
    }
    printf("\nEnd!");
    getch();
}