compile=cc
flag=c
target=options.o add.o mod.o reverse.o sort.o save.o stud_del.o
outfile:$(target)
	$(compile) $(target) -o outfile
options.o:options.c
	$(compile) -$(flag) options.c
add.o:add.c
	$(compile) -$(flag) add.c
mod.o:mod.c
	$(compile) -$(flag) mod.c
reverse.o:reverse.c
	$(compile) -$(flag) reverse.c
sort.o:sort.c
	$(compile) -$(flag) sort.c
save.o:save.c
	$(compile) -$(flag) save.c
stud_del.o:stud_del.c
	$(compile) -$(flag) stud_del.c
clear:
	@echo "clearing up..."
	@rm -v *.o
	
