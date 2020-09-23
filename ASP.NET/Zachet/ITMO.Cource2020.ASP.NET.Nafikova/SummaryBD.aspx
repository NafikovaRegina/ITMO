<%@ Page Language="C#" AutoEventWireup="true" CodeFile="SummaryBD.aspx.cs" Inherits="SummaryBD" MasterPageFile="~/Site.master"%>
<asp:Content ID="MainContent" ContentPlaceHolderID="ContentPlaceHolder1"
             runat="server">
    <h2>Список студентов<asp:LinqDataSource ID="LinqDataSource1" runat="server" ContextTypeName="SampleContext" EntityTypeName="" Select="new (FirstName, LastName, Email)" TableName="StudentResponses">
        </asp:LinqDataSource>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="LinqDataSource1">
            <Columns>
                <asp:BoundField DataField="FirstName" HeaderText="Имя" ReadOnly="True" SortExpression="FirstName" />
                <asp:BoundField DataField="LastName" HeaderText="Фамилия" ReadOnly="True" SortExpression="LastName" />
                <asp:BoundField DataField="Email" HeaderText="Email" ReadOnly="True" SortExpression="Email" />
            </Columns>
        </asp:GridView>
    </h2>

</asp:Content>
