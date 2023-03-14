class train:
    #name
    def __init__(self,name,source,dest,seat_no):
        self.name = name
        self.source = source
        self.dest = dest
        self.seat_no = seat_no 
        self.seat_arr = [[0 for i in range(seat_no)] for j in range(len(dest))]
        # print(self.seat_arr)

    def display(self):
        print(self.seat_arr)

    def check_full(self,source,dest):
        for j in range(self.seat_no):
            flag = 1
            for i in range(source,dest):
            
                if self.seat_arr[i][j] == 0:
                    continue
                else : flag = 0

            if flag == 1: 
                return "available"


        return "unavailable"

    def book_full(self,source,dest) :
        # print(source )
        # print(dest )
        if(self.check_full(source,dest)=='available'):
            for j in range(self.seat_no):
                flag = 1
                for i in range(source,dest+1):
                    # print(i )
                    # print(j)
            
                    if self.seat_arr[i][j] == 0:
                        continue
                    else : flag = 0

                if flag == 1: 
                    for i in range(source,dest+1):
                        # print(i )
                        # print(j)
                        
                        self.seat_arr[i][j] = 1
                        # print(self.seat_arr)
                       
                    print("ticket booked")
                   
                    return
                

        else : print("sorry ticket unavailable")           






list1 = []

list1.append(train('Rush',1,"012345",5))

list1[0].display()


print(list1[0].book_full(1,2))
print(list1[0].book_full(1,2))
print(list1[0].book_full(1,2))
print(list1[0].book_full(1,2))
print(list1[0].book_full(1,2))
print(list1[0].book_full(1,2))

list1[0].display()

class station:
    next_id = 0
    def __init__(self,id,name,dest,connection):
        self.id = station.next_id
        station.next_id += 1
        self.name = name
        self.dest = dest
        self.connection = connection

edges = [[1,2,18],[1,3,20],[1,4,45],[1,5,28],[2,1,69],[3,1,12],[4,1,56],[5,1,69],[5,6,25],[5,9,75],[6,5,14],[6,7,69],[6,8,7],[7,6,24],[8,6,89],[9,5,12]]

stoppageList = ['102', '30542', '9865', '2146', '4268', '596', '2', '78', '5']

def buildGraph(noOfNodes, edges, stoppageList):
    adjList = [[[], ""] for _ in range(noOfNodes + 1)]

    for edge in edges:
        src, dest, distance = edge
        adjList[src][0].append((dest, distance))

    i = 1
    for stoppage in stoppageList:
        adjList[i][1] = stoppage
        i += 1

    return adjList

adjList = buildGraph(9, edges, stoppageList)

for i in range(len(adjList)):
    print(f"{i}: {adjList[i]}")