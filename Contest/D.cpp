#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> heights(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> heights[i];
  }

  std::vector<int> biscuits(n);
  int max_height = 0;
  for (int i = 0; i < n; i++)
  {
    if (heights[i] > max_height)
    {
      biscuits[i] = max_height + 1;
      max_height = heights[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    std::cout << biscuits[i] << std::endl;
  }

  return 0;
}
