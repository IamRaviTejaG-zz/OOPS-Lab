#include<bits/stdc++.h>

using namespace std;

int main()
{
  string line;
  int space_count = 0, line_count = 0, sentence_count = 0, len = 0;
  fstream f;
  f.open("Myfile.txt", ios::in);
  if (f.is_open())
    while (getline(f, line))
    {
      ++line_count;
      len += line.length();
      for (int i=0; line[i]; i++)
      {
        if (line[i] == ' ')
          ++space_count;
        else if (line[i] == '.')
          ++sentence_count;
      }
    }
  f.close();
  cout<<"Total no. of characters: "<<(len - space_count)<<endl;
  cout<<"Total no. of words: "<<(space_count + line_count)<<endl;
  cout<<"Total no. of sentences: "<<sentence_count<<endl;
  cout<<"Total no. of lines: "<<line_count<<endl;
  return 0;
}
