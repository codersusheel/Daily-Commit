function toggleMenu() {
    document.getElementById("navbar").classList.toggle("active");
    document.getElementById("hamburger").classList.toggle("active");
    document.getElementById("overlay").classList.toggle("active");
}

function closeMenu() {
    document.getElementById("navbar").classList.remove("active");
    document.getElementById("hamburger").classList.remove("active");
    document.getElementById("overlay").classList.remove("active");
}