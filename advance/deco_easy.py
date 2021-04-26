def display_info(func):
    def inner():
        print("excuting ",func.__name__,"function")
        func()
        print("finnishd execution")
    return inner


@display_info
def sum_two():
    print("sum of 1 and 2 is",1+2)

sum_two()