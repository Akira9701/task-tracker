class newTask {
    constructor(object) {
        this.name = object.name;
        this.element = object.element;
    }
    removeTask() {
        this.element.addEventListener('click', () => {
            this.element.classList.add('remove');
            setTimeout(() => {
                this.element.remove();
                localStorage.removeItem(this.name)
            }, 2000);

        })
    }
}

function setTasks() {
    const storeKeys = Object.keys(localStorage);
    const wrap = document.querySelector('.track_task-wrap');
    storeKeys.forEach(element => {
        const el = `                
        <div class="track_task" data-taskname="${element}">
            <div class="track_task-mark">
                        <div class="track_task-mark-checked">
                            <svg class="track_task-icon" version="1.1" id="Capa_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                            viewBox="0 0 17.837 17.837" style="enable-background:new 0 0 17.837 17.837;" xml:space="preserve">
                       <g>
                           <path style="" d="M16.145,2.571c-0.272-0.273-0.718-0.273-0.99,0L6.92,10.804l-4.241-4.27
                               c-0.272-0.274-0.715-0.274-0.989,0L0.204,8.019c-0.272,0.271-0.272,0.717,0,0.99l6.217,6.258c0.272,0.271,0.715,0.271,0.99,0
                               L17.63,5.047c0.276-0.273,0.276-0.72,0-0.994L16.145,2.571z"/>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                                               </svg>
                        </div>
            </div>
            <p class="track_task-name">${element}</p>
        </div>`;
        wrap.insertAdjacentHTML('beforeend', el);
        const task = new newTask({
            name: element,
            element: document.querySelector(`[data-taskname="${element}"]`)
        })
        task.removeTask();
    });
}

function tasksManager() {
    const btnAdd = document.querySelector('.track_add-btn');
    const field = document.querySelector('.track_add-wrap input');
    const wrap = document.querySelector('.track_task-wrap');

    btnAdd.addEventListener('click', () => {
        const flValue = field.value;
        const element = `                
        <div class="track_task" data-taskname="${flValue}">
            <div class="track_task-mark">
                        <div class="track_task-mark-checked">
                            <svg class="track_task-icon" version="1.1" id="Capa_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                            viewBox="0 0 17.837 17.837" style="enable-background:new 0 0 17.837 17.837;" xml:space="preserve">
                       <g>
                           <path style="" d="M16.145,2.571c-0.272-0.273-0.718-0.273-0.99,0L6.92,10.804l-4.241-4.27
                               c-0.272-0.274-0.715-0.274-0.989,0L0.204,8.019c-0.272,0.271-0.272,0.717,0,0.99l6.217,6.258c0.272,0.271,0.715,0.271,0.99,0
                               L17.63,5.047c0.276-0.273,0.276-0.72,0-0.994L16.145,2.571z"/>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                       <g>
                       </g>
                                               </svg>
                        </div>
            </div>
            <p class="track_task-name">${flValue}</p>
        </div>`;
        wrap.insertAdjacentHTML('beforeend', element);
        const task = new newTask({
            name: flValue,
            element: document.querySelector(`[data-taskname="${flValue}"]`)
        })
        localStorage.setItem(task.name, JSON.stringify(task));
        task.removeTask();
    })


}


tasksManager();
setTasks();