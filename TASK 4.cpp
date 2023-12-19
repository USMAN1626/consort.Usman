#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
    Task(const string& desc) : description(desc), completed(false) {}
};
class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back(Task(description));
        cout << "Task added: " << description << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks found." << endl;
        } else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description;
                if (tasks[i].completed) {
                    cout << " [Completed]";
                }
                cout << endl;
            }
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed: " << tasks[index - 1].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            cout << "Task removed: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
    } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;

    do {
     cout << "\n===== TO-DO LIST MANAGER =====" << endl;
        cout << "1. Add Task" << endl;
     cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
  cout << "4. Remove Task" << endl;
        cout << "0. Exit" << endl;
  cout << "Enter your choice: ";
        cin >> choice;
 switch (choice) {
            case 1: {
  string taskDescription;
  cout << "Enter task description: ";
     cin.ignore(); // Clear buffer
                getline(cin, taskDescription);
                toDoList.addTask(taskDescription);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
      size_t taskIndex;
      cout << "Enter the task index to mark as completed: ";
    cin >> taskIndex;
   toDoList.markTaskCompleted(taskIndex);
                break;
            }
            case 4: {
                size_t taskIndex;
  cout << "Enter the task index to remove: ";
 cin >> taskIndex;
                toDoList.removeTask(taskIndex);
                break;
				  }
            case 0:
   cout << "Exiting program. Goodbye!" << endl;
                break;
    default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

