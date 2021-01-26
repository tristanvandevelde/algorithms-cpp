#include <iostream>

struct node
{
	int data;
	node *next;
}

class linked_list
{
	private:
		node *head,*tail;
	public:
		linked_list()
		{
			head = NULL;
			tail = NULL;
		}
		void add_node(int n)
		{
			node *tmp = new node;
			tmp->data = n;
			tmp->next = NULL;

			{
				head = tmp;
				tail = tmp;
			}
			else
			{
				tail->next = tmp;
				tail = tail->next;
			}
		}
};
