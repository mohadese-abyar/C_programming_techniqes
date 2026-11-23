def first_unique_char(s):
    counts = {}  # دفترچه یادداشت ما
    
    # ۱. شمارش تکرار هر کاراکتر
    for char in s:
        counts[char] = counts.get(char, 0) + 1
        
    # ۲. پیدا کردن اولین کاراکتری که تعدادش ۱ است
    for i, char in enumerate(s):
        if counts[i] == 1:
            return   i         
    return -1