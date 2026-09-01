calc <- function() {
  student_names = c('a','b','c','d')
  subject_names = c('s1','s2','s3','s4','s5','s6')
  cie_names = c('cie1','cie2')
  marks = array(c(1:48),dim = c(4,6,2))
  dimnames(marks) <- list(student_names,subject_names,cie_names) 
  print(marks)
  new_marks = marks[,,'cie1'] + marks[,,'cie2']
  new_marks = new_marks/2
  print('avg')
  new_marks
}
calc()