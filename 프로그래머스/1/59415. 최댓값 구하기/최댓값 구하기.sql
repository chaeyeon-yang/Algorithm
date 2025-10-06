-- 코드를 입력하세요
SELECT datetime
FROM (SELECT *
    FROM ANIMAL_INS
    ORDER BY datetime DESC)
WHERE ROWNUM = 1;