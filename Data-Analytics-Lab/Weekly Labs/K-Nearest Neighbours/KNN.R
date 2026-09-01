data = read.csv("input.csv")
euclidianDistance <- function(x1,y1,x2,y2) {
  x<-(x2-x1)^2+(y2-y1)^2
  sqrt(x)
}
knn <- function(age,loan, neighbours) {
  distance = c()
  l <- length(data[,1])
  for (i in c(1:l)) {
    d = euclidianDistance(age,loan,data[i,2],data[i,3])
    distance = c(distance,d)
  }
  df = data.frame(data[,4],distance)
  print(df)
  df = df[order(df$distance),]
  newdf = df[1:neighbours,]
  y=0
  n=0
  for (i in c(1:neighbours)) {
    if(newdf[i,1]=='Y') {
      y=y+1
    }
    else {
      n=n+1
    }
  }
  if(y>n) {
    result = 'Y'
  }
  else {
    result = 'N'
  }
  result
}
result = knn(48,142000, 10)
print(result)
