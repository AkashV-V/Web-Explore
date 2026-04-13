function addTask() {
        let task = document.getElementById("task").value;
        if (task === "") return;

        let li = document.createElement("li");

        let span = document.createElement("span");
        span.innerText = task;
        span.onclick = function () {
            span.classList.toggle("done");
        };

        let removeBtn = document.createElement("button");
        removeBtn.innerText = "Remove";
        removeBtn.onclick = function () {
            li.remove();
        };

        li.appendChild(span);
        li.appendChild(removeBtn);

        document.getElementById("list").appendChild(li);
        document.getElementById("task").value = "";
    }