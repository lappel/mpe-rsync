
DEFS = $(OPT) -Dmpeix -D_POSIX_SOURCE -D_SOCKET_SOURCE

OBJS = bcopy.o bzero.o bcmp.o

PRIV =
JAZZ = jazz/gettimeofday.o
TARG = libmpe.a

.c.o:
	$(CC) -c $(DEFS) $<

all: $(TARG)

libmpe.a: $(OBJS) $(JAZZ) $(PRIV)
	ar rcv $@ $(OBJS) $(JAZZ) $(PRIV)

libmpe.sl: $(OBJS) $(JAZZ) $(PRIV)
	ld -b -ashared -o $@ $(OBJS) $(JAZZ) $(PRIV)

clean:
	rm -f $(OBJS) $(PRIV) $(TARG)

