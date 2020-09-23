using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public partial class Summary : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }

    public string GetTopBadStudents()
    {
        var students = ResponseRepository.GetRepository()
            .GetAllStudentWithMarks()
            .OrderBy(s => s.StudentSubjects.Sum(ss => ss.Mark))
            .Take(5);

        return GetStudentHtmlRows(students);
    }

    protected string GetTopBestStudents()
    {
        var students = ResponseRepository.GetRepository()
            .GetAllStudentWithMarks()
            .OrderByDescending(s => s.StudentSubjects.Sum(ss => ss.Mark))
            .Take(5);

        return GetStudentHtmlRows(students);
    }

    private string GetStudentHtmlRows(IEnumerable<StudentResponse> students)
    {
        var html = new StringBuilder();

        foreach (var student in students)
        {
            var fio = string.Format("{0} {1}", student.FirstName, student.LastName);

            var rusMark = student.StudentSubjects.Where(ss => ss.SubjectId == 1).Select(s => s.Mark).FirstOrDefault();
            var mathMark = student.StudentSubjects.Where(ss => ss.SubjectId == 2).Select(s => s.Mark).FirstOrDefault();
            var hisMark = student.StudentSubjects.Where(ss => ss.SubjectId == 3).Select(s => s.Mark).FirstOrDefault();
            var result = student.StudentSubjects.Sum(ss => ss.Mark);

            html.Append(String.Format("<tr><td>{0}</td><td>{1}</td><td>{2}</td><td>{3}</td><td>{4}</td><td>{5}</td></tr>",
                fio, student.Email, rusMark, mathMark, hisMark, result));
        }

        return html.ToString();
    }
}