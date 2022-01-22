
def compute(row, col, grid):
    w = len(grid[0])
    h = len(grid)
    cache = [[None for i in range(w)] for i in range(h)]
    cache[row][col] = 1

    q = [(row, col)]
    while len(q)!=0:
        x, y = q.pop(0)
        for i in [[1,0],[-1,0],[0,-1],[0,1]]:
          move_x, move_y = x + i[0], y + i[1]
          if 0 <=move_x  < h and 0 <= move_y < w:
            if cache[move_x][move_y] is None:
                cache[move_x][move_y] = cache[x][y] + 1
                if grid[move_x][move_y] == 1 :
                  continue
                q.append((move_x, move_y)) 
                  
    return cache

def solution(map):
  w = len(map[0])
  h = len(map)
  
  end = compute(0, 0, map)
  source = compute(h-1, w-1, map)
  

  ans = float('inf')
  for i in range(h):
      for j in range(w):
          if end[i][j] and source[i][j]:
              ans = min(end[i][j] + source[i][j] - 1, ans)
  return ans