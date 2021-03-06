#pragma once

// 包括 SDKDDKVer.h 将定义可用的最高版本的 Windows 平台。

// 如果要为以前的 Windows 平台生成应用程序，请包括 WinSDKVer.h，并将
// 将 _WIN32_WINNT 宏设置为要支持的平台，然后再包括 SDKDDKVer.h。

#include <SDKDDKVer.h>
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "sstream"
using namespace std;

#ifndef FUCKDLL
#define FUCKDLL __declspec(dllexport)
#else
#define FUCKDLL __declspec(dllimport)
#endif

class FUCKDLL Node
{
public:
	Node() { top = -1; bottom = -1; operat = 0; left = NULL; right = NULL; }
	Node(int t, int b, char opr) { top = t; bottom = b; operat = opr; left = NULL; right = NULL; }
	void simp();
	int gcd(int p, int q);
	Node operator + (Node n2);
	Node operator - (Node n2);
	Node operator * (Node n2);
	Node operator / (Node n2);
	Node operator ^ (Node n2);
	Node operator = (Node n2);

public:
	int top;
	int bottom;
	char operat;
	class Node *left;
	class Node *right;

};
class FUCKDLL Core
{
private:
	int que_num = 10;  //题目数量
	int data_num = 5;  //操作数数量
	int range = 10;      //计算的数值范围 
	int opr_type = 0;   //操作符种类  0.加减  1.加减乘  2.加减乘除  3.加减乘除乘方 
	int data_type = 0;  //0整数  1小数  2分数
	int accuracy = 2;
	string *que = new string[que_num + 1];
	string *ans = new string[que_num + 1];
public:
	void set_que_num(int a) { que_num = a; }
	void set_data_num(int a) { data_num = a; }
	void set_range(int a) { range = a; }
	void set_opr_type(int a) { opr_type = a % 4; }
	void set_data_type(int a) { data_type = a % 3; }
	void set_accuracy(int a) { accuracy = a; }
	int get_que_num() { return que_num; }
	int get_data_num() { return data_num; }
	int get_range() { return range; }
	int get_opr_type() { return opr_type; }
	int get_data_type() { return data_type; }
	int get_accuracy() { return accuracy; }
	string* getQue();
	string* getAns();
private:
	string expstring(Node *root);
	Node *creatOptree();
	Node calc(Node *root);
	void previsite(Node *head);
	char operat();
	char int_operat();
	int get_factor(int a);
};

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>
