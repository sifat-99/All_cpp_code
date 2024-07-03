from graphviz import Digraph

# Create a Digraph object
dot_odd = Digraph(comment='Odd Palindrome PDA')

# Define nodes (states)
dot_odd.node('q0', 'q0')
dot_odd.node('q1', 'q1')
dot_odd.node('q2', 'q2')
dot_odd.node('qf', 'qf')

# Define edges (transitions)
dot_odd.edge('q0', 'q0', label='a, Z -> aZ\na, a -> aa\nb, Z -> bZ\nb, a -> ba')
dot_odd.edge('q0', 'q1', label='ε, Z -> Z')
dot_odd.edge('q1', 'q2', label='d, Z -> Z')
dot_odd.edge('q2', 'q2', label='a, a -> ε\nb, b -> ε')
dot_odd.edge('q2', 'qf', label='ε, Z -> Z')

# Render the graph
dot_odd.render('/mnt/data/odd_palindrome_pda', format='png', cleanup=False)

'/mnt/data/odd_palindrome_pda.png'
