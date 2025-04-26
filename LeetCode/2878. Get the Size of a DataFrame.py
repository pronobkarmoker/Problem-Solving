import pandas as pd
from typing import List # for vs code to work

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    return list(players.shape)