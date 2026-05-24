import subprocess

action = int(input("Enter the process to be executed :\n 1. Add task\n 2. Task Completed\n 3. Remove Task\n>>>"))

def todo(act):
    if act == 1:
        task = input("Enter task name here >> ")
        subprocess.run(["todo","list",task])
    
todo(action)