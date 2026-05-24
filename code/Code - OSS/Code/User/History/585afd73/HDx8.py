import subprocess

def todo():
    while True:
        act = int(input("Enter the process to be executed :\n 1. Add task\n 2. Task Completed\n 3. Clear List\n 4. Display list\n 5. Exit\n   >>> "))
        list = []

        if act == 5:
            print("You are Done for now")
            break

        if act == 4:
            subprocess.run(["todo","list"])
            break

        if act == 1:
            num = int(input('how many tasks : '))
            for i in range(num):
                task = input(f"Enter task number {i+1} here >> ")
                list.append(task)
            subprocess.run(["todo","add",*list])

        if act == 2:
            task = input("Enter task here >> ")
            if task in list:
                n = list.index(task)
                subprocess.run(["todo","done",list[n]])
            else:
                print('Invalid Task, Task does not exist in the list')
    
todo()