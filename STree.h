#pragma once
#include <iostream>
#include <string>
#define OK 1
#define ERROR 0
#define overflow -1
using namespace std;
typedef int Status;
typedef struct STNode
{
    STNode* parent;
    STNode* children;
    STNode* nextsibling;
    string data;
}STNode, * STree;

Status InitSTree(STree& ST, const string& data); // ����һ�������趨�����������ֵ
Status Insertchild(STree& ST, const string& data); // Ϊ�����ST���һ������
Status DeleteNode(STree& ST); // ɾ���˽��