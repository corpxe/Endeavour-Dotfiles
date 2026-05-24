import subprocess

action = int(input("Enter the process to be executed :\n 1. Add task\n 2. Task Completed\n 3. Remove Task\n    >>> "))

def todo(act):
    list = []

    if act == 1:
        num = int(input('how many tasks : '))
        for i in range(num):
            task = input("Enter task name here >> ")
            list.append(task)
        subprocess.run(["todo","list",task])
        
    
todo(action)