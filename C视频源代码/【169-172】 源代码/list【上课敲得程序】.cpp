/*
	2019年2月21日09:53:41
	功能：链表创造的例子
*/

# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int data; //数据域
	struct Node * pNext; //指针域指向下一个，类型是struct node类型

};

//函数声明
struct Node * create_list(void);
void traverse_list(struct Node *);

int main(void)
{
	struct Node * pHead = NULL; //等价于 struct Node * pHead = NULL;phead用来存放链表头结点的位置

	pHead = create_list();  //create_list()功能：创建一个非循环单链表，并将该链表的头结点的地址付给pHead
	traverse_list(pHead);
	
	return 0;
}

struct Node * create_list(void)
{
	int len;  //用来存放有效节点的个数
	int i;
	int val; //用来临时存放用户输入的结点的值

	//分配了一个不存放有效数据的头结点，这是造链表的第一步
	struct Node * pHead = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == pHead)
	{
		printf("分配失败, 程序终止!\n");
		exit(-1);
	}
	struct Node * pTail = pHead;
	pTail->pNext = NULL;

	printf("请输入您需要生成的链表节点的个数: len = ");
	scanf("%d", &len);
	
	for (i=0; i<len; ++i)
	{
		printf("请输入第%d个节点的值: ", i+1);
		scanf("%d", &val);
		
		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		if (NULL == pNew)
		{
			printf("分配失败, 程序终止!\n");
			exit(-1);  //终止程序
		}
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}//将新造出来的添加到头结点的后面
	
	return pHead;//返回到phead
}

void traverse_list(struct Node * pHead)
{
	struct Node * p = pHead->pNext;

	while (NULL != p)
	{
		printf("%d  ", p->data);
		p = p->pNext;
	}
	printf("\n");
	
	return;
}
/*
在vc6++中的结果为：
-----------------
请输入您需要生成的链表节点的个数: len = 5
请输入第1个节点的值: 1
请输入第2个节点的值: 2
请输入第3个节点的值: 3
请输入第4个节点的值: 4
请输入第5个节点的值: 5
1  2  3  4  5
Press any key to continue
-----------------
*/

