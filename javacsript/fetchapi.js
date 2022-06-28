fetch("https: //api.cryptonator.com/api/ticker/btc-usd")
.then(res=>{
    console.log("Response,waiting to parse",res); 
   return res.json()
})
.then(data=>{
    console.log("data parsed");
    console.log(data.ticker.price);

})
.catch(e=>{
    console.log("Error",e);
})
const fetchBit = async () => {
    try{
             const res = await fetch("https: //api.cryptonator.com/api/ticker/btc-usd");
             const data = await res.json();
             console.log(data.ticker.price);
    }catch(e){
        console.log("something wrong",e);
    }
   
}