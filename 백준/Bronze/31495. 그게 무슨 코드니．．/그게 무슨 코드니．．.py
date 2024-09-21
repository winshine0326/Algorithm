n = input()
if len(n)<2 or n[0]!='"' or n[-1]!='"':
    print("CE")
elif len(n)==2:
    print("CE")
else:
    print(n.strip('"'))