import subprocess

action = int(input("Enter the process to be executed :\n 1. Add task\n 2. Task Completed\n 3. Remove Task\n 4. Display list\n    >>> "))

def todo(act):
    list = []

    if act == 4:
        subprocess.run(["todo","list"])

    if act == 1:
        num = int(input('how many tasks : '))
        for i in range(num):
            task = input(f"Enter task number {i+1} here >> ")
            list.append(task)
        subprocess.run(["todo","add",*list])
        
    
todo(action)