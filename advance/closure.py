def print_msg(message):
    greeting ="hello"

    def printer():
        print(greeting,message)
    return printer

func=print_msg("Python is awesome")
func()
