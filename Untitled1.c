#include<stdio.h>
#include<stdlib.h>
struct struct student{
  int ID;
  char name[20];
  float score;
}
 stu[3];
 int main()
 {
    void input(student stu[],int n);
    void print(student stu[],int n);
    input (stu,3);
    printf("��Щͬѧû�м���\n");
    print (stu,3);
    return 0;
 }
 void input(student stu[],int n);
 {
   int i=1;
   for(i=1;i<=n,i++)
   {
      printf("�������%d��ͬѧ����Ϣ:\n",i);
      printf("Ⱥ����id��\n");
      scanf_s("%d",&stu_[i].ID);
      printf("please input student name:\n");
      scanf_s("%s",&stu_[i].name);
      printf("please input the score:\n");
      scanf_s("%f",&stu_[i].score);
      }
  }
  void print (student stu_[],int n);
  {
  int i;
  for(i=1;i<n;i++)
  if(stu_[i].score<60.0)
  printf("id:%d\t name:%s\t score:%f\n",stu_[i].ID,stu_[i].name,stu_[i].score);
  }
