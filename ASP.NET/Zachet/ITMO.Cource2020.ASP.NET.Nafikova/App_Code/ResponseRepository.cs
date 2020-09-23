using System.Collections.Generic;
using System.Linq;

/// <summary>
/// Summary description for ResponseRepository
/// </summary>
public class ResponseRepository
{
    private static ResponseRepository repository = new
        ResponseRepository();

    private readonly SampleContext context = new SampleContext();

    public static ResponseRepository GetRepository()
    {
        return repository;
    }

    public List<StudentResponse> GetAllStudentWithMarks()
    {
        var students = context.StudentResponses.ToList();
        context.StudentSubjects.ToList();

        return students;
    }

    public void AddStudentWithResults(StudentResponse response)
    {
        context.StudentResponses.Add(response);
        context.SaveChanges();
    }

    public List<Subject> GetAllSubjects()
    {
        return context.Subjects.ToList();
    }

    public void InitSubjects()
    {
        var subjects = GetAllSubjects();

        if (!subjects.Any())
        {
            var newSubjects = new List<Subject>
            {
                new Subject
                {
                    Id = 1,
                    Name = "Русский язык"
                },
                new Subject
                {
                    Id = 2,
                    Name = "Математика"
                },
                new Subject
                {
                    Id = 3,
                    Name = "История"
                }
            };

            context.Subjects.AddRange(newSubjects);
            context.SaveChanges();
        }
    }
}