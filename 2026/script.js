const canvas = document.getElementById('canvas');
const ctx = canvas.getContext('2d');
const colorBtn = document.getElementById('colorBtn');
const musicBtn = document.getElementById('musicBtn');
const audio = document.getElementById('holiAudio');

canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

let particles = [];
let isMusicPlaying = false;

// Toggle Music
musicBtn.addEventListener('click', () => {
    if (isMusicPlaying) {
        audio.pause();
    } else {
        audio.play();
    }
    isMusicPlaying = !isMusicPlaying;
});

class Particle {
    constructor(x, y, color) {
        this.x = x;
        this.y = y;
        this.color = color;
        this.size = Math.random() * 10 + 2;
        this.vx = Math.random() * 10 - 5;
        this.vy = Math.random() * 10 - 5;
        this.alpha = 1;
    }
    update() {
        this.x += this.vx;
        this.y += this.vy;
        this.alpha -= 0.02;
    }
    draw() {
        ctx.save();
        ctx.globalAlpha = this.alpha;
        ctx.fillStyle = this.color;
        ctx.beginPath();
        ctx.arc(this.x, this.y, this.size, 0, Math.PI * 2);
        ctx.fill();
        ctx.restore();
    }
}

function spawnColors(e) {
    const colors = ['#FF1493', '#00FF00', '#FFFF00', '#00BFFF', '#FF4500'];
    const x = e ? e.clientX : Math.random() * canvas.width;
    const y = e ? e.clientY : Math.random() * canvas.height;
    
    for (let i = 0; i < 40; i++) {
        particles.push(new Particle(x, y, colors[Math.floor(Math.random() * colors.length)]));
    }
}

function animate() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    particles.forEach((p, i) => {
        p.update();
        p.draw();
        if (p.alpha <= 0) particles.splice(i, 1);
    });
    requestAnimationFrame(animate);
}

colorBtn.addEventListener('click', () => {
    for(let i=0; i<3; i++) setTimeout(spawnColors, i*200);
});

// Click anywhere for color splash
window.addEventListener('mousedown', spawnColors);

animate();
