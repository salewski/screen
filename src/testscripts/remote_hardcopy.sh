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
${BIN} -S testsuite -X stuff "cat ./testscripts/testsuite_file_001.txt\n"
${BIN} -S testsuite -X hardcopy

echo "Testsuite: remote hardcopy"
diff ./testscripts/remote_hardcopy_comparefile.txt ./hardcopy.0
res1=$?
if [[ ${res1} -eq 0 ]]; then
	tput setaf 2; echo PASSED; tput sgr0
else
	tput setaf 1; echo FAILED; tput sgr0
fi

# cleanup
${BIN} -S testsuite -X quit
rm hardcopy.0
