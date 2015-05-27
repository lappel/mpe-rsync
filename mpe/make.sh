
cd mpe; make; cd ..

. mpe/vars

if test "$1" = "use-O0"; then
  M=Makefile; sed "s,-O2,-O0,g" $M > $M.mpe && mv -f $M.mpe $M ; exit
fi

if test "$1" = "use-O2"; then
  M=Makefile; sed "s,-O0,-O2,g" $M > $M.mpe && mv -f $M.mpe $M ; exit
fi

make $*

