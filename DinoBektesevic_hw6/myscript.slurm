#!/bin/bash

#SBATCH --job-name=hwjob

#SBATCH --account=astro
#SBATCH --partition=astro

#SBATCH --nodes=1
#SBATCH --time=1:00:00
#SBATCH --mem=100G

#SBATCH --workdir=/gscratch/astro/dinob/hwjobdir

module load parallel-20170722
cat myworkfile | parallel -j 28
./reducesum.out 280
