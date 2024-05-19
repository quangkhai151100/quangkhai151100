#include<stdio.h>
#include<conio.h>
typedef struct sinhvien
{
	char hoten[40];
	int tuoi;
}sinhvien;
typedef struct node
{
	sinhvien data;
	node *link;  // duoc su dung de tro con tro ke tiep trong danh sach//
}node;
typedef struct stack
{
	node *top; // dung de chi den phan tu dau tien cua ngan xep s//
}stack;
void khoitao(stack &s)
{
	s.top=NULL; // gan null cho top trong ngan xep s, de biet rang no khong co phan tu nao//
}
int empty(stack s)  //empty kiem tra ngan xep s co rong hay khong 1=rong, 0=khong rong//
{
	return s.top==NULL?1:0;// if top la null ham trong thi tra gia tri 1, va nguoc lai//
}
void push(stack &s, sinhvien x)
{
	node *p; // khai bao 1 con tro toi 1 nut node//
	p=new(node); // cap phat bo nho de tao ra 1 nut moi//
	p->data=x;// gan du lieu x vao truong data cua nut p//
	p->link=s.top;//gan con tro link cua nut p, de tro toi nut hien dang la dinh cua ngan xep s//
	s.top=p;//cap nhap con tro top cua ngan xep s de tro toi nut p va lam cho p tro thanh phan tu moi cua dinh cua ngan xep//
}// sau khi ham nay duoc thuc thi thi phan tu x se duoc them vao dinh cua ngan xep s//
sinhvien pop(stack &s) //dung de loai bo va tra ve dinh cua ngan xep s //
{
	node *p;
	if(!empty(s))//kiem tra ngan xep s co rong hay khong bang cach su dung ham empty, neu ngan xep khong rong//
	p=s.top;//gan con tro p de tro vao dinh cua ngan xep s//
	s.top=p->link;//cap nhat con tro top cua ngan xep s de tro vao phan tu tiep theo sau dinh cua ngan xep//
	return p->data;// tra ve du lieu khi phan tu bi bo khoi dinh cua ngan xep//
}
int main()
{
	int n; stack s; sinhvien x;
	printf("\n Nhap vao so phan tu:");
	scanf("%d",&n);
	khoitao(s);
	for(int i=0; i<n; i++)
	{
		printf("\n Nhap Ho Va Ten:");
		fflush(stdin); gets(x.hoten);
		printf("\n Nhap Tuoi:");
		scanf("%d",&x.tuoi);
		push(s,x);
	}
	while(!empty(s))
	{
		x=pop(s);
		printf("\n Ho Ten:%s", x.hoten);
		printf("\n Tuoi:%d", x.tuoi);
	}
	getch();
}
