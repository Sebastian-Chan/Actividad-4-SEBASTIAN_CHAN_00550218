from Mamifero import Mamifero
import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.withdraw() 


class Gato(Mamifero):
    def __init__(self, nombre, peso, nBigotes):
        super().__init__(nombre, peso)
        self.nBigotes = nBigotes
    
    def imprimirG(self):
        messagebox.showinfo("Nombre del gato:", self.getNombre())
        messagebox.showinfo("Peso:", self.getPeso())
        messagebox.showinfo("Número de bigotes:", self.nBigotes)