#!/bin/sh

for i in `ls -1 testscripts/*.sh`; do
	sh ${i}
done
