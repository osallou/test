#! /bin/sh

## Inits
sequence=$srcdir/sequence/sprot.seq

## Check default SWISSPROT file reference
(../src/squizz -S -f swissprot $sequence 2>&1 | grep -v SWISSPROT) && exit 1

## Check long sequence name
sed 's,UBR5_RAT,some_long_sequence_name_to_be_tested,' $sequence >_tmpseq.seq
(../src/squizz -S -f swissprot _tmpseq.seq 2>&1 | grep -v SWISSPROT) && exit 1

## Check cross-reference data with internal `;'
sed 's,Rattus norvegicus,Rattus;norvegicus,' $sequence >_tmpseq.seq
(../src/squizz -S -f swissprot _tmpseq.seq 2>&1 | grep -v SWISSPROT) && exit 1

## Cleanup
rm -f _tmpseq.seq

exit 0

