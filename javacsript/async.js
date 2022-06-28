 async function hello(){

}
const sing= async()=>{
    return "Potato"

}

sing().then((data)=>{
    console.log("Promised resolved",data);
})

const login= async(username,password)=>{
    if(!username||!password) throw "Missing Credentials"
    if(password=="4271188lri")return "Welcome!"
    throw "Password false"
}

login("noob","4271188lri")
.then(msg=>{
    console.log("logged")
    console.log(msg)

})
.catch(err=>{
    console.log("Error")
    console.log(err)
})