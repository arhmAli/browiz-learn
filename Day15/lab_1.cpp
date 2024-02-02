//write a program to store information of students and then find info of specific student
//Add data
//fetch data
//display data

#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Student
{
    int roll_no;
    string name;
    double cgpa;
};

int main()
{
    map<string, Student> studentInfo;
    studentInfo["2019MC253"] = {452164, "Arham Ali",2.5};
    studentInfo["2019MC297"] = {123456, "Faizan Ali",3.0};
    studentInfo["2019MC291"] = {987654, "Hassam Ali",3.5};
    // studentInfo.insert(3213,"asda",3);
    for (auto &i : studentInfo)
    {
        cout << "Roll no: " << i.first << endl
             << "Name: " << i.second.name << endl
             <<"CGPA :"<<i.second.cgpa<<endl;
    }

    int no;
    cout << "How many students u want to register? ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        Student newStudent;
        cout << "Enter roll no for student " << i + 3 << ": ";
        cin >> newStudent.roll_no;
        cin.ignore();
        cout << "Enter name for student " << i + 3 << ": ";
        getline(cin,newStudent.name);
        studentInfo[i + 3] = newStudent;
    }
    string searchName;
    // cin.ignore();
    cout << "Enter name of student u want to find: ";
    getline(cin,searchName);
    bool found = false;
    for (const auto &entry : studentInfo)
    {
        if (entry.second.name == searchName)
        {
            cout << "Found student in directory with key " << entry.first << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found in the directory." << endl;
    }
    return 0;
}
