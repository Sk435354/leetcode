#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class LinkedList{
   public:
    ListNode *head;
    ListNode *last;

 void insert(int data){
    ListNode* node = new ListNode(data);
    if(!head)
    head = node;
    else
    last->next = node;
    last = node;
 }
 };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    int c = 0;
    int x,y;
    ListNode *head = nullptr;
    ListNode *t, *tail;
    while(l1&&l2){
        x = l1->val + l2->val + c;
        if(x>=10)
        {
            c=1;
            x=x-10;
        }
        else c=0;
        if(!head){
            head = new ListNode(x);
            tail = head;
        }
        else
        {
            t = new ListNode(x);
            tail->next=t;
            tail=t;
        }
        l1 = l1->next;
        l2 = l2->next;

    }
    return head;
}
int main()
{
    LinkedList *a = new LinkedList();
    LinkedList *b = new LinkedList();
    a->insert(2);
    a->insert(4);
    b->insert(8);
    b->insert(1);
    ListNode *l1 = a->head;
    ListNode *l2 = b->head;
    ListNode *l3 = nullptr;
    ListNode *tail ;

    l3 = addTwoNumbers(l1,l2);
    tail = l3;
    for(int i = 0;i<2;i++)
    {
        cout<<"Hello"<<endl;
        cout<<tail->val<<endl;
        tail = tail->next;
    }
}