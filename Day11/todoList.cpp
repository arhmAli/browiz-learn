// You are tasked with creating a simple Todo Manager program to help users organize 
// and manage their tasks. Implement the Task class to represent a task with attributes 
// like title, description, priority, and completion status.
// Create a TodoManager program using a combination of stack and vector to store and manipulate
// tasks. The program should perform the following actions:
// Allow the user to input the number of tasks they want to add to the Todo list.
// For each task, prompt the user to enter the title, description, and priority.
// Display each task as it is added to the Todo list, showing the title, priority, and description.
// After adding tasks, ask the user to mark each task as completed or not. Use a stack to temporarily 
// store tasks while checking completion status.
// Display the final Todo list, including the title, priority, description, and completion status for 
// each task.

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
class Task{
    protected:
    string title;
    string desc;
    int priority;
    bool completed;
    public:
    Task():completed(false){};
    void setData(string t,string d, int p){
        title=t;
        desc=d;
        priority=p;
    }
    void markAsCompleted(){
        completed = true;
    }
    void showTask(){
        cout<<"YOUR TASK"<<title<<" Have been added with"<<priority<<" priority"<<endl;
    }
        void showStack(){
            cout << "Title: " << title << endl
             << "Priority: " << priority << endl
             << "Description: " << desc << endl
             << "Completed: " << (completed ? "Yes" : "No") << endl
             << "---------------------" << endl;
    }
};
int main(){
    stack <Task> todo;
    vector <Task> tempTodo;
    string t;
    string d;
    bool task;
    task=false;
    int pr;
    int no=0;
    cout<<"How many task you want to add?"<<endl;
    cin>>no;
    cin.ignore();
    for(int i=0;i<no;i++){
        Task p;
        cout<<"Enter title"<<endl;
        getline(cin,t);
        cout<<"Enter description"<<endl;
        getline(cin,d);
        cout<<"Set priority"<<endl;
        cin>>pr;
        p.setData(t,d,pr);
        p.showTask();
        todo.push(p);
        cin.ignore();
    }
    while(!todo.empty()){
        todo.top().showStack();
        cout << "Is this task completed?" << endl;
        cin>>task;
        if (!task){
            todo.top().markAsCompleted();
        }
        tempTodo.push_back(todo.top());
        todo.pop();
    }
    
    for(auto i : tempTodo){
        cout<<"***************----------------------------------------***************"<<endl;
        cout<<"Your final todo list is as:"<<endl;
        i.showStack();
    }
    return 0;
}