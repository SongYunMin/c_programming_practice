//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define ARR_SIZE 100
//
//
//typedef struct INTEGER{
//	int NODE_num;
//	struct INTEGER *node;
//}INTEGER;
//
//int main(void)
//{
//	int num;
//	INTEGER *list = NULL;
//	INTEGER *prev, *p, *next;
//	while (1) {
//		printf("양의 정수를 입력하세요(종료 -1) : "); scanf("%d", &num);
//		if (num == -1) {
//			break;
//		}
//
//		p = (INTEGER *)malloc(sizeof(INTEGER));	// 동적할당
//		p->NODE_num = num;
//		if (list == NULL) {		// 리스트가 비어있다면
//			list = p;
//		}
//		else {
//			prev->node = p;		// 리스트가 비어있지 않다면
//		}
//		p->node = NULL;			// 새로운 노드의 링크 필드 NULL로 설정
//		prev = p;				// 다음 반복시엔 현재 구조체가 이전 구조체가 됨.
//	}
//	printf("\n");
//
//	p = list;		// 헤드포인터 list를 p에 대입
//
//	// 노드 정보 출력
//	while (1)
//	{
//		if (p == NULL) {
//			printf("NULL");
//			break;
//		}
//		printf("%d->", p->NODE_num);
//		p = p->node;
//	}
//
//	// 동적할당 반납
//	p = list;
//	while (p != NULL) {
//		next = p->node;
//		free(p);
//		p = next;
//	}
//
//	return 0;
//}