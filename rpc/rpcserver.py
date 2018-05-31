import rpyc
from rpyc.utils.server import ThreadedServer

class AreaComputeServer(rpyc.Service):

    def exposed_computeArea(self, radius):
        return 3.14152 * (radius ** 2) 


server = ThreadedServer(AreaComputeServer, port = 12345)
server.start()
