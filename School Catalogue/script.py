class School:
  def __init__(self, name, level, numberOfStudents):
    self.name = name
    self.level = level
    self.numberOfStudents = numberOfStudents
  def getName(self):
    return self.name
  
  def getLevel(self):
    return self.level

  def getNumberOfStudents(self):
    return self.numberOfStudents
  
  def setNumberOfStudents(self, newNumberOfStudents):
    self.numberOfStudents = newNumberOfStudents

  def __repr__(self):
    return "A {level} school named {name} with {numberOfStudents} students".format(level = self.level, name = self.name, numberOfStudents = self.numberOfStudents)

class PrimarySchool(School):
  def __init__(self, name, numberOfStudents, pickupPolicy):
    super().__init__(name, "primary", numberOfStudents)
    self.pickupPolicy = pickupPolicy
  def getPickupPolicy(self):
    return self.pickupPolicy
  def __repr__(self):
    parentRepr = super().__repr__()
    return parentRepr + " The pickup policy is {pickupPolicy}".format(pickupPolicy = self.pickupPolicy)

class HighSchool(School):
  def __init__(self, name, numberOfStudents, sportsTeams):
    super().__init__(name, 'high', numberOfStudents)
    self.sportsTeams = sportsTeams
  def getSportsTeams(self):
    return self.sportsTeams
  def __repr__(self):
    parentRepr = super().__repr__()
    return parentRepr + "Our sports teams are {sportsTeams}".format(sportsTeams = self.sportsTeams)
  
c = HighSchool("Codecademy High", 500, ["Tennis", "Basketball"])
print(c.getSportsTeams())
print(c)
