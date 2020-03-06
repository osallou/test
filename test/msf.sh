#! /bin/sh

## Inits
align=$srcdir/align/msf.seq

## Check default MSF file reference
(../src/squizz -A -f msf $align 2>&1 | grep -v MSF) && exit 1

## Check without last empty line
sed -e '$d' $align >_tmpali.seq
(../src/squizz -A -f msf _tmpali.seq 2>&1 | grep -v MSF) && exit 1

## Cleanup
rm -f _tmpali.seq

exit 0

