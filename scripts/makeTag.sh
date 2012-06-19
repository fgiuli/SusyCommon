#!/bin/bash

# Use this script to easily create a SusyCommon tag in svn
# Need to pass the desired tag in as the only argument

if [[ $# != 1 ]]; then

    echo "Usage:"
    echo "> makeTag.sh SusyCommon-XX-YY-ZZ"
    exit 1

fi

tag=$1

trunk=svn+ssh://svn.cern.ch/reps/atlasinst/Institutes/UCIrvine/SUSYAnalysis/SusyCommon/trunk
target=svn+ssh://svn.cern.ch/reps/atlasinst/Institutes/UCIrvine/SUSYAnalysis/SusyCommon/tags/$tag

echo "Copying trunk to"
echo "  $target"
echo

sleep 1s

echo "Are you sure? [type yes]"
read response

if [[ $response != "yes" ]]; then

    echo "Canceled..."
    exit 1

fi

echo "OK, tagging now..."

echo "Done"
