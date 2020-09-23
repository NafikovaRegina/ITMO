using System;
using System.Collections.Generic;

public class StudentResponse
{
    public int StudentResponseId { get; set; }
    public string FirstName { get; set; }
    public string LastName { get; set; }
    public string Email { get; set; }

    public ICollection<StudentSubject> StudentSubjects { get; set; }
}