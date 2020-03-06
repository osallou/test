#! /bin/sh

## Verbose mode
test "x${VERBOSE:=}" = xx && set -x

## Inits
sequence=$srcdir/sequence/nbrf.seq

## Check default NBRF file reference
(../src/squizz -S -f nbrf $sequence 2>&1 | grep -v NBRF) && exit 1

## Check format name aliases
(../src/squizz -S -f pir $sequence 2>&1 | grep -v NBRF) && exit 1

## Cleanup
rm -f _tmpseq.seq

exit 0

