public class StudentSubject
{
    public int StudentResponseId { get; set; }

    public StudentResponse Student { get; set; }

    public int SubjectId { get; set; }

    public Subject Subject { get; set; }

    public int Mark { get; set; }
}