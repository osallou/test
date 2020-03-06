#! /bin/sh

## Inits
align=$srcdir/align/nexusi.seq

## Check default NEXUS file reference
(../src/squizz -A -f nexus $align 2>&1 | grep -v NEXUS) && exit 1

## Check `token = value' commands (with extra spaces)
sed 's/=/ = /g' $align >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1

## Check sequence name with spaces/brackets
sed "s/^Sp2-Hs  /'Sp2 Hs'/" $align >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1
sed "s/^Sp2-Hs  /'Sp2[x]'/" $align >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1

## Check end tag in ignored block
cat $align >_tmpali.seq
printf "\nbegin dummy\n  append;\nend;\n" >>_tmpali.seq

## Check nested comments
sed 's/\[/[[]/g' $align >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1

## Handle very long comments
printf "[%99999c]\n" " " >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v UNKNOWN) && exit 1

## Check comment in sequence lines
sed 's/--$/-- [comment]/' $align >_tmpali.seq
(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1

## FIXME: Avoid generating invalid format (names contains [] characters)
#sed 's,^>,>[,' $srcdir/align/fasta.seq >_srcali.seq || exit 1
#../src/squizz -A -c nexus _srcali.seq >_tmpali.seq 2>/dev/null || exit 1
#(../src/squizz -A -f nexus _tmpali.seq 2>&1 | grep -v NEXUS) && exit 1

## Cleanup
rm -f _*.seq

exit 0

