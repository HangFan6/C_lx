#include<stdio.h>
#include"stdlib.h"
typedef char elemtype;
#define MAXSIZE 100
//�����ڽӱ�Ľṹ��
typedef struct
{
	elemtype vex[MAXSIZE];//�����
	int data[MAXSIZE];//�������� 
	int arc[MAXSIZE][MAXSIZE];//�ڽӾ��� 
	int vexnum, edgenum;//��ǰ�Ķ������ͱ��� 
}MGraph;
//void creategraph(MGraph* p) 
//{
//    int i, j, k;
//    elemtype v1, v2;
//    printf("�����붥�����ͱ�����\n");
//    printf("������n="); scanf("%d", &p->vexnum);
//    printf("��  ��e="); scanf("%d", &p->edgenum);
//    printf("������ͼ�Ķ�����Ϣ��\n");
//    getchar();
//    for (i = 0; i <= p->vexnum; i++)
//        scanf("%c", &p->data[i]);
//    for (i = 0; i < p->vexnum; i++)
//        for (j = 0; j < p->vexnum; j++)
//            p->arc[i][j] = 0;//��ʼ���ڽӾ���
//    printf("������ͼ�ıߵ���Ϣ��\n");
//    for (k = 0; k < p->edgenum; k++)
//    {
//        printf("�������%d���ߵ������˵㣺", k + 1);
//        scanf("%c%c", &v1, &v2);
//        fflush(stdin);//������뻺����
//        i = locatevex(*p, v1); j = locatevex(*p, v2);
//        if (i >= 0 && j >= 0) {
//            p->arc[i][j] = 1;
//            p->arc[j][i] = 1;//����������Գ�
//        }
//    }
//��ͼ�в��Ҷ���v,���ڷ������ڶ��������е��±꣬�����ڷ���-1
//int locatevex(MGraph p, elemtype v)
//{
//	int i;
//    for (i = 0; i < p.vexnum; i++)if (p.vex[i] == v)return i;
//    return -1;
//}
void CreateMgrapg(MGraph* p)//����ͼ
{
	int i, j, k, w;
	printf("���붨�����ͱ���\n");
	scanf("%d%d", &p->vexnum, &p->edgenum);
	getchar();
	for (i = 0; i < p->vexnum; i++)
	{
		printf("�����%d���������Ϣ\n", i + 1);
		scanf("%d", &p->data[i]);
	}
	for (i = 0; i < p->vexnum; i++)
	{
		for (k = 0; k < p->vexnum; k++)
		{
			p->arc[i][k] = 0;
		}
	}
	for (k = 0; k < p->edgenum; k++)
	{
		printf("�����й�ϵ����������\n");
		scanf("%d%d%d", &i, &j, &w);
		//fflush(stdin);//������뻺����
		//i= locatevex(*p,&i);j= locatevex(*p, &j);
		p->arc[i-1][j-1] = w;
		p->arc[j-1][i-1] = w;
	}
}
//��ӡ��Ϣ
    void print(MGraph p)
{
	int i, j;
	for (i = 0; i < p.vexnum; i++)
	{
		for (j = 0; j < p.vexnum; j++)
		{
			printf("%-10d", p.arc[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	MGraph p;
	CreateMgrapg(&p);
	print(p);
}