-- 코드를 입력하세요
select extract(year from s.sales_date) as year, 
       extract(month from s.sales_date) as month, 
       u.gender as gender, 
       count(distinct(u.user_id)) as users
from online_sale s left join user_info u
on u.user_id = s.user_id
where u.gender is not null
group by extract(year from s.sales_date), extract(month from s.sales_date), u.gender
order by year asc, month asc, gender asc