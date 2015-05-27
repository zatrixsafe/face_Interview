#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
using namespace std;

typedef struct node{
	int data;
	struct node *next;
}Link, *LinkList;

int a[5] = {
	1,2,3,4,5
};

LinkList makeList(){
	int i;
	LinkList head;
	Link *p,*q;
	head = (LinkList)malloc(sizeof(Link));
	q = head;
	for(i = 0; i < 5; i++){
		p = (Link*)malloc(sizeof(Link));
		p->data = a[i];
		q->next = p;
		q = p;
	}
	return head;
}
void wrte(LinkList p){
	if(p->next == NULL) 
		return ;
	while(p->next != NULL){
		p = p->next;
		cout<<p->data<<endl;
	}
	return ;
}
int main(){
	LinkList p;
	p = makeList();
	wrte(p);
	return 0;
}

