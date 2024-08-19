// import all necessary header file , which we will required 

#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;

struct Task{
    string description;
    bool isCompleted;
};

void displayTask(Task tasks[],int taskCount){

    cout<<" Task TO DO : "<<endl;
    cout<<"----------------------------------------------"<<endl;

    for(int i=0;i<taskCount;i++){
        cout<<" Task "<<i<<" : "<<tasks[i].description;
        cout<<" [ "<<(tasks[i].isCompleted ? "Completed" : "Pending")<<"]"<<endl;
    }
     cout<<"----------------------------------------------"<<endl;
}

int main(){
    system("color a");
    Task tasks[20] ;// initialise with empty 
    // vector<string>tasks;

    //for track, how many task we have  
    int taskCount = 0;

    int option = -1;

    while (option != 0)
    {   
        cout<<endl;
        cout<<"---  TO DO LIST  ---"<<endl<<endl;
        cout<<". To Add New Task , press 1 "<<endl;
        cout<<". To View Task , press 2 "<<endl;
        cout<<". To Delete Any Task , press 3 "<<endl;
        cout<<". Mark Task as completed , press 4 "<<endl;
        cout<<". For Exit  , press 0 "<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
            if(taskCount > 19){
                cout<<"``` Task list is full "<<endl;
            }
            else{
                cout<<"Enter the new task"<<endl;
                cin.ignore();
                getline(cin,tasks[taskCount].description);
                tasks[taskCount].isCompleted = false; // by default it will be pending
                taskCount++;
            }
            
            break;
        case 2:
            displayTask(tasks,taskCount);
            break;
        case 3:    
            {
                int delTask = 0;
                cout<<"Enter a task to delete: "<<endl;
               cin>>delTask;

                if(delTask < 0 || delTask >= taskCount ){
                    cout<<"Invalid Task Number"<<endl;
                    break;
                }
                for(int i=delTask;i<taskCount-1;i++){
                    tasks[i] = tasks[i+1];
                }
                taskCount--;
                break;
            }
        case 4:
            {
                int completeTask = 0;
                cout<<"Enter the task number to mark as completed: "<<endl;
                cin>>completeTask;

                if(completeTask < 0 || completeTask >= taskCount){
                    cout<<"Invalid Task Number "<<endl;
                    break;
                }
                else{
                     tasks[completeTask].isCompleted = true;
                     cout<<"Mark as Completed "<<endl;
                }
               
            }    
        default:
            break;
        }

        
    }
    

}