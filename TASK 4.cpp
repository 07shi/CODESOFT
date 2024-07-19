#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
	cout<<"Tasks to do: "<<endl;
	cout<<"------"<<endl;
	for(int i=0; i<task_count;i++)
	{
		cout<<"Task"<<i<<":"<<tasks[i]<<endl;
	}
	cout<<"----"<<endl;
}

int main()
{
	system("color b");
	string tasks[10]={""};
	
	int task_count =0;
	int option = -1;
	while(option !=0)
	{
		cout<<"__TO DO LIST __ BY SHIVAM SINGH"<<endl;
		cout<<"1__TO ADD NEW TASK"<<endl;
		cout<<"2__TO VIEW NEW TASK"<<endl;
		cout<<"3__DELETE THE TASK"<<endl;
		cout<<"0--TERMINATE THE PROGRAM"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				{
					if (task_count>9)
					{
						cout<<"Task is full"<<endl;
					}
					else
					{
						cout<<"Enter a new task:";
						cin.ignore();
						getline(cin,tasks[task_count]);
						task_count++;
						
					}
					break;
				}
			case 2:
				system("cls");
				print_tasks(tasks,task_count);
				break;
			case 3:
				{
					system("cls");
					print_tasks(tasks,task_count);
					int del_task=0;
					cout<<"Enter a task to delete:";
					cin>>del_task;
					if(del_task<0 || del_task>9)
					{
						cout<<"You entered invalid task no."<<endl;
						break;
					}
					for(int i=del_task; i<task_count; i++)
					{
						tasks[i]=tasks[i+1];
					}
					task_count = task_count-1;
					break;
				}
			case 0:
				cout<<"Terminating the program ___"<<endl;
				break;
			default:
				cout<<"You entered Invalid Value"<<endl;
				
				
				
		}
		
	}
	return 0;
}
