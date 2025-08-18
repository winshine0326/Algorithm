select distinct id, email, first_name, last_name 
from developers as d
join skillcodes as s 
on d.skill_code & s.code > 0
where s.name = 'C#' or s.name = 'Python'
order by d.id;