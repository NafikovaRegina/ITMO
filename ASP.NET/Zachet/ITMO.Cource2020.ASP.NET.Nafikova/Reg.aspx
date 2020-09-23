<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Reg.aspx.cs" Inherits="Reg" MasterPageFile="~/Site.master" UnobtrusiveValidationMode="None"%>
<asp:Content ID="MainContent" ContentPlaceHolderID="ContentPlaceHolder1"
             runat="server">
    <div>
        <h1>Студент</h1>
    </div>
    <div>
        <label>Имя:</label><asp:TextBox ID="firstName"
                                             runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server"
            ControlToValidate="firstName" ErrorMessage="Заполните поле имени" ForeColor="Red">Не оставляйте поле пустым</asp:RequiredFieldValidator>
                
    </div>
    <div>
        <label>Фамилия:</label>
        <asp:TextBox ID="lastName" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server"
            ControlToValidate="lastName" ErrorMessage="Заполните поле фамилии" ForeColor="Red">Не оставляйте поле пустым</asp:RequiredFieldValidator>
    </div>
    <div>
        <label>Email:</label><asp:TextBox ID="email"
                                              runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server"
                                    ControlToValidate="email" ErrorMessage="Заполните поле адреса" ForeColor="Red">Не
            оставляйте поле пустым</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator runat="server" ControlToValidate="email"
                                        ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"
                                        ErrorMessage="E-mail is not in a valid format" Display="Dynamic"
                                        ForeColor="Red">Адрес введен неверно!!!</asp:RegularExpressionValidator>
    </div>

    <div>
        <label>Русский язык:</label><asp:TextBox ID="subject_1"
                                                runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidatorRus" runat="server"
                                    ControlToValidate="subject_1" ErrorMessage="Заполните поле ввода баллов" ForeColor="Red">Не оставляйте поле пустым</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator runat="server" ControlToValidate="subject_1"
                                        ValidationExpression="^[0-9]+$"
                                        ErrorMessage="Points aren't numbers" Display="Dynamic"
                                        ForeColor="Red">Баллы введены неверно!!!</asp:RegularExpressionValidator>
    </div>

    <div>
        <label>Математика:</label><asp:TextBox ID="subject_2"
                                                runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidatorMath" runat="server"
                                    ControlToValidate="subject_2" ErrorMessage="Заполните поле ввода баллов" ForeColor="Red">Не оставляйте поле пустым</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator runat="server" ControlToValidate="subject_2"
                                        ValidationExpression="^[0-9]+$"
                                        ErrorMessage="Points aren't numbers" Display="Dynamic"
                                        ForeColor="Red">Баллы введены неверно!!!</asp:RegularExpressionValidator>
    </div>

    <div>
        <label>История:</label><asp:TextBox ID="subject_3"
                                                runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidatorHis" runat="server"
                                    ControlToValidate="subject_3" ErrorMessage="Заполните поле ввода баллов" ForeColor="Red">Не оставляйте поле пустым</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator runat="server" ControlToValidate="subject_3"
                                        ValidationExpression="^[0-9]+$"
                                        ErrorMessage="Points aren't numbers" Display="Dynamic"
                                        ForeColor="Red">Баллы введены неверно!!!</asp:RegularExpressionValidator>
    </div>



    <div>
        <button type="submit">Добавить студента</button>
    </div>
</asp:Content>
