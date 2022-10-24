def sum_of_digits(number):
    num_int=int(number)
    sum=0
    while(num_int>0):
        r=num_int%10
        sum+=r
        num_int//=10
    print(sum)

number=input("Enter a number:")
sum_of_digits(number)