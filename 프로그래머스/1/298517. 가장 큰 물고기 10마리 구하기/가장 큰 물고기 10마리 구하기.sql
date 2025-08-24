select id as ID, length as LENGTH from fish_info
where LENGTH is not null
order by LENGTH desc, id asc
limit 10;