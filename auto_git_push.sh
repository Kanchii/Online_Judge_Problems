#!/bin/bash

# Set some variables
DAY=$(date +%F);

# Now add any changes
git add .;
# Now commit
git commit -m "Auto Commit | $DAY";
git push -u origin master;
