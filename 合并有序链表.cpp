#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

struct ListNode 
{
	int value;
	ListNode *next;
};

ListNode* CreateListNode(int value)
{
	ListNode* node = new ListNode;
	node->value = value;
	node->next = nullptr;
	return node;
}

void ConnectNodes(ListNode* node1, ListNode* node2)
{
	if (node1 == nullptr)
	{
		cout << "nullptr node1" << endl;
	}
	node1->next = node2;
}

ListNode* MergeList(ListNode* head1, ListNode* head2)
{
	if (head1 == nullptr)
	{
		return head2;
	}
	else if (head2 == nullptr)
	{
		return head1;
	}
	ListNode* MergedHead = nullptr;
	if (head1->value < head2->value)
	{
		MergedHead = head1;
		MergedHead->next = MergeList(head1->next, head2);
	}
	else{
		MergedHead = head2;
		MergedHead->next = MergeList(head1, head2->next);
	}
	return MergedHead;
}

ListNode* CreateList()
{
	int tmp;
	ListNode* node[100];
	int i = 0;
	while (cin >> tmp)
	{	
		node[i++] = CreateListNode(tmp);
		if (getchar() == '\n')
		{
			break;
		}
	}
	for (int j = 0; j < i - 1; j++)
	{
		ConnectNodes(node[j], node[j+1]);
	}

	return node[0];
}

int main_ºÏ²¢Á´±í()
{
	ListNode* node1 = CreateList();
	ListNode* node2 = CreateList();

	ListNode* mergedHead = MergeList(node1, node2);

	ListNode* p = mergedHead;
	while (p != nullptr)
	{
		cout << p->value << " ";
		p = p->next;
	}
	system("pause");
	return 0;
}