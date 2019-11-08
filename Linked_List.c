#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_SIZE 50

// ���Ǵ� �Ǿ����� ������ ���� ������ ����
typedef struct NODE {
	char title[S_SIZE];	// ������ �ʵ�
	int year;
	struct NODE *link;	// ��ũ �ʵ�
}NODE;

int main(void)
{
	NODE *list = NULL;		// NODE�� ����Ű�� ��������� ����
	NODE *prev, *p, *next;

	char buffer[S_SIZE];
	int year;

	// ���� ����Ʈ�� ������ �Է��Ѵ�.

	while (1)
	{
		printf("Please enter the title of the book (Exit : Enter) : ");
		gets_s(buffer, S_SIZE);
		if (buffer[0] == '\0')		// ����Ű�� �����ٸ� ����
			break;

		p = (NODE *)malloc(sizeof(NODE));	// ���� �޸� �Ҵ�
		strcpy(p->title, buffer);
		printf("Please enter the year of publication of the book:"); //���ǳ⵵ �Է�
		gets_s(buffer, S_SIZE);
		//year = atoi(buffer);
		p->year = atoi(buffer);

		if (list == NULL)		// ����Ʈ�� ����ִٸ�
			list = p;			// ���ο� ��带 ù��° ���� �����!
		else					// ����Ʈ�� ��� ���� �ʴٸ�
			prev->link = p;		// ���ο� ��带 ���� ��忡 ���� ���δ�.
		p->link = NULL;			// ���ο� ����� ��ũ �ʵ带 NULL�� ����
		prev = p;				// ���� �ݺ��ÿ� ���� ����ü�� ��������ü�� �ȴ�
	}
	printf("\n");

	// ���� ����Ʈ�� ��� �ִ� ������ ��� ����Ѵ�.

	p = list;	// ��������� list�� p�� ����
	while (p != NULL)
	{
		printf("[%s,%d]->", p->title, p->year); // ��忡 �湮
		p = p->link;							// ��ũ �ʵ��� ���� p�� ����
	}

	printf("\n");
	// �����Ҵ� �ݳ�
	p = list;				// ������ p�� ��� ������ list�� ���� ����
	while (p != NULL) {		// p�� NULL�� �ɶ����� �ݺ�
		next = p->link;		// p�� ����Ű�� ������ �ݳ��ϸ� p->link�� �����Ҽ� ����, ���� free ȣ����, p->link�� next��� �����Ϳ� ����
		free(p);			// ���� �޸� �ݳ�
		p = next;			// next�� p�� �����Ͽ� ���� ���� �̵�
	}

	return 0;
}