class UniqueIdentifier(object):

    value = 0

    def __init__(self, name):
        self.name = name

    @classmethod
    def produce(cls):
        instance = cls(cls.value)
        cls.value += 1
        return instance

class FunkyUniqueIdentifier(UniqueIdentifier):

    @classmethod
    def produce(cls):
        instance = super(FunkyUniqueIdentifier, cls).produce()
        instance.name = "Funky %s" % instance.name
        return instance


x = UniqueIdentifier.produce()
y = FunkyUniqueIdentifier.produce()

print x.name
print y.name 
