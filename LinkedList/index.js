// Callbacks in javascript;
function fetchdata(callback) {
  setTimeout(function () {
    callback("fetched successfully");
  }, 3000);
}

function procee(data) {
  console.log(data);
}

fetchdata(procee);

