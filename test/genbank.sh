#! /bin/sh

## Inits
sequence=$srcdir/sequence/genbank.seq

## Check default GENBANK file reference
(../src/squizz -S -f genbank $sequence 2>&1 | grep -v GENBANK) && exit 1

## Check long sequence name
sed 's,HUMHBV1,some_long_sequence_name_to_be_tested,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep -v GENBANK) && exit 1

## Check supported accessions
sed 's,^ACCESSION   .*$,ACCESSION   UNKNOWN,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep -v GENBANK) && exit 1
sed 's,^ACCESSION   .*$,ACCESSION   XXX-YYY,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep -v GENBANK) && exit 1

## Check supported keywords
sed 's,^KEYWORDS    .$,KEYWORDS    one;two.,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep -v GENBANK) && exit 1
sed 's,^KEYWORDS    .$,KEYWORDS    one; two.,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep -v GENBANK) && exit 1

## Convert sequence without description data
head -n +1 $sequence  >_tmpseq.seq || exit 1
tail -n +4 $sequence >>_tmpseq.seq || exit 1
../src/squizz -c genbank _tmpseq.seq >/dev/null 2>&1 || exit 1

## Definition must end with a period
sed '/junction.$/d' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep GENBANK) && exit 1
sed 's,junction.$,junction,' $sequence >_tmpseq.seq
(../src/squizz -S -f genbank _tmpseq.seq 2>&1 | grep GENBANK) && exit 1

## Cleanup
rm -f _tmpseq.seq

exit 0

