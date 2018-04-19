
import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('data.txt')
datos2 = np.loadtxt('data0.txt')

plt.figure()

plt.plot(datos[:,0], datos[:,1], label='valor final de u')

plt.plot(datos2[:,0], datos2[:,1], label ='valor inicial de u')
plt.title('U = U(x, t)')
plt.legend(loc = 2)
plt.savefig('t_ambas.pdf')

