import subprocess



def todo():
    while True:
        act = int(input("Enter the process to be executed :\n 1. Add task\n " \
        "2. Task Completed\n 3. Clear List\n " \
        "4. Display list\n 5. Sort List\n 6. Exit\n   >>> "))
        list = []

        if act == 101:
            subprocess.run(["todo","--help"])
            break

        if act == 6:
            print("You are Done for now")
            break

        if act == 3:
            
            
        if act == 5:
            subprocess.run(["todo","sort"])
            subprocess.run(["todo","list"])

        if act == 4:
            print("\n##############\n##############")
            subprocess.run(["todo","list"])
            print("\n##############\n##############")

        if act == 1:
            num = int(input('how many tasks : '))
            for i in range(num):
                task = input(f"Enter task number {i+1} here >> ")
                list.append(task)
            subprocess.run(["todo","add",*list])

        if act == 2:
            n = str(int(input("Enter task index here >> ")))
            subprocess.run(["todo","done",n])

todo()