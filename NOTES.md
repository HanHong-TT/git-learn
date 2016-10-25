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

git push origin [tag_name] // push tag to a remote repo

git tag [-l] // show tags

# Branch commands

git branch [-a] // list all available branches

git branch [new_branch_name] // create new branch

git checkout [to_branch_name] // switch branch

git branch [-b] [new_branch_name] // create and swtich to the new branch

git branch [-D] [delete_branch_name] // delete a branch. **NOTE: switch to another branch before deletion**

git branch [-m] [old_branch_name] [new_branch_name] // rename branch

git merge [origin/to_merge_branch] // merging branches. E.g., go to master branch and perform the merge command

## Rebase vs Merge
[Link to Tutorialspoint](https://www.tutorialspoint.com/git/git_managing_branches.htm)
The Git rebase command is a branch merge command, but the difference is that it modifies the order of commits.

The Git merge command tries to put the commits from other branches on top of the HEAD of the current local branch. For example, your local branch has commits A−>B−>C−>D and the merge branch has commits A−>B−>X−>Y, then git merge will convert the current local branch to something like A−>B−>C−>D−>X−>Y

The Git rebase command tries to find out the common ancestor between the current local branch and the merge branch. It then pushes the commits to the local branch by modifying the order of commits in the current local branch. For example, if your local branch has commits A−>B−>C−>D and the merge branch has commits A−>B−>X−>Y, then Git rebase will convert the current local branch to something like A−>B−>X−>Y−>C−>D.