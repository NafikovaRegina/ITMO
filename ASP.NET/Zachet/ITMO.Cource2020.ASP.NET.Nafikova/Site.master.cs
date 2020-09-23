using System;

public partial class Site : System.Web.UI.MasterPage
{
    protected void Page_Load(object sender, EventArgs e)
    {
        long numVisitors = 0;
        if (Application["Visitors"] != null)
        {
            numVisitors =
                long.Parse(Application["Visitors"].ToString());
        }
    }
}
