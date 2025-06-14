def count_denominations(amount):
  """
  Counts the number of bills of each denomination for a given amount.

  Args:
    amount: The amount of money in PHP.

  Returns:
    A dictionary containing the number of bills for each denomination.
  """

  denominations = {
      100: 0,
      50: 0,
      20: 0,
      10: 0,
      5: 0,
      2: 0,
      1: 0,
  }

  # Loop through each denomination and calculate the number of bills
  for denomination in denominations:
    denominations[denomination] = amount // denomination
    amount %= denomination

  return denominations

# Example usage
amount = 1234

denominations = count_denominations(amount)

print("Number of bills:")
for denomination, count in denominations.items():
  if count > 0:
    print(f"{count} x {denomination:.0f} PHP bills")
