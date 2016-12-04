#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

char name[20];
int phone[25];
string names[20];
string phones[20];
int idx;

void Phonebook();
void addPhonenum();
void checkPhonenum();
void storePhonenum();
void viewPhonebook();
void delCheck();
void delPhonenum(); 

void Phonebook() {
	int menu;
	printf("1. Add Phone number 2. Total phone book (Home : –1)");
	scanf("%d", &menu);
	if(menu==1)
		addPhonenum();
	else if (menu==2)
		viewPhonebook();
	//else if (menu==3)
	//Home();
}//viewMenu

void addPhoneum(void) {
	printf("이름과 전화번호를 입력해주세요 (ex) 김김김 01099998888) : ");
	scanf("%s %s", name, phone);
	checkPhonenum(name, phone);
}

void checkPhonenum(char name[], int phone[]) {
	if(!name || !phone) {
		printf("이름과 전화번호를 형식에 맞춰서 입력해주세요.\n");
		addPhonenum();
	}
	else 
		storePhonenum(name, phone);
}

void storePhonenum(char name[], int phone[]) {
	//2차원배열에 저장해야함
}

void viewPhonebook() {
	printf("index  |   name   |   PhoneNumber ");
	for(int i=0;;) {
		//전체 테이블 출력
	}
}

void delCheck() {
	//삭제할 번호 확인
	delPhonenum();
}

void delPhonenum() {
	//삭제
	viewPhonebook();
}
