import math
def mirror(position, dim,mirror):
    answer=position
    rotation=[2*position, 2*(dim-position)]
    if mirror<0:
        for i in range(mirror, 0):
            answer -= rotation[(i+1)%2]
    else:
        for i in range(mirror, 0, -1):
            answer += rotation[i%2]
    return answer 

def projections(pos, dim, distance):
    mirrored=[]
    for i in range(len(pos)):
        points=[]
        for j in range(-(distance//dim[i])-1, (distance//dim[i]+2)):
            points.append(mirror( pos[i], dim[i],j))
        mirrored.append(points)
    return mirrored



def solution(dimensions, your_position, guard_position, distance):
    mirrored = [projections(your_position, dimensions,distance),projections(guard_position, dimensions, distance)]
    
    result=set()
    angles_dist={}
    for i in range(0, len(mirrored)):
        for j in mirrored[i][0]:
            for k in mirrored[i][1]:
                dist=math.sqrt((your_position[0]-j)**2 + (your_position[1]-k)**2)
                angle=math.atan2((your_position[1]-k), (your_position[0]-j))
                
                if [j,k] != your_position and distance >= dist:
                    if((angle in angles_dist and angles_dist[angle] > dist) or angle not in angles_dist):
                        if i == 0:
                            angles_dist[angle] = dist
                        else:
                            angles_dist[angle] = dist
                            result.add(angle)
    return len(result) 
print(solution([3,2], [1,1], [2,1], 4))