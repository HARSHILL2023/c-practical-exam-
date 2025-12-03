var pic =document.querySelector('#pic');
var btn=document.querySelector('#btn');

btn.addEventListener('click',()=>{
    if(btn.textContent=="show"){
        btn.textContent="hide";
        pic.style.display="block";
    }
    else{
        btn.textContent="show";
        pic.style.display="none";
    }


})