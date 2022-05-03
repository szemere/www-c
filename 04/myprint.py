import gdb

def myprint(item):
    try:
        print(item['value'], end = ' -> ')
        myprint(item['next'])
    except gdb.error:
        print("NULL")

mylist = gdb.parse_and_eval("mylist")
myprint(mylist)
