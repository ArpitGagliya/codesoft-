#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string newTask;
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, newTask);
            tasks.push_back(newTask);
            cout << "Task added successfully!" << endl;
        } else if (choice == 2) {
            cout << "Tasks:" << endl;
            for (int i = 0; i < tasks.size(); i++) {
                cout << "[" << i + 1 << "] " << tasks[i] << endl;
            }
        } else if (choice == 3) {
            int taskNumber;
            cout << "Enter task number to delete: ";
            cin >> taskNumber;
            if (taskNumber > 0 && taskNumber <= tasks.size()) {
                tasks.erase(tasks.begin() + taskNumber - 1);
                cout << "Task deleted successfully!" << endl;
            } else {
                cout << "Invalid task number!" << endl;
            }
        } else if (choice == 4) {
            return 0;
        } else {
            cout << "Invalid choice!" << endl;
        }

        cout << endl;
    }

    return 0;
}