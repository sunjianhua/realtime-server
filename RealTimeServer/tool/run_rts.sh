#!/bin/sh

lsof -i:44444 | grep rts | awk '{print $2}' | xargs kill -9

~/rts/build/bin/rts;

# netstat -anlp | grep ':44444'

lsof -i:44444 ;

exit 0
