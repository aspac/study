#!/bin/bash
echo "Creating Folders.."
echo " "

for i in {0..16..1}
  do
     echo "Welcome Folder :  $i"
     mkdir ../$i
 done

echo "Done"
