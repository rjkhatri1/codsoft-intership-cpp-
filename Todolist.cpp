#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Task {
    string d;
    bool c;

    Task(string desc) : d(desc), c(false) {}
};


void addTask(vector<Task> &tasks, const string &d) {
    Task newTask(d);
    tasks.push_back(newTask);
    cout << "Task '" << d << "' added!" << endl;
}

void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty!" << endl;
    } else {
        cout << "To-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].d;
            if (tasks[i].c) {
                cout << " [Completed]";
            }
            cout << endl;
        }
    }
}

void markTaskCompleted(vector<Task> &tasks, int index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].c = true;
        cout << "Task '" << tasks[index - 1].d << "' marked as completed." << endl;
    } else {
        cout << "Invalid index. Task not marked as completed." << endl;
    }
}

void removeTask(vector<Task> &tasks, int index) {
    if (index >= 1 && index <= tasks.size()) {
        cout << "Task '" << tasks[index - 1].d << "' removed." << endl;
        tasks.erase(tasks.begin() + index - 1);
    } else {
        cout << "Invalid index. Task not removed." << endl;
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4/5): ";
        cin >> choice;

        if (choice ==1){
            
                cin.ignore(); // Clear the newline character left in the buffer
                cout << "Enter the task: ";
                string description;
                getline(cin, description);
                addTask(tasks, description);
                }
        else if(choice==2){
                viewTasks(tasks);
                }
        else if(choice==3){
                viewTasks(tasks);
                cout << "Enter the index of the task to mark as completed: ";
                int indexComplete;
                cin >> indexComplete;
                markTaskCompleted(tasks, indexComplete);
                }
        else if(choice==4){
                viewTasks(tasks);
                cout << "Enter the index of the task to remove: ";
                int indexRemove;
                cin >> indexRemove;
                removeTask(tasks, indexRemove);
                break;}
        else if(choice==5)
                cout << "Exiting To-Do List Manager. Goodbye!" << endl;
                
        else{
                cout << "Invalid choice. Please select a valid option." << endl;
                
        }}
    }

    

