
cd mpe; make; cd ..

. mpe/vars

export MPEAUTOCONF=1

configure -C --disable-largefile --disable-ipv6 --disable-locale \
 --disable-acl-support --disable-xattr-support --disable-iconv $*

