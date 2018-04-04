#!/bin/bash

# Set some variables
DAY=$(date +%F);

# Now add any changes
cd /home/weiss/Documentos/Github/Online_Judge_Problems/;
git add .;
# Now commit
git commit -m "Auto Commit | $DAY";
git push -u origin master;
