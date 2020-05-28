ground = input()


g_pos = ground.index("G")
t_pos = ground.index("T")
m_pos = ground.index("$")

if g_pos < m_pos and t_pos < m_pos:
    if abs(g_pos - m_pos) < abs(t_pos-m_pos):
        print('quiet')
    else:
        print('ALARM')

elif g_pos > m_pos and t_pos > m_pos:
    if abs(g_pos - m_pos) < abs(t_pos-m_pos):
        print('quiet')
    else:
        print('ALARM')

else:
    if abs(g_pos - m_pos) < abs(t_pos-m_pos):
        print('quiet')
    else:
        print('ALARM')