#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX_NAME 20    //姓名信息的大小，最多可有20个字符
#define MAX_SEX 4      //性别信息的大小，最多可有4个字符
#define MAX_TELE 20    //电话信息的大小，最多可有20个字符
#define MAX_ADDR 20    //地址信息的大小，最多可有20个字符
#define MAX_NUMPERSON 100  //通讯录容量
enum Option      // 枚举常量
{
	_EXIT, //退出
	_ADD,  //添加
	_SEARCH,//查找
	_DEL,  //删除
	_SHOW, //显示
	_CLEAR, //清空
	_SORT  //排序
};
typedef struct PersonInfo  //个人信息
{
	char _name[MAX_NAME];      //姓名
	short _age;                //年龄
	char _tele[MAX_TELE];      //电话
	char _addr[MAX_ADDR];      //住址
	char _sex[MAX_SEX];        //性别
}PersonInfo;
//结构 —— 通讯录
typedef struct Contacts
{
	//普通版本，直接定义一个数组，宏定义一个通讯录的容量#define MAX_NUMPERSON
	PersonInfo per[MAX_NUMPERSON];
	int usedsize;    //被使用的个数
}Contacts;
void InitContacts(Contacts *pCon);      // 初始化通讯录
void AddContacts(Contacts *pCon);    //  添加一个人到通讯录
int SearchContacts(Contacts *pCon);     // 根据姓名查找通讯录，找到：返回下标；找不到：返回-1
void DelContacts(Contacts *pCon);    //  删除
void ShowContacts(Contacts *pCon);      // 显示
void ClearContacts(Contacts *pCon);     // 清空
#endif //__CONTACT_H__
