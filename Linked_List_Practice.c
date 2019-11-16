#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define NAME_SIZE 20
#define PHONE_SIZE 30

typedef struct TEL_PHONE {
	char name[NAME_SIZE];
	char Phone[PHONE_SIZE];
	struct TEL_PHONE *link;	// ��ũ �ʵ�
}TEL_PHONE;


/*
void Init(TEL_PHONE *p, TEL_PHONE *link, TEL_PHONE *prev,TEL_PHONE *next)
{
	
}


// ��ȭ��ȣ �߰� �Լ�
void Add(TEL_PHONE *p, TEL_PHONE *list,TEL_PHONE *prev)
{
	char name_[NAME_SIZE];
	char Phone_[PHONE_SIZE];

	printf("�̸� : "); scanf("%s", name_);
	printf("��ȣ : "); scanf("%s", Phone_);
	p = (TEL_PHONE *)malloc(sizeof(TEL_PHONE));
	strcpy(p->name, name_);
	strcpy(p->Phone, Phone_);

	if (list == NULL) {		// list�� ����ִٸ�
		list = p;			// ���� ��带 list�� ����
	}
	else {
		prev->link = p;
	}
	p->link = NULL;
	prev = p;
	printf("\n");
	printf("�̸� : %s ��ȭ��ȣ : %s\n", p->name, p->Phone);
	printf("��ȭ��ȣ�� �߰� �Ǿ����ϴ�.\n\n");
}

// ��ȭ��ȣ Ž�� �Լ�
void Explore(TEL_PHONE *p, TEL_PHONE *list, TEL_PHONE *prev)
{
	char str[PHONE_SIZE];
	printf("��ȭ ��ȣ�� �Է��ϼ��� : "); scanf("%s", str);

	p = list;			// ��������� p�� ����
	while (list != NULL) {
		if (strcmp(str,p->Phone) != 1) {
			p = p->link;
		}
		else {
			printf("Ž�� �Ͻ� ��ȭ��ȣ�� �����Դϴ�.\n");
			printf("�̸� : %s\n", p->name);
			printf("��ȭ��ȣ : %s\n", p->Phone);
			break;
		}
		printf("\nŽ���Ͻ� ��ȭ��ȣ�� ������ �������� �ʽ��ϴ�.\n");
		return;
	}
}



// ��ȭ��ȣ ���� �Լ�
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

		printf("���� ����Ʈ�� �̿��� ��ȭ ��ȣ�� �޴�\n");
		printf("-------------------------------------\n");
		printf("1. �ʱ�ȭ\n");
		printf("2. ��ȭ ��ȣ �߰�\n");
		printf("3. ��ȭ ��ȣ Ž��\n");
		printf("4. ��ȭ ��ȣ ����\n");
		printf("5. ����\n");
		printf("-------------------------------------\n\n");
		printf("��ȣ�� �Է��ϼ��� : "); scanf("%d", &choice);
		
		// �ʱ�ȭ
		if (choice == 1) {
			p = list;
			while (p != NULL) {
				next = p->link;
				free(p);
				p = next;
			}
			system("cls");

			printf("�ʱ�ȭ�� �Ϸ�Ǿ����ϴ�.\n");
			
		}

		// ��ȭ��ȣ �߰�
		else if (choice == 2) {
			system("cls");
			printf("��ȭ��ȣ�� �߰��մϴ�.\n");
			p = (TEL_PHONE *)malloc(sizeof(TEL_PHONE));

			printf("�̸� : "); scanf("%s", name_); 
			strcpy(p->name, name_);
			printf("��ȣ : "); scanf("%s", Phone_);
			strcpy(p->Phone, Phone_);

			if (list == NULL) {		// list�� ����ִٸ�
				list = p;			// ���� ��带 list�� ����
			}
			else {
				prev->link = p;
			}
			p->link = NULL;
			prev = p;
			system("cls");
			printf("�̸� : %s ��ȭ��ȣ : %s\n", p->name, p->Phone);
			printf("��ȭ��ȣ�� �߰� �Ǿ����ϴ�.\n\n");
		}

		// ��ȭ��ȣ Ž��
		else if (choice == 3) {
			system("cls");
			printf("Ž���� ��ȭ ��ȣ�� �Է��ϼ��� : "); scanf("%s", buffer);
			p = list;			// ��������� p�� ����
			while (list != NULL) {
				if (strcmp(buffer, p->Phone) != 0) {
					p = p->link;
					if (list != NULL) {
						system("cls");
						printf("Ž���Ͻ� ��ȭ��ȣ�� ������ �������� �ʽ��ϴ�.\n");
						break;
					}
					continue;
				}
				else {
					printf("Ž�� �Ͻ� ��ȭ��ȣ�� �����Դϴ�.\n\n");
					printf("---------------------------------\n");
					printf("�̸� : %s\n", p->name);
					printf("��ȭ��ȣ : %s\n", p->Phone);
					printf("---------------------------------\n\n\n");
					break;
				}

			}
		}

		// ��ȭ��ȣ ����
		else if (choice == 4){
			system("cls");
			printf("�����Ͻ� ��ȭ ��ȣ�� �Է��ϼ��� : "); scanf("%s", buffer);
			printf("\n");
			p = list;
			while (list != NULL) {
				if (strcmp(buffer, p->Phone) != 0) {
					p = p->link;
					continue;
				}
				else {
					printf("�Ʒ� ��µǴ� ��ȭ��ȣ���� ��ȭ��ȣ�� �����մϴ�. \n\n");
					printf("---------------------------------\n");
					printf("�̸� : %s\n", p->name);
					printf("��ȭ��ȣ : %s\n", p->Phone);
					printf("---------------------------------\n\n\n");
					printf("������ ��ȭ��ȣ�� �Է����ֽʽÿ�.\n"); scanf("%s", buffer);
					strcpy(p->Phone, buffer);
					system("cls");
					printf("������ �Ϸ�Ǿ����ϴ�.\n");
					break;
				}
				printf("�Է��Ͻ� ��ȭ��ȣ�� ������ �������� �ʽ��ϴ�.");
			}
		}

		// ����
		else if(choice == 5) {
			system("cls");
			printf("�����մϴ�.\n");
			exit(0);
		}

		// ����ó��
		else {
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ֽʽÿ�.\n");
		}
	}
	return 0;
}
