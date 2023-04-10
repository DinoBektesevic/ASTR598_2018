import matplotlib.pyplot as plt
import numpy as np

plt.rcParams["text.usetex"] = True
plt.rcParams['figure.figsize'] = [15, 8]
plt.rcParams["axes.grid"] = True
plt.rcParams['font.size'] = 20

mine = np.asarray([[0.162, 0.160, 0.159], [1.107, 1.117, 1.099], [9.237, 9.202, 9.167]])
his = np.asarray([[0.226, 0.229, 0.221], [1.618, 1.589, 1.456], [14.312, 14.264, 14.179]])

group = np.asarray([["$10^6$"]*3, ["$10^7$"]*3, ["$10^8$"]*3])

plt.scatter(group.ravel(), mine.ravel(), label="findoddhw1")
plt.scatter(group.ravel(), his.ravel(), label="findodd")

plt.ylabel("Time elapsed [s]")
plt.xlabel("Number of inputs")
plt.legend()

plt.savefig("hw3exec_times.png")
