-- 코드를 입력하세요
SELECT B.AUTHOR_ID, A.AUTHOR_NAME, B.CATEGORY, SUM(SALES * PRICE) AS SALES
FROM BOOK B, AUTHOR A, BOOK_SALES S
WHERE B.BOOK_ID = S.BOOK_ID AND B.AUTHOR_ID = A.AUTHOR_ID
AND TO_CHAR(SALES_DATE, 'YYYYMM') = '202201'
GROUP BY B.AUTHOR_ID, B.CATEGORY, A.AUTHOR_NAME
ORDER BY B.AUTHOR_ID ASC, B.CATEGORY DESC;