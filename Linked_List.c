#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_SIZE 50

// 정의는 되었지만 생성은 되지 않음에 주의
typedef struct NODE {
	char title[S_SIZE];	// 데이터 필드
	int year;
	struct NODE *link;	// 링크 필드
}NODE;

int main(void)
{
	NODE *list = NULL;		// NODE를 가르키는 헤드포인터 정의
	NODE *prev, *p, *next;
	
	char buffer[S_SIZE];
	int year;

	// 연결 리스트에 정보를 입력한다.
	
	while (1)
	{
		printf("Please enter the title of the book (Exit : Enter) : ");
		gets_s(buffer, S_SIZE);
		if (buffer[0] == '\0')		// 엔터키만 눌렀다면 종료
			break;

		p = (NODE *)malloc(sizeof(NODE));	// 동적 메모리 할당
		strcpy(p->title, buffer);
		printf("Please enter the year of publication of the book:"); //출판년도 입력
		gets_s(buffer, S_SIZE);
		//year = atoi(buffer);
		p->year = atoi(buffer);

		if (list == NULL)		// 리스트가 비어있다면
			list = p;			// 새로운 노드를 첫번째 노드로 만든다!
		else					// 리스트가 비어 있지 않다면
			prev->link = p;		// 새로운 노드를 이전 노드에 끝에 붙인다.
		p->link = NULL;			// 새로운 노드의 링크 필드를 NULL로 설정
		prev = p;				// 다음 반복시엔 현재 구조체가 이전구조체가 된다
	}
	printf("\n");

	// 연결 리스트에 들어 있는 정보를 모두 출력한다.

	p = list;
	while (p != NULL)
	{
		printf("[%s,%d]->", p->title, p->year);
		p = p->link;
	}

	printf("\n");
	// 동적할당 반납
	p = list;
	while (p != NULL) {
		next = p->link;
		free(p);
		p = next;
	}

	return 0;
}