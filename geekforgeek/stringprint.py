from curses.ascii import isalpha


s ="66[o]1[bc2[r]d3[b2[ca]]]"


stack=[]

mystring =''
for i in s:
    if(i != ']'):
        stack.append(i)
    else:
        temp_str,temp_digit ='',''
        while(stack[-1] != '['):
            temp_str=stack.pop()+ temp_str
        stack.pop()
        if stack and stack[-1].isdigit():
            temp_digit = stack.pop() +temp_digit
        stack.append(int(temp_digit)*temp_str)
print(stack)
print(''.join(stack))