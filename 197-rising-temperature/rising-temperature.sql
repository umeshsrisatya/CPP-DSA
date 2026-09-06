select curr.id
from Weather curr
join weather prev
    on curr.recordDate  = prev.recordDate     + INTERVAL '1 day'
where curr.temperature > prev.temperature