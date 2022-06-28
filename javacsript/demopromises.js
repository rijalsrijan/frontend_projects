/* promises is eventual guarentee of value or error
 */

const fakeRequestPromise = (url) => {
    return new Promise((resolve, reject) => {
        const delay = Math.floor(Math.random() * (4500)) + 500;
        setTimeout(() => {
            if (delay > 4000) {
                reject("Connection Timeout :(")
            } else {
                resolve(`Here is your fake data from ${url}`)
            }
        }, delay)
    })
}
/* 
when the function is called
fakeRequestPromise("dat.com")
Promise{<Pending>} */

/*fakeRequestPromise("yellow.com")
.then(()=>{
    console.log("Promise Resolved");
    console.log("It works");
    fakeRequestPromise("yellow.com")
        then.(()=>{
            console.log("Promise Resolved again");
            console.log("It works");
        })
        .catch(()=>{
            console.log("Rejected");
            console.log("oh error");
        })
    
})

.catch(()=>{
    console.log("Promise Rejected");
    console.log("Oh no error");
})*/

fakeRequestPromise("yelp.com/api/coffee/page1")
    .then((data) => {
        console.log("It workded(page 1)");
        console.log(data);
        return fakeRequestPromise("yelp.com/api/coffee/page2")
    })
    .then(() => {
        console.log("It Work (page 2)")
        console.log(data);
        return fakeRequestPromise("yelp.com/api/coffee/page3")
    })
    .then(() => {
        console.log("It Work (page 3)")
        console.log(data);
    })

    .catch((err) => {
        console.log("Request Failied");
        console.log(err);
    }) 