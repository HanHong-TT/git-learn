[Link to git documentation](https://git-scm.com/doc)

[Link to git Tutorialspoint](https://www.tutorialspoint.com/git/index.htm)

# Basic commands

git clone [url] // pulls down all the data in the repo, init .git and checkout the latest version in working directory

git checkout 

git pull // fetch and integrate

git add [file_url/dir_url] // E.g., adding all files of current directory, git add .

git commit [-a] [-m '[message]'] // -a to skip the add part.

git push [-u] [repo] [branch] origin master

git status

git diff // shows difference of **modified but not yet staged** changes

git diff --[staged/cached] // shows difference of staged but not yet committed** changes

git show

git log [-2] // show all the commits and comments with SHA-1

git mv [old_file_name] [new_file_name]

git rm [file_name] // remove file from staging area (index) and hard drive

git rm --cached [file_name] // remove file from index (don't want git to keep tracking the file), but keep the file in the hard drive

git reset HEAD [file_name] // reset the file from staged to unstage. **NOTE: reset with --hard parameter will wipe out your changes in the file

git checkout [HEAD] [-- file_name]

Each branch has a HEAD pointer, which points to the latest commit. If we use Git reset command with --soft option followed by commit ID, then it will reset the HEAD pointer only without destroying anything. **.git/refs/heads/master** file stores the commit ID (SHA-1) of the HEAD pointer.

# Erase changes commands

git checkout -- . // revert changes in current working directory

git checkout -- * // revert all changes made to **unstaged** files in git status

git checkout -- [file_path] // revert changes to a certain path

NOTE: _git pull_ erase all **uncommitted** changes, it fetch all the changes in the remote repo and merge (or rebase with the --rebase parameter) into the current committed repo. _git checkout_ erase all **unstaged** changes, it revert the file into the the status where HEAD points to, the staged but uncommitted changes will remain in the staging area.

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

### Rebase vs Merge

[Link to Tutorialspoint](https://www.tutorialspoint.com/git/git_managing_branches.htm)

The Git rebase command is a branch merge command, but the difference is that it modifies the order of commits.

The Git merge command tries to put the commits from other branches on top of the HEAD of the current local branch. For example, your local branch has commits A−>B−>C−>D and the merge branch has commits A−>B−>X−>Y, then git merge will convert the current local branch to something like A−>B−>C−>D−>X−>Y

The Git rebase command tries to find out the common ancestor between the current local branch and the merge branch. It then pushes the commits to the local branch by modifying the order of commits in the current local branch. For example, if your local branch has commits A−>B−>C−>D and the merge branch has commits A−>B−>X−>Y, then Git rebase will convert the current local branch to something like A−>B−>X−>Y−>C−>D.

#Reset, Checkout, and Revert

[Link to atlassian](https://www.atlassian.com/git/tutorials/resetting-checking-out-and-reverting)

### Commit level operations

Reset: Changes the HEAD and branch pointers to a certain commit and will throw out the following commits

Checkout: The branch pointers remain untouched. The HEAD pointers can be changed to either another branch (branch poiter) or any other commits. This action might create detached HEAD pointer and there's no way to come back after swtiching to a new branch if you add new commits to the detached HEAD.

Revert: It creates a new commit and added it after the current branch. Will not lose any other commit.

### File level operations

Reset: update the **staged snapshot** of a certain file to a certain commit

Checkout: update the **working directory** of a certain file to a certain commit

Revert: Does not have file level operations

#Branch

git checkout -b [new_branch_name] // equals to run a git branch [new_branch_name] and git checkout [new_branch_name]

git branch // show branches

git branch -d [branch_name] // delete branch

git merge [to_merge_branch] // merget to_merge_branch to the current HEAD branch