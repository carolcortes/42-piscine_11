# Shell 00 💻
- [Exercise 00: Z](#exercise-00-z)
- [Exercise 01: testShell00](#exercise-01-testshell00)
- [Exercise 02: Oh yeah, mooore...](#exercise-02-oh-yeah-mooore)
- [Exercise 03: SSH me!](#exercise-03-ssh-me)
- [Exercise 04: midLS](#exercise-04-midls)
- [Exercise 05: GiT commit](#exercise-05-git-commit)

<!--
- [Exercise 06: gitignore](#exercise-06-gitignore)
- [Exercise 07: diff](#exercise-07-diff)
- [Exercise 08: clean](#exercise-08-clean)
- [Exercise 09: Illusions, not tricks, Michael...](#exercise-09-illusions-not-tricks-michael)
 -->

---

### Exercise 00: Z
> Only the best know how to display Z

Turn-in: `ex00/z` <br>
Description: File created via command line, named as z that returns Z followed by a new line whenever the command
cat is used on it.

```bash
> cat z
Z
>
```

---
### Exercise 01: testShell00
> What are attributes anyway?

Turn-in: `ex01/testShell00.tar` <br>
Description: File created via command line, called testShell00, changing the permissions and last updated date.
```bash
> ls -l
total 1
-r--r-xr-x X XX XX 40 Jun 1 23:42 testShell00
>
```
---
### Exercise 02: Oh yeah, mooore...
> Oh yeah, mooore...

Turn-in: `ex02/exo2.tar` <br>
Description: Regular and linked files created via command line, with specific names, changing the permissions, sizes and last updated dates.

```bash
> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
>
```
---
### Exercise 03: SSH me!
> SSH Key

Turn-in: `ex03/id_rsa_pub` <br>
Description: Generated, copied and renamed SSH key.

---
### Exercise 04: midLS
> midLS

Turn-in: `ex04/midLS` <br>
Description: File with command line for listing all files and directories in your current directory, separated by a comma and a space, by order of modification date, and the directory’s names are followed by a slash character.

---
### Exercise 05: GiT commit
> GiT commit?

Turn-in: `ex05/git_commit.sh` <br>
Description: A shell script that displays the ids of the last 5 commits of your git repository.

```bash
> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
>
```
---
###### Project developed by: [Carol Cortes](https://github.com/carolcortes)

<a href="mailto:caroline.ocortes@gmail.com" target="_blank"><img src="https://img.shields.io/badge/Gmail-D14836?logo=gmail&logoColor=white" alt="Gmail"></a>
<a href="https://linkedin.com/in/carolinecortess" target="_blank"><img src="https://img.shields.io/badge/LinkedIn-%230077B5.svg?logo=linkedin&logoColor=white" alt="LinkedIn"></a>
