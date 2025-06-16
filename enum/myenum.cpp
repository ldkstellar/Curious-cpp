enum eScoreType { Assignement1, Assignment2, Assignment3, Midterm, Count };

enum eStudyType {
  Fulltime,
  Parttime,
};

int main(int argc, char const *argv[]) {
  eScoreType type = Midterm;
  eStudyType studyType = Fulltime;
  int num = Assignment3;   // 에러 안남
  if (type == Fulltime) {  // 컴파일상 문제가 안생김
    /* code */
  }

  return 0;
}
