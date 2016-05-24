#!/usr/bin/env python2

import os

#bsize = 16384
#fin = os.open("foo", os.O_RDONLY)
#fout = os.open("bar", os.OWRONLY | os.O_CREAT, 0o644)

# c-style syntax is busted here
#while (buf = os.read(fin,bsize)):
#    os.write(fout,buf)

# crummy unpythonic method
#while 1:
#    buf = os.read(fin, bsize)
#    if buf:
#        os.wrie(fout, buf)
#    else:
#        break

with open('foo', 'rb') as fin:
    with open('bar', 'wb') as fout:
        fout.write(fin.read())

#os.close(fin)
#os.clouse(fout)

