#include<iostream>
using namespace std;

class  Solution{
    public: int marks;
    void StudentGrade(int marks){
        if (marks >=90)
        cout<<"GRADE A ";
        else if (marks>=70)
        cout<<"GRADE  B";
        else if (marks>=50)
        cout<<"GRADE C";
        else if (marks>=35)
        cout<<"GRADE D";
        else 
        cout<<"FAIL";
    }
};
int main(){
    int marks;
    cin>>marks;
    Solution s;
    s.StudentGrade(marks);

}