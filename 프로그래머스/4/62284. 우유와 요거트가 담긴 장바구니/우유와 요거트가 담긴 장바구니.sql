-- 코드를 입력하세요
with milk_cart as (
    select cart_id, count(*) as milk_cnt
    from cart_products
    where name = 'Milk'
    group by cart_id
),
yogurt_cart as (
    select cart_id, count(*) as yogurt_cnt
    from cart_products
    where name = 'Yogurt'
    group by cart_id
)
SELECT mc.cart_id
FROM milk_cart mc
JOIN yogurt_cart yc ON mc.cart_id = yc.cart_id
ORDER BY mc.cart_id;