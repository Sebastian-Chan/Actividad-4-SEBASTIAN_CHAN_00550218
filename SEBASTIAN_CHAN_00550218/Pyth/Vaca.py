from Mamifero import Mamifero
import tkinter as tk
from tkinter import messagebox

class Vaca(Mamifero):
    def __init__(self, n, p, l):
        super().__init__(n, p)
        self.litrosDeLeche = l
    
    def imprimirV(self):
        messagebox.showinfo("Nombre de la vaca:", self.getNombre())
        messagebox.showinfo("Peso:", self.getPeso())
        messagebox.showinfo("Litros de leche:", self.litrosDeLeche)