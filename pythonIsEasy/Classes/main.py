class Vehicle:
    def __init__(self, make="", model="", year="", weight=0):
        self.make = make
        self.model = model
        self.year = year
        self.weight = weight
        self.needsMaintenance = False
        self.tripsSinceMaintenance = 0
    
    def setMake(self, make):
        self.make = make
    
    def setModel(self, model):
        self.model = model
    
    def setWeight(self, weight):
        self.weight = weight
    
    def setYear(self, year):
        self.year = year


class Cars(Vehicle):
    def __init__(self, make, model, year, weight):
        super().__init__(make, model, year, weight)
        self.isDriving = False

    def drive(self):
        self.isDriving = True
    
    def stop(self):
        self.isDriving = False
        self.tripsSinceMaintenance += 1
        if self.tripsSinceMaintenance > 100:
            self.needsMaintenance = True
        
    def repair(self):
        self.tripsSinceMaintenance = 0
        self.needsMaintenance = False


car1 = Cars('Toyota', 'Corona', '2015', 350)
car2 = Cars('Honda', 'Civic', '2013', 400)
car3 = Cars('Jeep', 'Grand Cherokee', '2015', 450)

print(f'Car 1:\n=>{car1.make}\n=>{car1.model}\n=>{car1.year}\n=>{car1.weight} kgs\n{"-"*10}\nCar 2:\n=>{car2.make}\n=>{car2.model}\n=>{car2.year}\n=>{car2.weight} kgs\n{"-"*10}\nCar 3:\n=>{car3.make}\n=>{car3.model}\n=>{car3.year}\n=>{car3.weight} kgs')


# custom error class
class CannotFlyError(ValueError):
    def __init__(self, message):
        super().__init__(message)


class Plane(Vehicle):
    def __init__(self, make, model, year, weight):
        super().__init__(make, model, year, weight)
        self.isFlying = False
    
    def flying(self):
        if not self.needsMaintenance:
            self.isFlying = True
        else:
            raise CannotFlyError(f'{self.make}, {self.model} cannot fly until it is repaired!!')
    
    def landing(self):
        self.isFlying = False
        self.tripsSinceMaintenance += 1
        if self.tripsSinceMaintenance > 100:
            self.needsMaintenance = True