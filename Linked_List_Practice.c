#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define NAME_SIZE 20
#define PHONE_SIZE 30

typedef struct TEL_PHONE {
	char name[NAME_SIZE];
	char Phone[PHONE_SIZE];
	struct TEL_PHONE *link;	// 링크 필드
}TEL_PHONE;


/*
void Init(TEL_PHONE *p, TEL_PHONE *link, TEL_PHONE *prev,TEL_PHONE *next)
{
	
}


// 전화번호 추가 함수
void Add(TEL_PHONE *p, TEL_PHONE *list,TEL_PHONE *prev)
{
	char name_[NAME_SIZE];
	char Phone_[PHONE_SIZE];

	printf("이름 : "); scanf("%s", name_);
	printf("번호 : "); scanf("%s", Phone_);
	p = (TEL_PHONE *)malloc(sizeof(TEL_PHONE));
	strcpy(p->name, name_);
	strcpy(p->Phone, Phone_);

	if (list == NULL) {		// list가 비어있다면
		list = p;			// 현재 노드를 list에 대입
	}
	else {
		prev->link = p;
	}
	p->link = NULL;
	prev = p;
	printf("\n");
	printf("이름 : %s 전화번호 : %s\n", p->name, p->Phone);
	printf("전화번호가 추가 되었습니다.\n\n");
}

// 전화번호 탐색 함수
void Explore(TEL_PHONE *p, TEL_PHONE *list, TEL_PHONE *prev)
{
	char str[PHONE_SIZE];
	printf("전화 번호를 입력하세요 : "); scanf("%s", str);

	p = list;			// 헤드포인터 p에 대입
	while (list != NULL) {
		if (strcmp(str,p->Phone) != 1) {
			p = p->link;
		}
		else {
			printf("탐색 하신 전화번호의 정보입니다.\n");
			printf("이름 : %s\n", p->name);
			printf("전화번호 : %s\n", p->Phone);
			break;
		}
		printf("\n탐색하신 전화번호의 정보가 존재하지 않습니다.\n");
		return;
	}
}



// 전화번호 변경 함수
void Change(TEL_PHONE *p, TEL_PHONE *list, TEL_PHONE *prev)
{

}

*/

int main(void)
{
	int choice;
	char name_[NAME_SIZE] = {0, };
	char Phone_[PHONE_SIZE];
	char buffer[PHONE_SIZE];
	TEL_PHONE *list = NULL;
	TEL_PHONE *prev, *p, *next;

	while (1) {

		printf("연결 리스트를 이용한 전화 번호부 메뉴\n");
		printf("-------------------------------------\n");
		printf("1. 초기화\n");
		printf("2. 전화 번호 추가\n");
		printf("3. 전화 번호 탐색\n");
		printf("4. 전화 번호 변경\n");
		printf("5. 종료\n");
		printf("-------------------------------------\n\n");
		printf("번호를 입력하세요 : "); scanf("%d", &choice);
		
		// 초기화
		if (choice == 1) {
			p = list;
			while (p != NULL) {
				next = p->link;
				free(p);
				p = next;
			}
			system("cls");

			printf("초기화가 완료되었습니다.\n");
			
		}

		// 전화번호 추가
		else if (choice == 2) {
			system("cls");
			printf("전화번호를 추가합니다.\n");
			p = (TEL_PHONE *)malloc(sizeof(TEL_PHONE));

			printf("이름 : "); scanf("%s", name_); 
			strcpy(p->name, name_);
			printf("번호 : "); scanf("%s", Phone_);
			strcpy(p->Phone, Phone_);

			if (list == NULL) {		// list가 비어있다면
				list = p;			// 현재 노드를 list에 대입
			}
			else {
				prev->link = p;
			}
			p->link = NULL;
			prev = p;
			system("cls");
			printf("이름 : %s 전화번호 : %s\n", p->name, p->Phone);
			printf("전화번호가 추가 되었습니다.\n\n");
		}

		// 전화번호 탐색
		else if (choice == 3) {
			system("cls");
			printf("탐색할 전화 번호를 입력하세요 : "); scanf("%s", buffer);
			p = list;			// 헤드포인터 p에 대입
			while (list != NULL) {
				if (strcmp(buffer, p->Phone) != 0) {
					p = p->link;
					if (list != NULL) {
						system("cls");
						printf("탐색하신 전화번호의 정보가 존재하지 않습니다.\n");
						break;
					}
					continue;
				}
				else {
					printf("탐색 하신 전화번호의 정보입니다.\n\n");
					printf("---------------------------------\n");
					printf("이름 : %s\n", p->name);
					printf("전화번호 : %s\n", p->Phone);
					printf("---------------------------------\n\n\n");
					break;
				}

			}
		}

		// 전화번호 변경
		else if (choice == 4){
			system("cls");
			printf("변경하실 전화 번호를 입력하세요 : "); scanf("%s", buffer);
			printf("\n");
			p = list;
			while (list != NULL) {
				if (strcmp(buffer, p->Phone) != 0) {
					p = p->link;
					continue;
				}
				else {
					printf("아래 출력되는 전화번호부의 전화번호를 변경합니다. \n\n");
					printf("---------------------------------\n");
					printf("이름 : %s\n", p->name);
					printf("전화번호 : %s\n", p->Phone);
					printf("---------------------------------\n\n\n");
					printf("변경할 전화번호를 입력해주십시오.\n"); scanf("%s", buffer);
					strcpy(p->Phone, buffer);
					system("cls");
					printf("변경이 완료되었습니다.\n");
					break;
				}
				printf("입력하신 전화번호의 정보가 존재하지 않습니다.");
			}
		}

		// 종료
		else if(choice == 5) {
			system("cls");
			printf("종료합니다.\n");
			exit(0);
		}

		// 예외처리
		else {
			system("cls");
			printf("잘못 입력하셨습니다. 다시 입력해 주십시오.\n");
		}
	}
	return 0;
}
