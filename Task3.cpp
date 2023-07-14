#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

                //   T A S K  3 

// Create a program that manages student grades. Allow the user
// to input student names and their corresponding grades.
// Calculate the average grade and display it along with the highest
// and lowest grades.


struct task3
{
    string name;
    char grade;

};

int main()
{
    vector<task3>group_students;
    string name;
    char grade;
    char choice;

    cout<<"Display the average Grades "<<endl;

     do{
        task3 students;

        cout<<"Please enter the Student name :"<<endl;
        cin>>students.name;

        cout<<"please enter the Student Grade :"<<endl;
        cin>>students.grade;


        group_students.push_back(students);

        cout<<"Do you want to enter another students name and grade ?  (y/n) :"<<endl;
        cin>>choice;
     }
         while(choice == 'y' || choice == 'Y');

         double sum = 0;
         char average;
         char highestGrade = group_students[0].grade;
         char lowestGrade = group_students[0].grade;

         for (const auto& students : group_students) {
        sum += students.grade;
        highestGrade = min(highestGrade, students.grade);
        lowestGrade = max(lowestGrade, students.grade);
    }

    average = sum / group_students.size();

         cout <<"Display the result :-"<<endl;
         cout << "Average Grade of students are : " << average <<endl;
         cout << "Highest Grade of student is : " << highestGrade <<endl;
         cout << "Lowest Grade of student is : " << lowestGrade << std::endl;


        return 0;


}