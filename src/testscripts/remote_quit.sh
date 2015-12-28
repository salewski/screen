#!/bin/sh

# setup fake env
export SHELL="/bin/bash"
export _SHELLOPTS="--noprofile --norc"
export PS1="$"


# how to launch screen intself
BIN=./screen
CONFIGFILE="/dev/null"
OPTS="-c ${CONFIGFILE} -dm -S testsuite"

# actual test run
${BIN} ${OPTS} ${SHELL} ${_SHELLOPTS} 
res1=$?
${BIN} -S testsuite -X quit
res2=$?

echo "Testsuite: remote quit"
if [[ ${res1} -eq 0 && ${res2} -eq 0 ]]; then
	tput setaf 2; echo PASSED; tput sgr0
else
	tput setaf 1; echo FAILED; tput sgr0
fi
