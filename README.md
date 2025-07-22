# myshell

A minimal Linux shell project written in C — learning operating systems and security fundamentals.

---

## 🛠️ Project Setup Notes

### Folder Structure
- Created project in: `~/Dev/os-projects/myshell`

### Git Setup
- Initialized Git with `git init`
- Created `.gitignore` to avoid committing binaries
- Added files: `main.c`, `README.md`
- First commit: `git commit -m "Initial commit"`

### GitHub Setup (SSH)
- Generated SSH key with `ssh-keygen -t ed25519`
- Added key to GitHub: https://github.com/settings/keys as 'kali-vm'
- Changed remote to SSH:  
  ```bash
  git remote set-url origin git@github.com:NatanielG/myshell.git
