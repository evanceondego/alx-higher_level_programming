#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """
    Print integers from a list using "{:d}".format().
    
    Args:
        my_list (list): The list of values.
        x (int): The number of elements to print from the list.
        
    Returns:
        The count of successfully printed integers.
    """
    count = 0
    for i in range(x):
        try:
            print("{:d}".format(my_list[i]), end="")
            count += 1
        except (ValueError, TypeError):
            continue
    print("")
    return count
