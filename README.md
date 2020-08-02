# StalkBot
 
_O StalkBot está sendo realizado por graduandos da Universidade Estadual Paulista e membros da RAS Bauru com o intuito principal de aplicação dos conhecimentos adquiridos na formação e área de visão computacional.
 
O StalkBot é um projeto voltado para cuidadoria e identificação de pessoas, sendo estes seguidos pelo carrinho, e monitorados remotamente pelo usuário e atualizando constantemente sobre os status do paciente._
 
![StalkBot](/home/matheusabr/Downloads/RAS_img_github.jpeg)
 
*Read this in other languages: [English](https://)*
 
 
## Introduction:
 
O projeto foi elaborado com intuito de auxiliar pessoas idosas ou pacientes em hospitais, situações nas quais é necessário monitoramento remoto constante de maneira simples, barata e eficiente.
 
A ideia inicial de hardware era de utilizar um carrinho de quatro rodas omnidirecionais, o que facilitaria a movimentação em todas as direções. Além disso, utilizaríamos de uma rede neural para identificação de obstáculos ou objetos do cotidiano do paciente (cadeiras, mesas, cama, entre outros), evitando que colida nesses obstáculos ou perca a visão do alvo. Ambas as ideias ainda não foram implementadas por dificuldades da equipe em contornar alguns problemas inerentes de sua implementação, como capacidade dos microcontroladores utilizados (processamento/RAM) e alimentação.
 
O hardware foi planejado para duas rodas, ou seja, voltado para movimentação diferencial  e, atualmente, não está sendo montado devido ao distanciamento social.
Estamos estudando acerca da alimentação do Raspberry Pi, que será responsável pela execução majoritária do código (cérebro), cabendo ao Arduino somente atuar como controlador dos motores ou “slave” recebendo dados constantemente do Rasp para ajuste de sua movimentação.
A parte do Software já conta com uma rede neural que identifica e diferencia pessoas, e já a modificamos para selecionar apenas uma pessoa de interesse ou “pessoa alvo”.
 
OBS: O protótipo está sendo elaborado para entender a comunicação serial entre Raspberry Pi e Arduino, que no presente momento está utilizando buzzer nos lugares de motores.
 
## Getting Started:
Deployment of the files in the environment, like this:
 
```
├─ dir
    ├── env
    │   └── (files of the env bin,share...)
    ├── Arduino code/teste_buzzer_vdd
    ├── Person-Detection-and-Tracking-master
    │   ├── Person_det_track.py
    │   └── helpers.py
    ├── 
    │   ├── 
    │   └── 
    ├── 
    ├── 
    │   └── 
    │   └── 
    └── 
```
 
### Prerequisites:
 
What things you need to install the software and how to install them:
* Python3.6 or plus;
 
* numpy (v1.18.4)
```
pip install numpy
```
* OpenCV(cv2)(v4.1.1.26)
```
pip install opencv-python
pip install opencv-contrib-python
```
* Tensorflow (v1.14.0)
```
pip install tensorflow==1.14.0
```
* imutils (v0.5.3)
```
pip install imutils
```
* shutil
```
pip install pytest-shutil
```
* sklearn (v0.21.3)
```
pip install scikit-learn
```
*pyserial (v3.4)
```
pip install pyserial
```
*
## Running:
* **Run**
 
Note:
 
## Explanation:
_explicar o código detalhadamente_
Note:
 
## Vídeo:
 
_[![IMAGE ALT TEXT](http://img.youtube.com/vi/eZYlnhfE9Fo/0.jpg)](http://www.youtube.com/watch?v=eZYlnhfE9Fo "Projeto Carrinho AutoGuiado - primeiros passos")_
 
## Built With:
 
* [Visual Studio Code](https://code.visualstudio.com/) - IDE usada para desenvolver o código principal.
* [TensorFlow](https://www.tensorflow.org/?hl=pt-br) - Framework para elaboração de redes neurais.
* [Arduino](https://www.arduino.cc/en/main/software) - IDE usado para desenvolver o código de controle dos motores.
 
## Authors:
 
* [**Felipe Zechel**](https://github.com/zechelf)
* [**Matheus Augusto**](https://github.com/MatheusMABR)
* [**Carlos Eduardo**](https://github.com/carloskadu) - Management of the team.
 
* Collaborators:
* [**Luanne Barbosa**](https://github.com/Luanne-Barbosa)
* [**Mauro Yoshio**](https://github.com/mayokogitgud)
 
## License:
 
This project was intended specially to develop learning, teamwork and self-improvement
 
This project is free and non-profit. The marketing of it is prohibited.
