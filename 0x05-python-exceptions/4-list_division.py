#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    result = []
    try:
        for i in range(list_length):
            try:
                element_1 = my_list_1[i]
                element_2 = my_list_2[i]
                
                if isinstance(element_1, (int, float)) and isinstance(element_2, (int, float)):
                    try:
                        division = element_1 / element_2
                        result.append(division)
                    except ZeroDivisionError:
                        result.append(0)
                        print("division by 0")
                else:
                    result.append(0)
                    print("wrong type")
                    
            except IndexError:
                result.append(0)
                print("out of range")
                
    except TypeError:
        return None
        
    finally:
        return result
