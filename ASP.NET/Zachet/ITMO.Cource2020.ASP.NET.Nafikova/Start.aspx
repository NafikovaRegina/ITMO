<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Start.aspx.cs" Inherits="Start" MasterPageFile="~/Site.master"%>

<asp:Content ID="MainContent" ContentPlaceHolderID="ContentPlaceHolder1"
             runat="server">
    <div>
        <div class="rek">
            <h1>Портал учета студентов<asp:ScriptManager ID="ScriptManager1" runat="server">
                </asp:ScriptManager>
            </h1>
            <p>Добавьте нового студента на вкладке "Регистрация"</p>
            <p>Отчет по 5 лучшим и худшим студентам можно найти на странице "Отчет"</p>
        </div>
        <div class="info">
            <asp:UpdatePanel ID="UpdatePanel1" runat="server">
                <ContentTemplate>
                    <asp:Timer runat="server" Interval="1000"></asp:Timer>
                    <%
                        DateTime date = DateTime.Now;
                    %>
                    <h3>Дата <%=date.ToShortDateString()%> </h3>
                </ContentTemplate>
            </asp:UpdatePanel>
        </div>
    </div>
</asp:Content>
