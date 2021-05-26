function verify(){
    var no;
    no=Number(document.getElementById("age").value);
    if(no<18)
    {
    alert("Under 18");
    }
    else
    {
    alert("You are Adult");
    }
    }