#include<iostream.h>
class student
{
int rno;
int marks;
public:
student()
{
cout<<"enter roll no : ";
cin>> rno;
cout<<"enter marks : ";
cin>> marks;
}
student (int r,int m)
{
rno=r;
marks=m;
}

};
void main()
{
student s1;
student s2(3,200);




}