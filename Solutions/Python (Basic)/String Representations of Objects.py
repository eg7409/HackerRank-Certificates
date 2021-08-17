#!/bin/python

import math
import os
import random
import re
import sys



class Car:
    def __init__(self,speed,unit):
        self.speed = speed
        self.unit = unit
        
    def __str__(self):
        strn = "Car with the maximum speed of {} {}"
        return strn.format(self.speed,self.unit)

class Boat:
    def __init__(self,speed):
        self.speed = speed
    
    def __str__(self):
        strn = "Boat with the maximum speed of {} knots"
        return strn.format(self.speed)

if __name__ == '__main__':
