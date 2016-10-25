# Basic commands

git clone

git checkout 

git add .

git commit [-a] [-m '[message]']

git push [-u] [repo] [branch] origin master

git status

git diff

git show

git log [-2] // show all the commits and comments with SHA-1

git mv [old_file_name] [new_file_name]

git rm [file_name]

git checkout [HEAD] [-- file_name]

Each branch has a HEAD pointer, which points to the latest commit. If we use Git reset command with --soft option followed by commit ID, then it will reset the HEAD pointer only without destroying anything. **.git/refs/heads/master** file stores the commit ID (SHA-1) of the HEAD pointer.

# Stash commands

git stash // stashing the change before commit

gut stash list // show stash list

git stash pop // pop to the stash

# Tag commands

git tag [-a tag_name] [-m tag_messeage] [HEAD | commit ID] // add tag to a local repo

git push origin tag [tag_name] // push tag to a remote repo

git tag [-l] // show tags