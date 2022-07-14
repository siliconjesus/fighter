from time import sleep
import os

sleeptime = 0.3

os.system('clear')

while (1):
    # print("\033[3;25H◰◳")
    # print("\033[4;25H◱◲")
    # sleep(sleeptime)
    # print("\033[3;25H◱◲")
    # print("\033[4;25H◰◳")
    # sleep(sleeptime)
    # print("\033[3;25H◲◱")
    # print("\033[4;25H◳◰")
    # sleep(sleeptime)
    # print("\033[3;25H◳◰")
    # print("\033[4;25H◲◱")
    # sleep(sleeptime)

    print("\033[5;15H⬛")
    sleep(sleeptime)
    print("\033[5;15H⬜")
    sleep(sleeptime)
