function validate() {
    let userName = document.querySelector("#userName");
    let email = document.querySelector("#email");
    let number = document.querySelector("#contact");
    let password = document.querySelector("#password");
    let cpassword = document.querySelector("#cpassword");
    let birth = document.querySelector("#birth");
    let nameval=userName.value;
    let emailValue = email.value;
    let numberValue = number.value;
    let passwordValue = password.value;
    let conpasswordValue = cpassword.value;
    let birthval=birth.value;
  let correct_way = /^[a-zA-Z]+$/;
  if(nameval.match(correct_way)){

      return true;
  }
 else if(nameval==null || nameval=="")
  {
      alert("Name can't be blank :)");
      return false;
  }
  else if(nameval.length < 4)
  {
      alert("Write your full name  :)");
      return false;
  }
//  else  {
//    //document.getElementById('error').innerHTML= "number not allowed";
//      alert("Only Alphabate will allowed :)");
//      return false;
//   }
 // validateEmail();

// function validateEmail(){

if (emailValue.length < 5){
    alert("Write your email! :)");
    return false;
}
else if (emailValue.includes("@") && emailValue.includes(".")){
    return false;
} 
else {
    alert("Please write email in proper format! :)");
    return false;
}
// validateNumber();


//function validateNumber(){

if (numberValue.length < 10){
    alert("Write your correct phone number!");
    return false;
}
// validatePassword();


//function validatePassword(){


if (passwordValue.length < 5 && conpasswordValue.length < 5 ){
    alert("Password length should be greater than 5 characters! :)");
    return false;
}
// if (passwordValue != conpasswordValue){
//     return false;  alert("Password mismatch! :)");
  
// }
// validatebirth();

//function validatebirth(){

if(birthval=="" || birthval==null){
    alert('All data must be filled. :)');
    return false;
}
// else
swal("Good job!", "Registration completed sucessfully!", "success");
}

function validate1(){
// let reset=document.querySelector('.reset');
confirm("Do you want to clear all data :)");
document.getElementById("form").reset();

}