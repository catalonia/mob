#!/usr/bin/env bash
CURRENTDIR=`pwd`
echo ${CURRENTDIR}
cd ${CURRENTDIR}
ant;

cd $TOMCAT_HOME

sh ./bin/shutdown.sh

#exit 0

rm $TOMCAT_HOME/logs/tslogs/*.log*;

cd ${CURRENTDIR}

ant deployWar

cd $TOMCAT_HOME

sh ./bin/startup.sh
cd ${CURRENTDIR}