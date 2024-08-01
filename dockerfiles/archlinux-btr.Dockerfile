FROM archlinux:latest

RUN pacman -Sy gdb cmake glibc valgrind debuginfod base-devel gtest --noconfirm
