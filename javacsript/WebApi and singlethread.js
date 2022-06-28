/*javascript is single threaded. at any given point in time, that single js thread is running at most one line of js code(does not multitask).One track mind.
 since js takes time,
 if we start to load heavy data what does our js do in that window peroid ? is everything halted ? 
 but there are workaround*/

 console.log("Sending Data ");
 setTimeout(()=>{
    console.log("DAta.....");
 },3000)
 console.log("I am at the end.");
 /* so what happens here, does console.log("DAta") take all time? NO, that lines kinda runs and "I am at the end line runs." After 3 seconds the DAta line runs!

 So why did it worked normally if Js stalls in that line(since js is single threaded?)
 -> the browser, not js, does the work
 -> browser have webapis(methods that we can call from js)
 -> the call stack recognizes these webapis functions and pass them to browser
 -> when the task is finished, its given bck to call stack and then js takesover and execution occurs
 -> so Sending Data,I am at the end, DAta....
 */
