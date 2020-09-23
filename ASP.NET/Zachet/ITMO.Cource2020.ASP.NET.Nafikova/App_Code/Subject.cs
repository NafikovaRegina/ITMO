using System.Collections.Generic;

public class Subject
{
    public int Id { get; set; }

    public string Name { get; set; }

    public ICollection<StudentSubject> StudentSubjects { get; set; }
}