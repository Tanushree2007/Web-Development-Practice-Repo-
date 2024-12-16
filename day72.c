def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def find_primes_in_array(arr):
    primes = [num for num in arr if is_prime(num)]
    return primes

# Example usage
arr = [2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
prime_numbers = find_primes_in_array(arr)
print("Prime numbers in the array:", prime_numbers)
