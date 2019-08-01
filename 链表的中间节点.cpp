/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 相关题目
//==================================================================

// 链表中倒数第k个结点
// 题目：求链表的中间节点，如果链表中的节点总数为奇数，则返回中间节点，
// 如果为偶数，则返回中间两个节点任意一个。
// 可以定义两个指针，同时从链表头节点出发，一个指针一次走一步，
// 另一个指针一次走两步。当走得快的指针走到链表尾部时，走得慢的指针正好在链表中间

#include <cstdio>
#include "List.h"

ListNode* FindMid(ListNode* pListHead)
{
	if(pListHead == nullptr)
		return nullptr;

	ListNode *pAhead = pListHead;
	ListNode *pBehind = pListHead;

	while(pAhead->m_pNext != nullptr && pAhead->m_pNext->m_pNext != nullptr)
	{
		pAhead = pAhead->m_pNext->m_pNext;
		pBehind = pBehind->m_pNext;
	}

	return pBehind;
}

// ====================测试代码====================
// 测试要找的结点在链表中间
void Test1()
{
	printf("=====Test1 starts:=====\n");
	ListNode* pNode1 = CreateListNode(1);
	ListNode* pNode2 = CreateListNode(2);
	ListNode* pNode3 = CreateListNode(3);
	ListNode* pNode4 = CreateListNode(4);
	ListNode* pNode5 = CreateListNode(5);

	ConnectListNodes(pNode1, pNode2);
	ConnectListNodes(pNode2, pNode3);
	ConnectListNodes(pNode3, pNode4);
	ConnectListNodes(pNode4, pNode5);

	printf("expected result: 3.\n");
	ListNode* pNode = FindMid(pNode1);
	PrintListNode(pNode);

	DestroyList(pNode1);
}

// 测试要找的结点是链表的尾结点
void Test2()
{
	printf("=====Test2 starts:=====\n");
	ListNode* pNode1 = CreateListNode(1);
	ListNode* pNode2 = CreateListNode(2);
	ListNode* pNode3 = CreateListNode(3);
	ListNode* pNode4 = CreateListNode(4);
	ListNode* pNode5 = CreateListNode(5);
	ListNode* pNode6 = CreateListNode(6);

	ConnectListNodes(pNode1, pNode2);
	ConnectListNodes(pNode2, pNode3);
	ConnectListNodes(pNode3, pNode4);
	ConnectListNodes(pNode4, pNode5);
	ConnectListNodes(pNode5, pNode6);

	printf("expected result: 3 or 4.\n");
	ListNode* pNode = FindMid(pNode1);
	PrintListNode(pNode);

	DestroyList(pNode1);
}

// 测试要找的结点是链表的尾结点
void Test3()
{
	printf("=====Test2 starts:=====\n");
	ListNode* pNode1 = CreateListNode(1);
	ListNode* pNode2 = CreateListNode(2);


	ConnectListNodes(pNode1, pNode2);


	printf("expected result: 1 or 2.\n");
	ListNode* pNode = FindMid(pNode1);
	PrintListNode(pNode);

	DestroyList(pNode1);
}

// 测试空链表
void Test4()
{
	printf("=====Test4 starts:=====\n");
	printf("expected result: nullptr.\n");
	ListNode* pNode = FindMid(nullptr);
	PrintListNode(pNode);
}





int main_05(int argc, char* argv[])
{
	Test1();
	Test2();
	Test3();
	Test4();


	return 0;
}

