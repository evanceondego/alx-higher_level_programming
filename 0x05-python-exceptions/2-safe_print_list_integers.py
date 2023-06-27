#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """
    Print the first x integers from a list, skipping non-integer values.

    Args:
        my_list (list): The list of values.
        x (int): The number of elements to print from the list.

    Returns:
        The count of successfully printed integers.
    """
    count = 0
    try:
        for i in range(x):
            try:
                value = my_list[i]
                if isinstance(value, int):
                    print("{:d}".format(value), end="")
                    count += 1
            except (ValueError, TypeError):
                continue
    except IndexError:
        pass
    
    print("")
    return count
