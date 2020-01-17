//=========== 2020.01.07. ==============
// - c Language  
// - doubly linked list
//====================================

#include <stdio.h>
#include <stdlib.h>

//struct Node;

typedef struct _Node
{
	int _data;
	//	Node* _prev;
	struct _Node* _next;
} Node;


Node* head = NULL;

//============================
//index에 맞는 노드의 위치를 찾아주는 함수
//============================
Node* SearchPos(int idx)
{
	Node* p = head;
	int pos = 0;

	while (p != NULL)
	{
		if (idx == pos) return p;
		++pos;
		p = p->_next;
	}

	return NULL;
}

void Insert(int idx, int data)
{
	Node* prev_node;
	Node* new_node = (Node*)malloc(sizeof(Node));

	new_node->_data = data;
	new_node->_next = NULL;

	if (idx == 0)  //head에 삽입할 때
	{
		new_node->_next = head;
		head = new_node;
	}

	else
	{
		prev_node = SearchPos(idx - 1);

		if (prev_node != NULL && prev_node->_next == NULL)
		{
			new_node->_next = prev_node->_next;
			prev_node->_next = new_node;

		}
		else
		{
			printf(".....#WRONG POSITION\n");
			free(new_node);			//null일때는 메모리 해제
		}
	}
}

void Delete(int pos)
{
	Node* prev_node = NULL;

	if (pos == 0 && head != NULL)
	{
		head->_data = NULL;
		head = head->_next;
	}
	else
	{
		prev_node = SearchPos(pos - 1);

		if (prev_node != NULL && prev_node->_next != NULL)
		{
			Node* target_node = prev_node->_next;
			prev_node->_next = target_node->_next;

			free(target_node);
		}
		else		//null일때는 메모리 해제
		{
			printf(".....#WRONG POSITION\n");
		}
	}
}

//===============================
// 원래 있는 노드의 데이터만 수정하는 함수
// 친절하게 삽입을 해주지는 않는다.
//===============================
void Replace(int pos, int value)
{
	Node* p = NULL;

	p = SearchPos(pos - 1);

	if (p != NULL && p->_next != NULL)
	{
		p->_next->_data = value;
	}
	else
	{
		printf("....#WRONG POSITION\n");
	}

}

void ClearList()
{
	Node* p = head;

	while (p != NULL)
	{
		Node* t = p;
		t->_next = NULL;
		t->_data = NULL;
		p = t->_next;

		free(t);
	}
	head = NULL;
}

void PrintAllList()
{
	Node* p = head;
	int idx = 0;

	while (p != NULL)
	{
		printf("[%d]%2d\n", idx, p->_data);
		++idx;
		p = p->_next;
	}
}

int main()
{
	int op = -1;
	int pos, data = 0;

	printf("========Linked List=========\n");
	printf("1-Insert\n");
	printf("2-Delete\n");
	printf("3-Clear\n");
	printf("4-Replace\n");
	printf("5-PrintAllList\n");
	printf("0-Exit\n");
	printf("===========================\n");

	while (op != 0)
	{
		printf("▶Select Function: ");
		scanf_s("%d", &op);

		switch (op)
		{
		case 1:
			printf(".....Input position: ");
			scanf_s("%d", &pos);
			printf(".....Input data: ");
			scanf_s("%d", &data);

			Insert(pos, data);
			break;

		case 2:
			printf(".....Input position: ");
			scanf_s("%d", &pos);

			Delete(pos);
			break;

		case 3:
			ClearList();
			break;

		case 4:
			printf(".....Input position: ");
			scanf_s("%d", &pos);
			printf(".....Input data: ");
			scanf_s("%d", &data);

			Replace(pos, data);
			break;

		case 5:
			PrintAllList();
			break;

		case 0:
			goto end;
			break;

		default:
			break;
		}
	}

end:

	printf("\n★Bye Bye\n");
}