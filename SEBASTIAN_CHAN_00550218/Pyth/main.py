from Gato import Gato
from Vaca import Vaca
from Ballena import Ballena
import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.withdraw()


def main():
    meow = Gato("Cleo", 4.3, 8)
    meow.imprimirG()

    moo = Vaca("Lola", 557.65, 26)
    moo.imprimirV()

    moby = Ballena("Moby Dick", 3000.0)
    messagebox.showinfo("Nombre:", moby.getNombre())
    messagebox.showinfo("Peso:", moby.getPeso())

if __name__ == "__main__":
    main()