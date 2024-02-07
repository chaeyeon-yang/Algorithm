def solution(s):
    st = []
    for now in (list(s)):
        if (now == "("):
            st.append(now)
        else:
            if st:
                st.pop()
            else:
                return False
    if st:
        return False
    else:
        return True
 