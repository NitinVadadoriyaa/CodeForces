#!/bin/bash

# Step 1: Add changes to the staging area
git add .

# Step 2: Commit changes with today's date
commit_message="$(date +'%Y-%m-%d') challenge done!"
#echo $commit_message
git commit -m "$commit_message"

# Step 3: Push changes to the remote repository
git push -u origin master
