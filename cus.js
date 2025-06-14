function memberReg(memberiId, menberAge){
    if(memberiId == '1234' && menberAge >= 18){
        return true;
    }
    return false;
}
if (memberReg("123",18)){
    console.log("Registration Successfull");
}else{
    console.log("Reg failed");
}