from tkinter import N


def somapar(n):
    if n==1:
        return 2
    return somapar(n-1) + 2*n

