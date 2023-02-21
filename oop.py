class Car:
    def __init__(self):
        self.n=4
    
    def what_car_i_am(self):
        print('i am a car normal car')


    def Total_number_of_wheels(self):
        print('i have '+str(self.n)+' wheels')

    def set_wheels(self,n):
        self.n= n

class Audi(Car):
    def __init__(self):
        super().__init__()

    def what_car_i_am(self):
        print('i am Audi')


class Auto(Car):
    def __init__(self):
        self.set_wheels(3)
    

myAudiCar = Audi()

myAudiCar.what_car_i_am()

myAuto = Auto()

myAuto.Total_number_of_wheels()


myAudiCar.Total_number_of_wheels()

import heapq

H = [23,5,2,23,5,2,3,233,0]

heapq.heapify(H)
heapq.heappush(H,10)

print(H)