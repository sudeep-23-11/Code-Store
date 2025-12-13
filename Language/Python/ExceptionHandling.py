#ExceptionHandling
def checkAge(age) :
    if age<0 :
        raise RuntimeError("negative age not allowed")
    elif age<18 :
        print("under age")
    else :
        print("legal adult")

try :
    checkAge(21)
    checkAge(11)
    checkAge(-1)
except RuntimeError as e :
    print(e)
else :
    print("no errors found")
finally :
    print("checking done")