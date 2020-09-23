using System.Data.Entity;

/// <summary>
/// Summary description for SampleContext
/// </summary>
public class SampleContext : DbContext
{
    public SampleContext()
        : base("StudentBD")
    { }
    public DbSet<StudentResponse> StudentResponses { get; set; }

    public DbSet<Subject> Subjects { get; set; }

    public DbSet<StudentSubject> StudentSubjects { get; set; }

    protected override void OnModelCreating(DbModelBuilder modelBuilder)
    {
        base.OnModelCreating(modelBuilder);

        modelBuilder.Entity<StudentSubject>()
            .HasRequired(ss => ss.Subject)
            .WithMany(s => s.StudentSubjects)
            .HasForeignKey(s => s.SubjectId);

        modelBuilder.Entity<StudentSubject>()
            .HasRequired(ss => ss.Student)
            .WithMany(s => s.StudentSubjects)
            .HasForeignKey(s => s.StudentResponseId);

        modelBuilder.Entity<StudentSubject>()
            .HasKey(s => new { s.StudentResponseId, s.SubjectId });
    }
}