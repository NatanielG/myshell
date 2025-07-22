ChatGPT:
git status                   # Check changes
git add filename.c           # Stage a file
git commit -m "Your message" # Commit it
git log --oneline            # View history
git diff                     # See what's changed

My own thoughts:
git status
-files that are tracked (staged) and changed
-files that are new (havent been git added)
-files staged for commit (have been git added) 
git add <file> 
- add file to tracked/staged (must be done after every change to prepare for commit)
- can use 'git add .' to add all changes/changed files or new files
git commit -m "message" 
- like adding a time stamp with short message of what was done
- like a checkpoint or snapshot

git diff 
-Shows unstaged changes (What was changed in files but not yet git added)

git branch 
- shows all branches

git push -u origin <branch_name> 
pushing the files on current branch
