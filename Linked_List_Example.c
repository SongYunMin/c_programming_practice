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
//		printf("���� ������ �Է��ϼ���(���� -1) : "); scanf("%d", &num);
//		if (num == -1) {
//			break;
//		}
//
//		p = (INTEGER *)malloc(sizeof(INTEGER));	// �����Ҵ�
//		p->NODE_num = num;
//		if (list == NULL) {		// ����Ʈ�� ����ִٸ�
//			list = p;
//		}
//		else {
//			prev->node = p;		// ����Ʈ�� ������� �ʴٸ�
//		}
//		p->node = NULL;			// ���ο� ����� ��ũ �ʵ� NULL�� ����
//		prev = p;				// ���� �ݺ��ÿ� ���� ����ü�� ���� ����ü�� ��.
//	}
//	printf("\n");
//
//	p = list;		// ��������� list�� p�� ����
//
//	// ��� ���� ���
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
//	// �����Ҵ� �ݳ�
//	p = list;
//	while (p != NULL) {
//		next = p->node;
//		free(p);
//		p = next;
//	}
//
//	return 0;
//}