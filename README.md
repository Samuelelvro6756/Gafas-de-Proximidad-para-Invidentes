<p align="center">
  <img src="Presentación/banner.png" width="100%" alt="Banner Gafas Inteligentes">
</p>

<h1 align="center">Gafas Inteligentes para Personas con Discapacidad Visual</h1>

<p align="center">
<b>Sistema portátil de asistencia mediante sensores ultrasónicos y alertas multimodales desarrollado con ESP32.</b>
</p>

<p align="center">
Proyecto de innovación social enfocado en mejorar la movilidad y la detección de obstáculos para personas con discapacidad visual mediante tecnología de bajo costo.
</p>

<p align="center">
<img src="https://img.shields.io/badge/ESP32-Microcontroller-E7352C?style=for-the-badge">
<img src="https://img.shields.io/badge/Arduino-C++-00979D?style=for-the-badge&logo=arduino&logoColor=white">
<img src="https://img.shields.io/badge/HC--SR04-Ultrasonic-blue?style=for-the-badge">
<img src="https://img.shields.io/badge/Open_Source-Hardware-success?style=for-the-badge">
<img src="https://img.shields.io/badge/Innovation-Social-orange?style=for-the-badge">
</p>

<br>

# 🏆 Reconocimientos

Este proyecto fue desarrollado como una propuesta de innovación tecnológica y social.

🏅 **Ganador del Foro Educativo Departamental del Quindío 2025**

🥇 Participante y ganador en diferentes ferias de ciencia e innovación.

👩‍🦯 Validado mediante pruebas funcionales con una persona con discapacidad visual.

<br>

# 📑 Índice

- 📖 Descripción
- 🎥 Video demostrativo
- ✨ Características
- ⚙️ Funcionamiento
- 🛠 Hardware
- 💻 Software
- 📊 Diagramas
- 📸 Galería
- 🚀 Instalación
- 📈 Resultados
- 🔮 Mejoras Futuras
- 👨‍💻 Autor

<br>

# 📖 Descripción

Las **Gafas Inteligentes para Personas con Discapacidad Visual** son un dispositivo electrónico portátil diseñado para asistir en la detección de obstáculos mediante sensores ultrasónicos.

El sistema analiza continuamente el entorno utilizando dos sensores HC-SR04 y genera diferentes tipos de alertas según la distancia detectada.

Estas alertas se transmiten mediante:

- 🔊 Sonido (Buzzer)
- 💡 Luz (LED)
- 📳 Vibración (Motor vibrador)

Todo el procesamiento es realizado por un **ESP32**, permitiendo una respuesta rápida y un bajo consumo energético.

<br>

# 🎥 Video demostrativo

<p>
<video width="640" height="360" controls>
  <source src="Presentación/Presentación.mp4" type="video/mp4">
  Tu navegador no soporta la etiqueta de video.
</video>
</p>

<br>

# ✨ Características

- 👓 Diseño portátil.
- 📡 Detección frontal mediante dos sensores ultrasónicos.
- ⚡ Procesamiento en tiempo real.
- 📳 Sistema de vibración.
- 🔊 Alertas sonoras.
- 💡 Alertas visuales.
- 🔋 Alimentación mediante batería recargable.
- 🧠 Procesamiento con ESP32.
- ♿ Enfocado en accesibilidad.

<br>

# ⚙️ Funcionamiento

El sistema ejecuta continuamente el siguiente proceso:

1. Los sensores detectan obstáculos.
2. El ESP32 calcula la distancia de ambos sensores.
3. Se selecciona la menor distancia.
4. Se determina el nivel de alerta.
5. Se activan los actuadores correspondientes.
6. El proceso vuelve a comenzar.

<br>

# 🚨 Niveles de alerta

| Distancia | Estado | Acciones |
|-----------|--------|----------|
| > 100 cm | 🟢 Sin alerta | Todo apagado |
| 30 - 100 cm | 🟡 Alerta Nivel 1 | LED + Buzzer lento |
| < 30 cm | 🔴 Alerta Nivel 2 | LED rápido + Vibración + Buzzer rápido |

<br>

# 🛠 Hardware

| Componente | Cantidad |
|------------|---------:|
| ESP32 | 1 |
| Sensor HC-SR04 | 2 |
| Buzzer | 1 |
| Motor Vibrador | 1 |
| LED | 1 |
| Batería 18650 | 1 |
| Módulo Step-Up 5V | 1 |
| Gafas | 1 |

<br>

# 💻 Software

| Tecnología | Uso |
|------------|-----|
| Arduino IDE | Programación |
| ESP32 | Microcontrolador |
| C++ | Desarrollo |
| HC-SR04 | Sensado |
| PWM | Control del buzzer |

<br>

# 📊 Diagramas

## Funcionamiento General

<p>
<img src="Diagramas/funcionamiento_general.jpeg" width="65%">
</p>

<br>

## Diagrama de Flujo

<p>
<img src="Diagramas/diagrama_flujo.jpeg" width="65%">
</p>

<br>

## Diagrama de Conexiones

<p>
<img src="Diagramas/diagrama_conexiones.jpeg" width="65%">
</p>

<br>

# 📸 Galería

## Desarrollo

<p align="center">

<img src="Imágenes/proceso1.jpeg" width="45%">
<img src="Imágenes/proceso2.jpeg" width="45%">

</p>

<br>

## Prototipo

<p align="center">

<img src="Imágenes/prototipo1.jpeg" width="45%">
<img src="Imágenes/prototipo2.jpeg" width="45%">

</p>

<br>

## Validación

<p align="center">

<img src="Imágenes/prueba.jpg" width="40%">

</p>

<br>

## Presentaciones

<p align="center">

<img src="Imágenes/muestra4.jpeg" width="45%">
<img src="Imágenes/muestra1.jpeg" width="45%">
<img src="Imágenes/muestra2.jpeg" width="45%">
<img src="Imágenes/muestra3.jpeg" width="45%"><br>

_Más muestras en el directorio_
</p>

<br>

# 🚀 Instalación

## Hardware

1. Conectar los sensores ultrasónicos.
2. Conectar el buzzer.
3. Conectar el vibrador.
4. Conectar el LED.
5. Alimentar el sistema mediante batería.

<br>

## Software

1. Instalar Arduino IDE.
2. Instalar soporte para ESP32.
3. Abrir el proyecto.
4. Seleccionar la placa ESP32.
5. Compilar y cargar el programa.

<br>

# 📈 Resultados

| Resultado | Estado |
|-----------|:------:|
| Detección de obstáculos | ✅ |
| Procesamiento en tiempo real | ✅ |
| Alerta sonora | ✅ |
| Alerta visual | ✅ |
| Vibración | ✅ |
| Validación funcional | ✅ |
| Presentación pública | ✅ |
| Premio departamental | 🏆 |

<br>

# 🔮 Mejoras Futuras

- 📷 Integración con cámara IA.
- 🧠 Detección mediante visión artificial.
- 📱 Aplicación móvil.
- 📍 GPS integrado.
- 🗣 Navegación por voz.
- ☁ Sincronización con servicios en la nube.

<br>

# 📄 Licencia

Este proyecto fue desarrollado con fines educativos, de investigación e innovación social.

<br>

# 👨‍💻 Autor

**Samuel Durán Cárdenas**

Desarrollador de Software • Electrónica • Videojuegos • Innovación Tecnológica

<p align="center">
<b>💙 Tecnología al servicio de la inclusión.</b>
⭐ Si este proyecto te pareció interesante, considera apoyar el repositorio con una estrella.
</p>