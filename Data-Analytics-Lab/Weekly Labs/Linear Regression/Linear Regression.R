data = read.csv("advert.csv")
x = data[,2]
y = data[,3]
budget = mean(x)
sales = mean(y)
num = sum((x-budget)*(y-sales))
den = sum((x-budget)^2)
b1 = num/den
b0 = sales - b1 * budget 
data$pred = b0 + b1* data$Budget
rss = sum (( data$Sales - data$pred )^2)
rss
tss = sum((data$Sales - sales)^2)
tss
rse = sqrt(rss/(nrow(data)-2))
rse
se = 1 -(rss/tss)
se
plot(data$Budget, data$Sales,col="red")
lines(data$Budget, data$pred)
x1<- 13
x1 <- as.integer(x1)
y <- b0 + b1 * x1
y