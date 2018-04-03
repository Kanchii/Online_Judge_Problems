#!/bin/bash

# Set some variables
DAY=$(date +%F);

# Now add any changes
git add /home/weiss/Documentos/Github/Online_Judge_Problems/;
# Now commit
git commit -m "auto_commit$DAY";
git push -u origin master;
