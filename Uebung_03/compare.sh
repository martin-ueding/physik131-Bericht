#!/bin/bash
# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

# Compresses the files in the data folder with gzip, bzip2 and tar and displays
# time and file sizes.

set -e
set -u

data="data"

mytime="/usr/bin/time -f %E"

if [[ ! -d "$data" ]]
then
	echo "Please create a folder $data and fill it with test data"
	exit 1
fi

mkdir -p out
rm -f out/*

echo -ne "tar\t"
trap 'rm -f test.tar' EXIT
$mytime tar -cf test.tar "$data"

cp test.tar out/test-1.tar
cp test.tar out/test-9.tar
cp test.tar out/test.tar
echo -ne "gzip -1\t"
$mytime gzip -1 out/test-1.tar
echo -ne "gzip -9\t"
$mytime gzip -9 out/test-9.tar
echo -ne "gzip\t"
$mytime gzip out/test.tar


echo -ne "zip\t"
$mytime zip -rq out/test.zip "$data"

cp test.tar out/test-1.tar
cp test.tar out/test-9.tar
cp test.tar out/test.tar
echo -ne "bzip2 -1\t"
$mytime bzip2 out/test-1.tar
echo -ne "bzip2 -9\t"
$mytime bzip2 out/test-9.tar
echo -ne "bzip2\t"
$mytime bzip2 out/test.tar

ls -lhS out
