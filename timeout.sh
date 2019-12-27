#!/bin/bash

solution_file=$1
task_id=$2
timeout_seconds=$3
log_file="logs.txt"

echo $solution_file $task_id $timeout_seconds

python3 generate_task.py $task_id

timeout $timeout_seconds python3 $solution_file 2>&1 | tee $log_file

python3 evaluate_solution.py $log_file 
