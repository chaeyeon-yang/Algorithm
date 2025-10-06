-- 코드를 입력하세요
SELECT product_id, product_name, product_cd, category, price
FROM (
    SELECT *
    FROM FOOD_PRODUCT
    ORDER BY price DESC
)
WHERE ROWNUM = 1;