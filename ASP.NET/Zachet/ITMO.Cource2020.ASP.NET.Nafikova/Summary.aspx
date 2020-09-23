<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Summary.aspx.cs" Inherits="Summary" MasterPageFile="~/Site.master"%>
<asp:Content ID="MainContent" ContentPlaceHolderID="ContentPlaceHolder1"
             runat="server">
    <div>
        <h2>Студенты</h2>

        <h3>5 лучших студентов </h3>
        <table>
            <thead>
            <tr>
                <th>ФИО</th>
                <th>Email</th>
                <th>Русский язык</th>
                <th>Математика</th>
                <th>История</th>
                <th>Сумма</th>
            </tr>
            </thead>
            <tbody>
            <%= GetTopBestStudents()%>
            </tbody>
        </table>

        <h3>5 худших студентов: </h3>
        <table>
            <thead>
            <tr>
                <th>ФИО</th>
                <th>Email</th>
                <th>Русский язык</th>
                <th>Математика</th>
                <th>История</th>
                <th>Сумма</th>
            </tr>
            </thead>

            <tbody>
            <%= GetTopBadStudents()%>
            </tbody>
        </table>
    </div>
</asp:Content>