//a library for making http requests.
axios.get("https:api.cryptonator.com/api/ticker/btc-usd")
    //already parsed!//already resolved.
    .then(response => {
        console.log(response.data.ticker.price);
    })
    .catch(err => {
        console.log("Error", err);
    })
const fetchCoin = async () => {
    try {
        const res = await axios.get("https://api.cryptonator.com/api/ticker/btc-usd");
        console.log(response.data.ticker.price);
    } catch (e) {
        console.log("Error", e);

    }
}