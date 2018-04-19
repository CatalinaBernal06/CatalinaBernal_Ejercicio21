
import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('datos_c.txt')


plt.figure()

plt.plot(datos[:,0], datos[:,1], label='valor final de u')

plt.title('U = U(x, c, t)')
plt.legend(loc = 2)
plt.savefig('nolineal.pdf')

