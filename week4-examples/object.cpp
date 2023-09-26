#include <iostream>
using namespace std;

struct student {
    char *name;
    int age;
    int *mark;
};

int main(int argc, char const *argv[])
{
    cout<<"hello";
    student* stu = new student();
        student* stu2 = new student();
            student* stu3 = new student();
    stu->age= 17;
    stu->name ="Akbota";
    int stusd[] = {100,85,70,95};
    stu->mark = stusd;
    stu2->age= 18;
    stu2->name = "Ali";
    stu3->age= 17;
    stu3->name = "Nurbol";
     cout<<"  1th studen:"<<stu->age<<" name:"<<stu->name<<endl;
     cout<<"  2th studen:"<<stu2->age<<" name:"<<stu2->name<<endl;
     cout<<"  3th studen:"<<stu3->age<<" name:"<<stu3->name<<endl;
    //student * tem;
    student * students[10] ;
     students[0]=stu;
    students[1]=stu2;
    students[1]=stu3;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<"  the studen:"<<students[i]->age<<" name:"<<students[i]->name<<" mark are:"<<students[i]->mark<<endl;
    }
    

    
    return 0;
}
