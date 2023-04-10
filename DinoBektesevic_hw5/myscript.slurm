#!/bin/bash

#SBATCH --job-name=hwjob

#SBATCH --account=astro
#SBATCH --partition=astro

#SBATCH --nodes=1
#SBATCH --time=1:00:00
#SBATCH --mem=100G

#SBATCH --workdir=/gscratch/astro/dinob/hwjobdir

./sumrange.out 1 1000 0&
./sumrange.out 1001 2000 1&
./sumrange.out 2001 3000 2&
./sumrange.out 3001 4000 3&
./sumrange.out 4001 5000 4&
./sumrange.out 5001 6000 5&
./sumrange.out 6001 7000 6&
./sumrange.out 7001 8000 7&
./sumrange.out 8001 9000 8&
./sumrange.out 9001 10000 9&
./sumrange.out 10001 11000 10&
./sumrange.out 11001 12000 11&
./sumrange.out 12001 13000 12&
./sumrange.out 13001 14000 13&
./sumrange.out 14001 15000 14&
./sumrange.out 15001 16000 15&
./sumrange.out 16001 17000 16&
./sumrange.out 17001 18000 17&
./sumrange.out 18001 19000 18&
./sumrange.out 19001 20000 19&
./sumrange.out 20001 21000 20&
./sumrange.out 21001 22000 21&
./sumrange.out 22001 23000 22&
./sumrange.out 23001 24000 23&
./sumrange.out 24001 25000 24&
./sumrange.out 25001 26000 25&
./sumrange.out 26001 27000 26&
./sumrange.out 27001 28000 27&
wait
./reducesum.out 28
