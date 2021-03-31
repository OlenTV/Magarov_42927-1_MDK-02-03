cmake_minimum_required(VERSION 3.8)

project(MyProject)

file(GLOB_RECURSE fileCollection "Project/*.*")

add_executable(MyProject ${fileCollection})