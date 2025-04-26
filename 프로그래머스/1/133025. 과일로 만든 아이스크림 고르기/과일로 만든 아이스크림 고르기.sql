-- 코드를 입력하세요
SELECT flavor from icecream_info natural join first_half where total_order > 3000 and ingredient_type = "fruit_based" order by total_order desc;