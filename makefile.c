stu:deleteall.o modifyNode.o save.o sort.o addBegin.o deleteNode.o main.o revNode.o show.o
        cc deleteall.o modifyNode.o save.o sort.o addBegin.o deleteNode.o main.o revNode.o show.o -o stu

deleteall.o : deleteall.c
        cc -c deleteall.c
modifyNode.o : modifyNode.c
        cc -c modifyNode.c
save.o : save.c
        cc -c save.c
sort.o : sort.c
        cc -c sort.c
addBegin.o : addBegin.c
        cc -c addBegin.c
deleleteNode.o : deleteNode.c
        cc -c deleteNode.c
main.o : main.c
        cc -c main.c
revNode.o : revNode.c
        cc -c revNode.c
show.o : show.c
        cc -c show.c

clear:
        @echo "cleaning up....."
        @rm -r *.o
