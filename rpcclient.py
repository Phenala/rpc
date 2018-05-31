import rpyc

class AreaCalculator:

    def __init__(self):

        self.server = rpyc.connect( 'localhost', 12345, config  = {'allow_public_attrs': True})
        self.main()

    def main(self):
        radius = float(input('Enter the radius: '))
        area = self.server.root.computeArea(radius)
        print('The area is ', area)

AreaCalculator()
