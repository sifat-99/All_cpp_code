import sys
input = sys.stdin.read

def main():
    data = input().strip().split()
    T = int(data[0])
    results = []

    for i in range(1, T + 1):
        N = int(data[2 * i - 1])
        P = int(data[2 * i])

        if N % 2 == 1:  # Odd number of stones
            winner = "Oddius" if P == 2 else "Evenius"
        else:  # Even number of stones
            winner = "Evenius" if P == 2 else "Oddius"

        results.append(f"Case {i}: {winner}")

    print("\n".join(results))

main()
