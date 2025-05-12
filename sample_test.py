class Average():
    def __init__(self, name, japanese, english):
        self.__name = name
        self.__japanese = japanese
        self.__english = english
        self.__average = self.__calculate_average()

    def __calculate_average(self):
        return (self.__japanese + self.__english) / 2

    def get_name(self):
        return self.__name

    def get_average(self):
        return self.__average
