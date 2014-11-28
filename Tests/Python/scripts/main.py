import rule_python as rule
import cercle
import boucle


def getGameState(gameState):

    strategy = rule.StrategyState()

    t = gameState.getTime()

    t1 = cercle.getPosition(t)
    t2 = boucle.getPosition(t)

    v1 = rule.Vector()
    v1.set(*t1)
    strategy.setPlayer(0, v1)

    v2 = rule.Vector()
    v2.set(*t2)
    strategy.setPlayer(1, v2)

    return strategy
