#!/bin/bash

#FILES="trickle_10_10_d75_t110.log"
#NODES=(2 3 4 11 12 13 21 22 31)
FILES="trickle_5_5_d75_t110.log"
NODES=(1 2 3 4 6 7 8 11 12)

GREP_TERM="Received\|sending"

LEN_NODES=${#NODES[*]}

NODE_GREP_TERM=""
i=0
while [ $i -lt $LEN_NODES ]; do
    NODE_GREP_TERM+="DEBUG (${NODES[$i]})"
    let i++
    if [ $i -lt $LEN_NODES ]; then
	NODE_GREP_TERM+="\|"
    fi
done

#echo "grep \"$NODE_GREP_TERM\" $FILES | grep $GREP_TERM | less"
grep "$NODE_GREP_TERM" $FILES | grep "$GREP_TERM" | less
