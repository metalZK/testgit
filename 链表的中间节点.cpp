/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// �����Ŀ
//==================================================================

// �����е�����k�����
// ��Ŀ����������м�ڵ㣬��������еĽڵ�����Ϊ�������򷵻��м�ڵ㣬
// ���Ϊż�����򷵻��м������ڵ�����һ����
// ���Զ�������ָ�룬ͬʱ������ͷ�ڵ������һ��ָ��һ����һ����
// ��һ��ָ��һ�������������ߵÿ��ָ���ߵ�����β��ʱ���ߵ�����ָ�������������м�

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

// ====================���Դ���====================
// ����Ҫ�ҵĽ���������м�
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

// ����Ҫ�ҵĽ���������β���
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

// ����Ҫ�ҵĽ���������β���
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

// ���Կ�����
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

