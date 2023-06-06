st_digit(number):
    if number < 0:
        last = (abs(number) % 10)
    else:
        last = number % 10
    print("{}".format(last), end="")
    return last
