import matplotlib.pyplot as plt
import numpy as np

plt.rcParams["text.usetex"] = True
plt.rcParams['figure.figsize'] = [15, 10]
plt.rcParams["axes.grid"] = True
plt.rcParams['font.size'] = 20

def S(n, p=0.5):
    return 1/((1-p) + p/n)

n = np.arange(1, 129, 1)
p = np.array([0.5, 0.6, 0.7, 0.8, 0.9, 0.95])

for i in p:
    plt.plot(n, S(n, i), label="$p={}$".format(i))

plt.ylabel("Speedup $S(N, p)$")
plt.xlabel("$N_{cores}$")
plt.axhline(2, ls=":", color="black", label="$S(0.5, n) = 2$")
plt.legend()
plt.savefig("/home/dino/Desktop/test.png")
