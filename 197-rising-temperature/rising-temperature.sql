select curr.id
from Weather curr
join weather prev
    on curr.recordDate  = prev.recordDate   + 1
where curr.temperature > prev.temperature