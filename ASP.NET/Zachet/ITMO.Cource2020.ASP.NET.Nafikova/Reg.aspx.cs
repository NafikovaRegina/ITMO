using System;
using System.Collections.Generic;
using System.Web.UI.WebControls;

public partial class Reg : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (IsPostBack)
        {
            Page.Validate();
            if (!Page.IsValid)
                return;

            var student = new StudentResponse{
                FirstName = firstName.Text,
                LastName = lastName.Text, 
                Email = email.Text,
                StudentSubjects = new List<StudentSubject>
                {
                    new StudentSubject
                    {
                        SubjectId = 1,
                        Mark = Convert.ToInt32(subject_1.Text)
                    },
                    new StudentSubject
                    {
                        SubjectId = 2,
                        Mark = Convert.ToInt32(subject_2.Text)
                    },
                    new StudentSubject
                    {
                        SubjectId = 3,
                        Mark = Convert.ToInt32(subject_3.Text)
                    }
                }
            };

            var repository = ResponseRepository.GetRepository();

            try
            {
                repository.AddStudentWithResults(student);
            }
            catch (Exception ex)
            {
                Response.Redirect("Ошибка " + ex.Message);
            }

            Response.Redirect("successfuladdition.html");
        }
    }
}