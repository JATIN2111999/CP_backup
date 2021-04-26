class Celsius:
    def __init__(self,temperature=0):
        self.set_temperature(temperature)

    def to_fahrenheit(self):
        return (self.get_temperature()*1.8) +32

    def get_temperature(self):
        return self._temperature

    def set_temperature(self,value):
        if value < -273.15:
            raise ValueError("temperature below -273.15 is not possibe;")
        self._temperature = value
    temperature = property(get_temperature,set_temperature)

human =Celsius(37)


# print(human.get_temperature())

# print(human.to_fahrenheit())
# human.set_temperature(-300)

# print(human.to_fahrenheit())
print(human.temperature)
print(human.to_fahrenheit())


