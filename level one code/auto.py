# import time
# import pyautogui
# time.sleep(5)
# for i in range (0,10):
#     time.sleep(1)
#     pyautogui.write("sanam bewfa",interval=0.10)
#     pyautogui.press('enter')
# 
# 
# 
# 
# # 
for i in range(6):
    print(i)
    for j in range(7):
        print(j,end=" ")
        if(i ==0 and j %3 != 0) or (i == 1 and j % 3==0) or(i - j == 2 ) or (i + j == 8):
            print("*",end=" ")
        else:
            print(end =" ")
    print()
print(" bla bla")



