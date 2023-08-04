@import url("https://fonts.googleapis.com/css?family=Josefin+Sans:300,300i,400,400i,600,600i,700&display=swap");
@import url("https://fonts.googleapis.com/css?family=Josefin+Sans:300,300i,400,400i,600,600i,700&display=swap");
/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_extend.scss */
.flex-center-start {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-align: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-box-pack: start;
  -ms-flex-pack: start;
  justify-content: start;
}

/* Normal desktop :1200px. */
/* Normal desktop :992px. */
/* Tablet desktop :768px. */
/* small mobile :320px. */
/* Large Mobile :480px. */
/* 1. Theme default css */
/* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
body {
  font-family: 'Josefin Sans', sans-serif;
  font-weight: normal;
  font-style: normal;
}

/* line 11, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.img {
  max-width: 100%;
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
}

/* line 15, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
a,
.button {
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
}

/* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
a:focus,
.button:focus, button:focus {
  text-decoration: none;
  outline: none;
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
a:focus {
  color: #fff;
  text-decoration: none;
}

/* line 28, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
a:focus,
a:hover,
.portfolio-cat a:hover,
.footer -menu li a:hover {
  text-decoration: none;
  color: #000;
}

/* line 35, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
a,
button {
  color: #020c26;
  outline: medium none;
}

/* line 40, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
h1, h2, h3, h4, h5 {
  font-family: 'Josefin Sans', sans-serif;
  color: #000000;
}

/* line 44, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
h1 a,
h2 a,
h3 a,
h4 a,
h5 a,
h6 a {
  color: inherit;
}

/* line 53, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
ul {
  margin: 0px;
  padding: 0px;
}

/* line 57, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
li {
  list-style: none;
}

/* line 60, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
p {
  font-size: 16px;
  font-weight: 300;
  line-height: 30px;
  /* color: #777777; */
  color: maroon;
  margin-bottom: 13px;
  font-family: 'Josefin Sans', sans-serif;
}

/* line 69, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
label {
  color: #7e7e7e;
  cursor: pointer;
  font-size: 14px;
  font-weight: 400;
}

/* line 75, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
*::-moz-selection {
  background: #444;
  color: #fff;
  text-shadow: none;
}

/* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
::-moz-selection {
  background: #444;
  color: #fff;
  text-shadow: none;
}

/* line 85, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
::selection {
  background: #444;
  color: #fff;
  text-shadow: none;
}

/* line 90, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
*::-webkit-input-placeholder {
  color: #cccccc;
  font-size: 14px;
  opacity: 1;
}

/* line 95, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
*:-ms-input-placeholder {
  color: #cccccc;
  font-size: 14px;
  opacity: 1;
}

/* line 100, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
*::-ms-input-placeholder {
  color: #cccccc;
  font-size: 14px;
  opacity: 1;
}

/* line 105, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
*::placeholder {
  color: #cccccc;
  font-size: 14px;
  opacity: 1;
}

/* line 111, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
h3 {
  font-size: 24px;
}

/* line 115, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.mb-65 {
  margin-bottom: 67px;
}

/* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.black-bg {
  background: #020c26 !important;
}

/* line 123, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.white-bg {
  background: #ffffff;
}

/* line 126, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.gray-bg {
  background: #f5f5f5;
}

/* line 131, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.bg-img-1 {
  background-image: url(../img/slider/slider-img-1.jpg);
}

/* line 134, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.bg-img-2 {
  background-image: url(../img/background-img/bg-img-2.jpg);
}

/* line 137, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.cta-bg-1 {
  background-image: url(../img/background-img/bg-img-3.jpg);
}

/* line 142, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.overlay {
  position: relative;
  z-index: 0;
}

/* line 146, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.overlay::before {
  position: absolute;
  content: "";
  background-color: #020c26;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: -1;
  opacity: 0.851;
}

/* line 158, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.overlay2 {
  position: relative;
  z-index: 0;
}

/* line 162, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.overlay2::before {
  position: absolute;
  content: "";
  background-color: #020c26;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: -1;
  opacity: 0.5;
}

/* line 174, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.section-padding {
  padding-top: 120px;
  padding-bottom: 120px;
}

/* line 178, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.pt-120 {
  padding-top: 120px;
}


/* div containing the button style */
/* line 184, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.owl-carousel .owl-nav div {
  background: transparent;
  height: 65px;
  left: 0px;
  line-height: 65px;
  position: absolute;
  text-align: center;
  top: 40%;
  -webkit-transform: translateY(-50%);
  -ms-transform: translateY(-50%);
  transform: translateY(-50%);
  -webkit-transition: all 0.3s ease 0s;
  -o-transition: all 0.3s ease 0s;
  transition: all 0.3s ease 0s;
  width: 65px;
  font-size: 16px;
  borer: 1px solid black;
  color:black;
}

/* line 225, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
/* Hover color for next and prev btns of carousel */
.owl-carousel:hover .owl-nav div:hover {
  color: maroon;
}


/* line 208, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.owl-carousel .owl-nav div.owl-next {
  left: auto;
  right: 2px;
}

.owl-carousel .owl-nav div.owl-prev  {
  left: 2px;
  right: auto;
}

/* line 213, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.owl-carousel .owl-nav div.owl-next i {
  font-size: xx-large;
}

/* line 213, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.owl-carousel .owl-nav div.owl-prev i {
  font-size: xx-large;
} 

.owl-carousel .owl-nav div:hover {
  border: 2px solid white;
}

/* line 222, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
/* i have rendered this obsolete */
.owl-carousel:hover .owl-nav div {
  opacity: 1;
  visibility: visible;
}


/* line 233, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.mb-60 {
  margin-bottom: 60px;
}

/* line 236, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/theme-default.scss */
.mb-70 {
  margin-bottom: 70px;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed_btn {
  color: #000000;
  font-size: 15px;
  font-weight: 600;
  display: inline-block;
  padding: 18px 39px;
  border: 2px solid #78b454;
  text-transform: capitalize;
}

/* line 9, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed_btn:hover {
  background: #78b454;
  color: #fff;
}

/* line 15, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed-btn {
  color: #78b454 !important;
  font-size: 15px;
  font-weight: 600;
  display: inline-block;
  padding: 18px 39px;
  border: 2px solid #78b454;
  text-transform: capitalize;
  cursor: pointer;
  background: #fff;
}

/* line 25, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed-btn:hover {
  background: #78b454;
  color: #fff !important;
}

/* line 32, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed_btn_white {
  color: #fff;
  font-size: 15px;
  font-weight: 600;
  display: inline-block;
  padding: 16px 29px;
  border: 2px solid #fff;
  text-transform: capitalize;
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 32, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
  .boxed_btn_white {
    padding: 13px 13px;
  }
}

/* line 43, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.boxed_btn_white:hover {
  background: #fff;
  color: maroon;
}

/* line 49, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.load_more_btn {
  background: #78b454;
  color: #fff;
  text-align: center;
  padding: 16px 41px;
  display: inline-block;
  border: 2px solid transparent;
  font-size: 15px;
  font-weight: 700;
}

/* line 58, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_btn.scss */
.load_more_btn:hover {
  color: #78b454 !important;
  border: 2px solid #78b454;
  background: #fff;
}

/* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.section_title h3 {
  font-size: 60px;
  font-weight: 700;
  line-height: 60px;
  color: #000000;
  margin-bottom: 18px;
}

@media (max-width: 767px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
  .section_title h3 {
    font-size: 38px;
    line-height: 46px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
  .section_title h3 {
    font-size: 48px;
    line-height: 56px;
  }
}

/* line 17, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.section_title p {
  font-weight: 500;
  color: black;
  margin-bottom: 0;
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 21, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
  .section_title p br {
    display: none;
  }
}

/* line 28, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.section_title.white h3, .section_title.white p {
  color: #fff;
}

/* line 34, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.section-padding {
  padding-top: 150px;
  padding-bottom: 150px;
}

@media (max-width: 767px) {
  /* line 34, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
  .section-padding {
    padding-top: 60px;
    padding-bottom: 60px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 34, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
  .section-padding {
    padding-top: 100px;
    padding-bottom: 100px;
  }
}

/* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.zigzag_bg_1::before {
  background-image: url(../img/zigzag.svg);
  content: "";
  position: absolute;
  left: 0;
  top: -1px;
  width: 100%;
  height: 20px;
  background-size: cover;
  background-repeat: no-repeat;
  z-index: 1;
}

/* line 63, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_section_title.scss */
.zigzag_bg_2::after {
  background-image: url(../img/zigzag.svg);
  content: "";
  position: absolute;
  left: 0;
  bottom: -1px;
  width: 100%;
  height: 20px;
  background-size: cover;
  -webkit-transform: rotate(180deg);
  -moz-transform: rotate(180deg);
  -ms-transform: rotate(180deg);
  transform: rotate(180deg);
  background-repeat: no-repeat;
  z-index: 1;
}

@media (max-width: 767px) {
  /* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
  .mobile_menu {
    position: absolute;
    right: 0px;
    width: 100%;
    z-index: 9;
  }
}

/* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_menu .slicknav_nav {
  background: #fff;
  float: right;
  margin-top: 0;
  padding: 0;
  width: 95%;
  padding: 0;
  border-radius: 0px;
  margin-top: 5px;
  position: absolute;
  left: 0;
  right: 0;
  margin: auto;
  top: 45px;
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
  .slicknav_menu .slicknav_nav {
    padding: 10px;
  }
}

/* line 31, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_menu .slicknav_nav a:hover {
  background: transparent;
  color: #78b454;
}

/* line 35, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_menu .slicknav_nav a.active {
  color: #78b454;
}

@media (max-width: 767px) {
  /* line 38, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
  .slicknav_menu .slicknav_nav a i {
    display: none;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 38, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
  .slicknav_menu .slicknav_nav a i {
    display: none;
  }
}

/* line 47, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_menu .slicknav_nav .slicknav_btn {
  background-color: transparent;
  cursor: pointer;
  margin-bottom: 10px;
  margin-top: -40px;
  position: relative;
  z-index: 99;
  border: 1px solid #ddd;
  top: 3px;
  right: 5px;
}

/* line 58, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_menu .slicknav_nav .slicknav_btn .slicknav_icon {
  margin-right: 6px;
  margin-top: 3px;
  position: relative;
  padding-bottom: 3px;
  top: -11px;
  right: -5px;
}

@media (max-width: 767px) {
  /* line 12, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
  .slicknav_menu {
    margin-right: 12px;
  }
}

/* line 75, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.home-6 .slicknav_menu .slicknav_icon {
  margin-right: 6px;
  margin-top: 3px;
  right: -5px;
  padding-bottom: 3px;
  position: absolute;
  top: 3px;
}

/* line 87, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slick-nav.scss */
.slicknav_nav .slicknav_arrow {
  float: right;
  font-size: 22px;
  position: relative;
  top: -9px;
}

/* line 3, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .mein_menu_list {
  display: -webkit-box;
  display: -moz-box;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -moz-align-items: center;
  -ms-align-items: center;
  align-items: center;
  -webkit-justify-content: space-between;
  -moz-justify-content: space-between;
  -ms-justify-content: space-between;
  justify-content: space-between;
  -ms-flex-pack: space-between;
}

/* small logo size */
/* line 9, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .logo-img-small {
  position: absolute;
  top: 0;
  left: 25px;
  z-index: -1;
}


/* small screen logo size */
.header-area .logo-img-small img {
  width: 110px;
}

/* my own custom  ....
.main homepage central logo big screen */
.header-area .main-header-area .logo-img img {
  width: 200px;
}


/* small screen header size */
@media (max-width: 767px) {
  /* line 18, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area {
    padding: 10px 0;
    height: 100px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 18, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area {
    padding: 10px 0;
    height: 100px;
  }
}

@media (max-width: 767px) {
  /* line 27, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area .logo-img {
    position: absolute;
    display: inline-block;
    text-align: center;
    margin: 3px auto;
    z-index: 999;
    width: 140px;
    left: 0;
    right: 0;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 39, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area .logo-img {
    position: absolute;
    display: inline-block;
    text-align: center;
    margin: 3px auto;
    z-index: 999;
    width: 140px;
    left: 0;
    right: 0;
  }
}



/* line 53, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li {
  display: inline-block;
  position: relative;
}

/* line 56, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li a {
  color: #fff;
  font-size: 16px;
  text-transform: capitalize;
  font-weight: 400;
  display: inline-block;
  padding: 35px 10px 35px 10px;
  font-family: "Josefin Sans", sans-serif;
  position: relative;
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 56, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area .main-menu ul li a {
    padding: 35px 8px 35px 8px;
  }
}

/* line 68, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li a i {
  font-size: 9px;
}

@media (max-width: 767px) {
  /* line 68, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area .main-menu ul li a i {
    display: none !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 68, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area .main-menu ul li a i {
    display: none !important;
  }
}

/* line 77, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li a::before {
  position: absolute;
  content: "";
  background: maroon;
  width: 100%;
  height: 2px;
  bottom: 0;
  left: 0;
  opacity: 0;
  transform: scaleX(0);
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
}

/* line 89, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li a:hover::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 94, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li a.active::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 100, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li .submenu {
  position: absolute;
  left: 0;
  top: 140%;
  background: #fff;
  width: 200px;
  z-index: 2;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.02);
  opacity: 0;
  visibility: hidden;
  -webkit-transition: 0.6s;
  -moz-transition: 0.6s;
  -o-transition: 0.6s;
  transition: 0.6s;
}

/* line 111, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li .submenu li {
  display: block;
}

/* line 113, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li .submenu li a {
  padding: 10px 15px;
  position: inherit;
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
  display: block;
  color: #000;
}

/* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li .submenu li a::before {
  display: none;
}

/* line 123, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li .submenu li:hover a {
  /* color: #78b454; */
  color:maroon;
}

/* line 128, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li:hover > .submenu {
  opacity: 1;
  visibility: visible;
  top: 100%;
}

/* line 133, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .main-menu ul li:hover > a::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 140, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area .slicknav_icon-bar {
  background: #fff !important;
}

/* line 143, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky {
  box-shadow: 0px 3px 16px 0px rgba(0, 0, 0, 0.1);
  position: fixed;
  width: 100%;
  top: -70px;
  left: 0;
  right: 0;
  z-index: 9999;
  transform: translateY(70px);
  transition: transform 500ms ease, background 500ms ease;
  -webkit-transition: transform 500ms ease, background 500ms ease;
  box-shadow: 0px 3px 16px 0px rgba(0, 0, 0, 0.1);
  background: #fff;
}

/* line 156, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
/* mobile screen menu btn */
.header-area .main-header-area.sticky .slicknav_icon-bar {
  background: #000 !important;
}

/* line 159, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .boxed_btn_white {
  color: #000;
  font-size: 15px;
  font-weight: 600;
  display: inline-block;
  padding: 16px 29px;
  border: 2px solid #000;
  text-transform: capitalize;
}

/* line 167, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .boxed_btn_white:hover {
  background: maroon;
  color: #fff;
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 159, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area.sticky .boxed_btn_white {
    padding: 13px 13px;
  }
}

/* line 176, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .logo-img {
  display: inline-block;
}

/* line 178, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
/* sticky header logo */
.header-area .main-header-area.sticky .logo-img img {
  width: 130px;
}

/* line 184, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li {
  display: inline-block;
  position: relative;
}

/* line 187, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li a {
  color: #000;
  font-size: 16px;
  text-transform: capitalize;
  font-weight: 400;
  display: inline-block;
  padding: 35px 10px 35px 10px;
  font-family: "Josefin Sans", sans-serif;
  position: relative;
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 187, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area.sticky .main-menu ul li a {
    padding: 35px 8px 35px 8px;
  }
}

/* line 199, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li a i {
  font-size: 9px;
}

@media (max-width: 767px) {
  /* line 199, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area.sticky .main-menu ul li a i {
    display: none !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 199, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
  .header-area .main-header-area.sticky .main-menu ul li a i {
    display: none !important;
  }
}

/* line 208, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li a::before {
  position: absolute;
  content: "";
  background: maroon;
  width: 100%;
  height: 2px;
  bottom: 0;
  left: 0;
  opacity: 0;
  transform: scaleX(0);
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
}

/* line 220, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li a:hover::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 225, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li a.active::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 231, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li .submenu {
  position: absolute;
  left: 0;
  top: 140%;
  background: #fff;
  width: 200px;
  z-index: 2;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.02);
  opacity: 0;
  visibility: hidden;
  -webkit-transition: 0.6s;
  -moz-transition: 0.6s;
  -o-transition: 0.6s;
  transition: 0.6s;
}

/* line 242, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li .submenu li {
  display: block;
}

/* line 244, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li .submenu li a {
  padding: 10px 15px;
  position: inherit;
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
  display: block;
  color: #000;
}

/* line 250, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li .submenu li a::before {
  display: none;
}

/* line 254, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li .submenu li:hover a {
  color: maroon;
}

/* line 259, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li:hover > .submenu {
  opacity: 1;
  visibility: visible;
  top: 100%;
}

/* line 264, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area .main-header-area.sticky .main-menu ul li:hover > a::before {
  opacity: 1;
  transform: scaleX(1);
}

/* line 274, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.logo-img {
  display: inline-block;
}

/* line 277, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_header.scss */
.header-area {
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  z-index: 99;
}

/* .slideshow{
  position: relative;
} */

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area {
  position: relative;
}


/* line 3, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area .single_slider {
  background-size: cover;
  background-position: center;
  height: 1080px;
  display: table;
  width: 100%;
  background-size: cover;
  background-position: bottom;
}

@media (max-width: 767px) {
  /* line 3, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider {
    height: 580px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 3, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider {
    height: 680px;
  }
}

/* line 17, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area .single_slider .single_slider-iner {
  display: table-cell;
  vertical-align: middle;
  text-align: center;
}

/* line 22, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area .single_slider .slider_contant {
  background: #fff;
  display: inline-block;
  padding: 80px 127px 70px 127px;
  border-radius: 10px;
}

@media (max-width: 767px) {
  /* line 22, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider .slider_contant {
    padding: 30px 20px;
    margin: 0 20px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 22, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider .slider_contant {
    padding: 40px 30px;
    margin: 0 20px;
  }
}

@media (max-width: 767px) {
  /* line 35, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider .slider_contant br {
    display: none;
  }
}

/* line 40, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area .single_slider .slider_contant h3 {
  font-size: 60px;
  font-weight: 700;
  line-height: 66px;
  margin-bottom: 26px;
}

@media (max-width: 767px) {
  /* line 40, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
  .slider_area .single_slider .slider_contant h3 {
    font-size: 30px;
    line-height: 36px;
  }
}

/* line 51, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_slider.scss */
.slider_area .single_slider .slider_contant p {
  font-size: 16px;
  font-weight: 300;
  margin-bottom: 0;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_banner.scss */
.slider_img_1 {
  background-image: url(../img/banner/banner001.jpg);
}

/* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_banner.scss */
.banner-3 {
  background-image: url(../img/banner/banner-3.png);
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area {
  padding-top: 150px;
  padding-bottom: 90px;
}

@media (max-width: 767px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
  .service_area {
    padding-top: 30px;
    padding-bottom: 0px;
  }
}

/* line 8, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service {
  border: 2px solid #eee;
  padding: 50px 42px 55px 42px;
  margin-bottom: 60px;
  border-radius: 10px;
  text-align: center;
  -webkit-transition: 0.3s;
  -moz-transition: 0.3s;
  -o-transition: 0.3s;
  transition: 0.3s;
}

@media (max-width: 767px) {
  /* line 8, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
  .service_area .single_service {
    margin-bottom: 30px;
  }
}

/* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service .service_icon i {
  /* color: #78b454; */
  color:maroon;
  font-size: 50px;
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service h4 {
  font-size: 24px;
  font-weight: 600;
  margin-top: 30px;
  margin-bottom: 20px;
}

/* line 30, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service p {
  color: #888888;
  font-weight: 300;
  margin-bottom: 0;
  line-height: 28px;
}

/* line 36, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service:hover {
  /* background: #78b454; */
  background: maroon;
  border: 2px solid transparent;
}

/* line 37, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_service.scss */
.service_area .single_service:hover h4, .service_area .single_service:hover p, .service_area .single_service:hover i {
  color: #fff;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_bg {
  background-image: url(../img/banner/banner-2.png);
}

/* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area {
  height: 750px;
  background-size: cover;
  background-position: center;
  display: table;
  position: relative;
  width: 100%;
}

@media (max-width: 767px) {
  /* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
  .video_area {
    height: 400px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
  .video_area {
    height: 500px;
  }
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
  .video_area {
    height: 500px;
  }
}

/* line 20, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_area_inner {
  display: table-cell;
  vertical-align: bottom;
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .info_inner {
  top: 6px;
  position: relative;
  margin-right: 25px;
}

/* line 29, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text {
  text-align: right;
  margin-bottom: 150px;
  text-align: right;
}

@media (max-width: 767px) {
  /* line 29, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
  .video_area .video_text {
    margin-bottom: 50px;
  }
}

/* line 35, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text .info {
  display: -webkit-box;
  display: -moz-box;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -moz-align-items: center;
  -ms-align-items: center;
  align-items: center;
  -webkit-justify-content: flex-end;
  -moz-justify-content: flex-end;
  -ms-justify-content: flex-end;
  justify-content: flex-end;
  -ms-flex-pack: flex-end;
}

/* line 42, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text h4 {
  color: #fff;
  font-size: 24px;
  font-weight: 600;
  margin-bottom: 0;
}

/* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text p {
  font-size: 16px;
  color: #ffffff;
}

/* line 53, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text .icon_video a {
  width: 80px;
  height: 80px;
  color: #fff;
  font-size: 30px;
  line-height: 80px;
  border-radius: 50%;
  background: maroon;
  text-align: center;
  display: inline-block;
}

/* line 63, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_video.scss */
.video_area .video_text .icon_video a i {
  top: 6px;
  position: relative;
  left: 3px;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area {
  padding-top: 150px;
  padding-bottom: 90px;
}

@media (max-width: 767px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
  .order_area {
    padding-top: 60px;
    padding-bottom: 0px;
  }
}

/* line 8, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order {
  margin-bottom: 60px;
}

/* line 10, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_thumb {
  position: relative;
}

/* line 12, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_thumb img {
  width: 100%;
}

/* line 15, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_thumb .order_prise {
  position: absolute;
  right: 10px;
  bottom: 10px;
  background: #fff;
  color: #78b454;
  padding: 17px 21px 13px 24px;
  border-radius: 5px;
  font-weight: 600;
  font-size: 18px;
  margin-bottom: 0;
  line-height: 18px;
}

/* line 27, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_thumb .order_prise span {
  position: relative;
}

/* line 29, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_thumb .order_prise span::before {
  position: absolute;
  content: "$";
  left: -5px;
  top: -1px;
  color: #78b454;
  font-size: 10px;
}

/* line 42, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_info h3 a {
  font-size: 24px;
  color: #000;
  font-family: "Josefin Sans", sans-serif;
  font-weight: 600;
  display: block;
  margin-top: 38px;
  margin-bottom: 16px;
}

/* line 52, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_order.scss */
.order_area .single_order .order_info p {
  font-size: 16px;
  line-height: 28px;
  color: #777777;
  margin-bottom: 0;
  margin-bottom: 30px;
}

/*=================== contact banner start ====================*/
/* line 3, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.dropdown .dropdown-menu {
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}

/* line 10, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info {
  margin-bottom: 25px;
}

/* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info__icon {
  margin-right: 20px;
}

/* line 16, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info__icon i, .contact-info__icon span {
  color: #8f9195;
  font-size: 27px;
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info .media-body h3 {
  font-size: 16px;
  margin-bottom: 0;
  font-size: 16px;
  color: #2a2a2a;
}

/* line 30, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info .media-body h3 a:hover {
  color: #ff5e13;
}

/* line 36, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-info .media-body p {
  color: #8a8a8a;
}

/*=================== contact banner end ====================*/
/*=================== contact form start ====================*/
/* line 45, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-title {
  font-size: 27px;
  font-weight: 600;
  margin-bottom: 20px;
}

/* line 53, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact label {
  font-size: 14px;
}

/* line 57, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact .form-group {
  margin-bottom: 30px;
}

/* line 61, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact .form-control {
  border: 1px solid #e5e6e9;
  border-radius: 0px;
  height: 48px;
  padding-left: 18px;
  font-size: 13px;
  background: transparent;
}

/* line 69, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact .form-control:focus {
  outline: 0;
  box-shadow: none;
}

/* line 74, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact .form-control::placeholder {
  font-weight: 300;
  color: #999999;
}

/* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.form-contact textarea {
  border-radius: 0px;
  height: 100% !important;
}

/*=================== contact form end ====================*/
/* Contact Success and error Area css
============================================================================================ */
/* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.modal-message .modal-dialog {
  position: absolute;
  top: 36%;
  left: 50%;
  transform: translateX(-50%) translateY(-50%) !important;
  margin: 0px;
  max-width: 500px;
  width: 100%;
}

/* line 106, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.modal-message .modal-dialog .modal-content .modal-header {
  text-align: center;
  display: block;
  border-bottom: none;
  padding-top: 50px;
  padding-bottom: 50px;
}

/* line 112, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.modal-message .modal-dialog .modal-content .modal-header .close {
  position: absolute;
  right: -15px;
  top: -15px;
  padding: 0px;
  color: #fff;
  opacity: 1;
  cursor: pointer;
}

/* line 121, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.modal-message .modal-dialog .modal-content .modal-header h2 {
  display: block;
  text-align: center;
  padding-bottom: 10px;
}

/* line 126, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.modal-message .modal-dialog .modal-content .modal-header p {
  display: block;
}

/* line 133, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-section {
  padding: 130px 0 100px;
}

@media (max-width: 991px) {
  /* line 133, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
  .contact-section {
    padding: 70px 0 40px;
  }
}

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  /* line 133, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
  .contact-section {
    padding: 80px 0 50px;
  }
}

/* line 141, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-section .btn_2 {
  background-color: #191d34;
  padding: 18px 60px;
  border-radius: 50px;
  margin-top: 0;
}

/* line 146, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_contact.scss */
.contact-section .btn_2:hover {
  background-color: #ff5e13;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area {
  padding-top: 150px;
  padding-bottom: 210px;
  background-size: cover;
  background-position: center;
}

@media (max-width: 767px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
  .testmonial_area {
    padding-top: 60px;
    padding-bottom: 160px;
  }
}

/* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial {
  background: #fff;
  padding: 50px 50px 46px 40px;
  border-radius: 10px;
  background: #fff;
}

@media (max-width: 767px) {
  /* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
  .testmonial_area .single_testmonial {
    display: block !important;
  }
}

/* line 20, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial .testmonial_thumb {
  margin-right: 25px;
}

@media (max-width: 767px) {
  /* line 20, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
  .testmonial_area .single_testmonial .testmonial_thumb {
    margin-bottom: 30px;
  }
}

/* line 26, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial img {
  width: auto;
}

/* line 30, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial .testmonial_author h3 {
  font-size: 18px;
  color: #000000;
  font-weight: 600;
  margin-bottom: 5px;
}

/* line 36, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial .testmonial_author span {
  font-size: 14px;
  color: #777777;
  display: block;
  font-weight: 300;
  margin-bottom: 18px;
}

/* line 43, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .single_testmonial .testmonial_author p {
  font-size: 16px;
  line-height: 28px;
  color: #777777;
  margin-bottom: 0;
}

/* line 54, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .testmonial_active .owl-dots {
  position: absolute;
  left: 50%;
  transform: translateX(-50%);
  bottom: -72px;
}

/* line 59, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .testmonial_active .owl-dots .owl-dot {
  width: 20px;
  height: 4px;
  background: #ddd;
  border-radius: 5px;
  margin: 0 5px;
  display: inline-block;
}

/* line 66, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.testmonial_area .testmonial_active .owl-dots .owl-dot.active {
  background: #78b454;
}

/* line 76, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.brand_area {
  padding-top: 150px;
  padding-bottom: 90px;
}

/* line 79, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_testmonial.scss */
.brand_area .single_brand {
  text-align: center;
  margin-bottom: 60px;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer-bg {
  /* background-image: url(../img/banner/footer-bg.png); */
  background-color: maroon;
}

/* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area {
  padding-top: 150px;
  padding-bottom: 150px;
  background-repeat: no-repeat;
  background-size: cover;
  background-position: center;
  position: relative;
}

/* line 11, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area::before {
  
  content: "";
  position: absolute;
}

@media (max-width: 767px) {
  /* line 17, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
  .footer_area .footer_widget {
    margin-bottom: 30px;
  }
}

/* line 21, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget h3 {
  font-size: 18px;
  font-weight: 600;
  color: #fff;
  margin-bottom: 40px;
}

@media (max-width: 767px) {
  /* line 21, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
  .footer_area .footer_widget h3 {
    margin-bottom: 20px;
  }
}

/* line 32, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget ul li a {
  color: #ffffff;
  font-size: 16px;
  font-weight: 300;
  line-height: 36px;
}

/* line 40, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget .offer_text {
  color: #fff;
  font-size: 16px;
  margin-bottom: 26px;
}

/* line 45, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget form {
  position: relative;
}

/* line 47, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget form input {
  width: 100%;
  border: none;
  height: 50px;
  padding-left: 20px;
  background-color: rgba(255, 255, 255, 0.2);
  color: #fff;
}

/* line 54, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget form input::placeholder {
  font-size: 14px;
  color: #ffffff;
}

/* line 60, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget form button {
  position: absolute;
  right: 0;
  top: 0;
  background: #fff;
  color: #78b454;
  width: 50px;
  border: 0;
  cursor: pointer;
  margin: 0;
  padding: 0;
  font-size: 14px;
  height: 100%;
}

/* line 73, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer_widget form button i {
  position: relative;
  top: 2px;
}

/* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom {
  padding-top: 75px;
}

/* line 83, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .copyright .footer-text {
  font-size: 16px;
  color: #fefffe;
  font-weight: 300;
  margin-bottom: 0;
}

/* line 88, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .copyright .footer-text a {
  color: #fafffe;
}

/* line 90, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .copyright .footer-text a:hover {
  color: #fff;
}

/* line 96, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .social_links {
  text-align: right;
}

@media (max-width: 767px) {
  /* line 96, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
  .footer_area .footer-bottom .social_links {
    text-align: left;
    margin-top: 30px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 96, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
  .footer_area .footer-bottom .social_links {
    text-align: left;
    margin-top: 30px;
  }
}

/* line 107, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .social_links ul li {
  display: inline-block;
  margin-left: 0;
}

/* line 110, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .social_links ul li a {
  background-color: rgba(255, 255, 255, 0.149);
  color: #fff;
  display: inline-block;
  width: 40px;
  height: 40px;
  line-height: 40px;
  color: #ffffff;
  font-size: 14px;
  text-align: center;
}

/* line 121, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_footer.scss */
.footer_area .footer-bottom .social_links ul li a:hover {
  background-color: #78b454;
  color: #fff;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_bg_1 {
  background-image: url(../img/banner/common.png);
}

/* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_area {
  height: 500px;
  display: table;
  width: 100%;
  background-size: cover;
  background-position: center center;
  background-repeat: no-repeat;
  position: relative;
}

@media (max-width: 767px) {
  /* line 4, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
  .breadcam_area {
    height: 400px;
  }
}

/* line 15, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_area .breadcam_inner {
  display: table-cell;
  vertical-align: middle;
  text-align: center;
}

/* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_area .breadcam_inner .breadcam_text {
  margin-top: 99px;
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
  .breadcam_area .breadcam_inner .breadcam_text {
    margin-top: 0;
  }
}

@media (max-width: 767px) {
  /* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
  .breadcam_area .breadcam_inner .breadcam_text {
    margin-top: 0;
    padding: 0 20px;
  }
}

/* line 28, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_area .breadcam_inner .breadcam_text h3 {
  font-size: 60px;
  font-weight: 700;
  color: #ffffff;
  margin-bottom: 14px;
}

@media (max-width: 767px) {
  /* line 28, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
  .breadcam_area .breadcam_inner .breadcam_text h3 {
    font-size: 30px;
    margin-bottom: 8px;
  }
}

/* line 38, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
.breadcam_area .breadcam_inner .breadcam_text p {
  font-size: 16px;
  color: #fff;
  line-height: 30px;
  margin-bottom: 0;
}

@media (max-width: 767px) {
  /* line 43, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_breadcam.scss */
  .breadcam_area .breadcam_inner .breadcam_text p br {
    display: none;
  }
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_area {
  padding-top: 160px;
  padding-bottom: 150px;
}

@media (max-width: 767px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
  .gallery_area {
    padding-top: 30px;
    padding-bottom: 30px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
  .gallery_area {
    padding-top: 100px;
    padding-bottom: 100px;
  }
}

/* line 12, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_area .single_gallery {
  background-size: cover;
  background-position: center;
  border-radius: 10px;
  position: relative;
}

/* line 17, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_area .single_gallery img {
  width: 100%;
}

/* line 20, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_area .single_gallery a {
  position: absolute;
  width: 100%;
  height: 100%;
  top: 0le;
  top: 0;
  left: 0;
}

/* line 29, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_area .load_more_button {
  margin-top: 50px;
}

/* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_1 {
  background-image: url(../img/gallery/01.png);
}

/* line 36, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_2 {
  background-image: url(../img/gallery/2.png);
}

/* line 39, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_3 {
  background-image: url(../img/gallery/3.png);
}

/* line 42, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_4 {
  background-image: url(../img/gallery/4.png);
}

/* line 45, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_5 {
  background-image: url(../img/gallery/5.png);
}

/* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_6 {
  background-image: url(../img/gallery/6.png);
}

/* line 51, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.gallery_bg_7 {
  background-image: url(../img/gallery/7.png);
}

/* line 55, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.long_height {
  height: 440px;
}

/* line 58, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.mid_height {
  height: 410px;
}

/* line 62, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.large_height {
  height: 659px;
}

/* line 66, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.mini_height {
  height: 330px;
}

/* line 69, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_gallery.scss */
.grid-item {
  margin-bottom: 30px !important;
}

/* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area {
  padding-top: 150px;
  padding-bottom: 150px;
}

@media (max-width: 767px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area {
    padding-top: 30px;
    padding-bottom: 30px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 1, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area {
    padding-top: 100px;
    padding-bottom: 100px;
  }
}

/* line 13, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_thumb img {
  width: 100%;
}

@media (max-width: 767px) {
  /* line 16, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_thumb.thumb_n1 {
    margin-top: 30px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 16, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_thumb.thumb_n1 {
    margin-top: 30px;
  }
}

@media (max-width: 767px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_thumb.thumb_n2 {
    margin-bottom: 30px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_thumb.thumb_n2 {
    margin-bottom: 30px;
  }
}

/* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_text {
  padding-right: 30px;
}

@media (max-width: 767px) {
  /* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text {
    padding-right: 0;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text {
    padding-right: 0;
  }
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text {
    padding-right: 0;
  }
}

/* line 44, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_text h3 {
  font-size: 60px;
  color: #000000;
  line-height: 66px;
  font-weight: 700;
  margin-bottom: 37px;
}

@media (max-width: 767px) {
  /* line 44, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text h3 {
    font-size: 30px;
    line-height: 36px;
    margin-bottom: 20px;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  /* line 44, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text h3 {
    font-size: 50px;
    line-height: 56px;
    margin-bottom: 20px;
  }
}

@media (min-width: 992px) and (max-width: 1200px) {
  /* line 44, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text h3 {
    font-size: 50px;
    line-height: 56px;
    margin-bottom: 20px;
  }
}

@media (max-width: 767px) {
  /* line 65, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text h3 br {
    display: none;
  }
}

/* line 71, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_text p {
  font-size: 16px;
  line-height: 28px;
  color: #777777;
  margin-bottom: 0;
}

/* line 77, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_text .about_text1 {
  margin-bottom: 26px;
}

/* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
.single_about_area .single_about_text .about_text2 {
  margin-bottom: 73px;
}

@media (max-width: 767px) {
  /* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_about.scss */
  .single_about_area .single_about_text .about_text2 {
    margin-bottom: 25px;
  }
}

/* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion button {
  font-size: 16px;
  font-size: 24px;
  font-family: "Josefin Sans", sans-serif;
  font-weight: 400;
  color: #ff5e13;
}

@media (max-width: 767px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
  #accordion button {
    font-size: 14px;
  }
}

/* line 12, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .card {
  margin-bottom: 15px;
  border-radius: 0;
  border: 0 !important;
}

/* line 16, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .card .card-header {
  background-color: transparent;
  padding: 4px 14px;
  border: 0 !important;
}

@media (max-width: 767px) {
  /* line 16, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
  #accordion .card .card-header {
    padding: 4px 0;
  }
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .card .card-body {
  font-size: 16px;
  line-height: 28px;
  color: #5c5c5c;
  padding: 0px 30px 32px;
  font-family: "Josefin Sans", sans-serif;
  line-height: 28px;
}

/* line 33, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .card .collapse.show {
  background: #fff;
  border-bottom: 1px solid transparent;
}

/* line 39, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 {
  position: relative;
  z-index: 1;
}

/* line 42, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 button.btn.btn-link {
  color: #ff5e13;
}

/* line 43, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 button.btn.btn-link:after {
  position: absolute;
  content: "\e646";
  top: 50%;
  right: 0px;
  height: auto;
  font-family: 'themify';
  color: #ff5e13;
  font-size: 18px;
  -webkit-transform: translateY(-50%);
  -ms-transform: translateY(-50%);
  transform: translateY(-50%);
}

/* line 56, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 button.btn.btn-link:focus {
  outline: none;
  text-decoration: none;
}

@media (max-width: 767px) {
  /* line 42, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
  #accordion h5 button.btn.btn-link {
    padding-left: 0;
  }
}

/* line 65, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 button.btn.btn-link.collapsed {
  color: #020c26;
}

/* line 66, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion h5 button.btn.btn-link.collapsed:after {
  content: "\e61a";
  color: #020c26;
  font-size: 18px;
}

@media (max-width: 767px) {
  /* line 65, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
  #accordion h5 button.btn.btn-link.collapsed {
    padding-left: 0;
  }
}

/* line 79, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .btn-link:hover {
  color: #182028;
  text-decoration: none;
}

/* line 83, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
#accordion .btn {
  text-align: left !important;
}

/* line 87, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
.faq-area {
  padding-top: 100px;
  padding-bottom: 90px;
}

@media (max-width: 767px) {
  /* line 87, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_accordion.scss */
  .faq-area {
    padding-top: 60px;
    padding-bottom: 30px;
  }
}

/* line 75, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.sample-text-area {
  background: #fff;
  padding: 100px 0 70px 0;
}

/* line 80, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.text-heading {
  margin-bottom: 30px;
  font-size: 24px;
}

/* line 85, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
b,
sup,
sub,
u,
del {
  color: #ff5e13;
}

/* line 93, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h1 {
  font-size: 36px;
}

/* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h2 {
  font-size: 30px;
}

/* line 101, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h3 {
  font-size: 24px;
}

/* line 105, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h4 {
  font-size: 18px;
}

/* line 109, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h5 {
  font-size: 16px;
}

/* line 113, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h6 {
  font-size: 14px;
}

/* line 117, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
h1,
h2,
h3,
h4,
h5,
h6 {
  line-height: 1.2em;
}

/* line 127, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.typography h1,
.typography h2,
.typography h3,
.typography h4,
.typography h5,
.typography h6 {
  color: #828bb2;
}

/* line 137, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.button-area {
  background: #fff;
}

/* line 138, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.button-area .border-top-generic {
  padding: 70px 15px;
  border-top: 1px dotted #eee;
}

/* line 146, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.button-group-area .genric-btn {
  margin-right: 10px;
  margin-top: 10px;
}

/* line 149, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.button-group-area .genric-btn:last-child {
  margin-right: 0;
}

/* line 155, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn {
  display: inline-block;
  outline: none;
  line-height: 40px;
  padding: 0 30px;
  font-size: .8em;
  text-align: center;
  text-decoration: none;
  font-weight: 500;
  cursor: pointer;
  -webkit-transition: all 0.3s ease 0s;
  -moz-transition: all 0.3s ease 0s;
  -o-transition: all 0.3s ease 0s;
  transition: all 0.3s ease 0s;
}

/* line 166, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn:focus {
  outline: none;
}

/* line 169, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.e-large {
  padding: 0 40px;
  line-height: 50px;
}

/* line 173, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.large {
  line-height: 45px;
}

/* line 176, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.medium {
  line-height: 30px;
}

/* line 179, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.small {
  line-height: 25px;
}

/* line 182, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.radius {
  border-radius: 3px;
}

/* line 185, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.circle {
  border-radius: 20px;
}

/* line 188, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.arrow {
  display: -webkit-inline-box;
  display: -ms-inline-flexbox;
  display: inline-flex;
  -webkit-box-align: center;
  -ms-flex-align: center;
  align-items: center;
}

/* line 195, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.arrow span {
  margin-left: 10px;
}

/* line 199, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.default {
  color: #415094;
  background: #f9f9ff;
  border: 1px solid transparent;
}

/* line 203, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.default:hover {
  border: 1px solid #f9f9ff;
  background: #fff;
}

/* line 208, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.default-border {
  border: 1px solid #f9f9ff;
  background: #fff;
}

/* line 211, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.default-border:hover {
  color: #415094;
  background: #f9f9ff;
  border: 1px solid transparent;
}

/* line 217, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.primary {
  color: #fff;
  background: #ff5e13;
  border: 1px solid transparent;
}

/* line 221, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.primary:hover {
  color: #ff5e13;
  border: 1px solid #ff5e13;
  background: #fff;
}

/* line 227, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.primary-border {
  color: #ff5e13;
  border: 1px solid #ff5e13;
  background: #fff;
}

/* line 231, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.primary-border:hover {
  color: #fff;
  background: #ff5e13;
  border: 1px solid transparent;
}

/* line 237, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.success {
  color: #fff;
  background: #4cd3e3;
  border: 1px solid transparent;
}

/* line 241, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.success:hover {
  color: #4cd3e3;
  border: 1px solid #4cd3e3;
  background: #fff;
}

/* line 247, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.success-border {
  color: #4cd3e3;
  border: 1px solid #4cd3e3;
  background: #fff;
}

/* line 251, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.success-border:hover {
  color: #fff;
  background: #4cd3e3;
  border: 1px solid transparent;
}

/* line 257, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.info {
  color: #fff;
  background: #38a4ff;
  border: 1px solid transparent;
}

/* line 261, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.info:hover {
  color: #38a4ff;
  border: 1px solid #38a4ff;
  background: #fff;
}

/* line 267, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.info-border {
  color: #38a4ff;
  border: 1px solid #38a4ff;
  background: #fff;
}

/* line 271, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.info-border:hover {
  color: #fff;
  background: #38a4ff;
  border: 1px solid transparent;
}

/* line 277, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.warning {
  color: #fff;
  background: #f4e700;
  border: 1px solid transparent;
}

/* line 281, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.warning:hover {
  color: #f4e700;
  border: 1px solid #f4e700;
  background: #fff;
}

/* line 287, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.warning-border {
  color: #f4e700;
  border: 1px solid #f4e700;
  background: #fff;
}

/* line 291, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.warning-border:hover {
  color: #fff;
  background: #f4e700;
  border: 1px solid transparent;
}

/* line 297, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.danger {
  color: #fff;
  background: #f44a40;
  border: 1px solid transparent;
}

/* line 301, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.danger:hover {
  color: #f44a40;
  border: 1px solid #f44a40;
  background: #fff;
}

/* line 307, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.danger-border {
  color: #f44a40;
  border: 1px solid #f44a40;
  background: #fff;
}

/* line 311, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.danger-border:hover {
  color: #fff;
  background: #f44a40;
  border: 1px solid transparent;
}

/* line 317, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.link {
  color: #415094;
  background: #f9f9ff;
  text-decoration: underline;
  border: 1px solid transparent;
}

/* line 322, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.link:hover {
  color: #415094;
  border: 1px solid #f9f9ff;
  background: #fff;
}

/* line 328, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.link-border {
  color: #415094;
  border: 1px solid #f9f9ff;
  background: #fff;
  text-decoration: underline;
}

/* line 333, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.link-border:hover {
  color: #415094;
  background: #f9f9ff;
  border: 1px solid transparent;
}

/* line 339, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.genric-btn.disable {
  color: #222222, 0.3;
  background: #f9f9ff;
  border: 1px solid transparent;
  cursor: not-allowed;
}

/* line 347, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.generic-blockquote {
  padding: 30px 50px 30px 30px;
  background: #f9f9ff;
  border-left: 2px solid #ff5e13;
}

/* line 353, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table-wrap {
  overflow-x: scroll;
}

/* line 357, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table {
  background: #f9f9ff;
  padding: 15px 0px 30px 0px;
  min-width: 800px;
}

/* line 361, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .serial {
  width: 11.83%;
  padding-left: 30px;
}

/* line 365, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .country {
  width: 28.07%;
}

/* line 368, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .visit {
  width: 19.74%;
}

/* line 371, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .percentage {
  width: 40.36%;
  padding-right: 50px;
}

/* line 375, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-head {
  display: flex;
}

/* line 377, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-head .serial,
.progress-table .table-head .country,
.progress-table .table-head .visit,
.progress-table .table-head .percentage {
  color: #415094;
  line-height: 40px;
  text-transform: uppercase;
  font-weight: 500;
}

/* line 387, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row {
  padding: 15px 0;
  border-top: 1px solid #edf3fd;
  display: flex;
}

/* line 391, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .serial,
.progress-table .table-row .country,
.progress-table .table-row .visit,
.progress-table .table-row .percentage {
  display: flex;
  align-items: center;
}

/* line 399, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .country img {
  margin-right: 15px;
}

/* line 404, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress {
  width: 80%;
  border-radius: 0px;
  background: transparent;
}

/* line 408, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar {
  height: 5px;
  line-height: 5px;
}

/* line 411, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-1 {
  background-color: #6382e6;
}

/* line 414, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-2 {
  background-color: #e66686;
}

/* line 417, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-3 {
  background-color: #f09359;
}

/* line 420, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-4 {
  background-color: #73fbaf;
}

/* line 423, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-5 {
  background-color: #73fbaf;
}

/* line 426, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-6 {
  background-color: #6382e6;
}

/* line 429, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-7 {
  background-color: #a367e7;
}

/* line 432, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.progress-table .table-row .percentage .progress .progress-bar.color-8 {
  background-color: #e66686;
}

/* line 441, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-gallery-image {
  margin-top: 30px;
  background-repeat: no-repeat !important;
  background-position: center center !important;
  background-size: cover !important;
  height: 200px;
}

/* line 449, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.list-style {
  width: 14px;
  height: 14px;
}

/* line 455, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.unordered-list li {
  position: relative;
  padding-left: 30px;
  line-height: 1.82em !important;
}

/* line 459, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.unordered-list li:before {
  content: "";
  position: absolute;
  width: 14px;
  height: 14px;
  border: 3px solid #ff5e13;
  background: #fff;
  top: 4px;
  left: 0;
  border-radius: 50%;
}

/* line 473, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list {
  margin-left: 30px;
}

/* line 475, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list li {
  list-style-type: decimal-leading-zero;
  color: #ff5e13;
  font-weight: 500;
  line-height: 1.82em !important;
}

/* line 480, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list li span {
  font-weight: 300;
  color: #828bb2;
}

/* line 488, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list-alpha li {
  margin-left: 30px;
  list-style-type: lower-alpha;
  color: #ff5e13;
  font-weight: 500;
  line-height: 1.82em !important;
}

/* line 494, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list-alpha li span {
  font-weight: 300;
  color: #828bb2;
}

/* line 502, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list-roman li {
  margin-left: 30px;
  list-style-type: lower-roman;
  color: #ff5e13;
  font-weight: 500;
  line-height: 1.82em !important;
}

/* line 508, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.ordered-list-roman li span {
  font-weight: 300;
  color: #828bb2;
}

/* line 515, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input {
  display: block;
  width: 100%;
  line-height: 40px;
  border: none;
  outline: none;
  background: #f9f9ff;
  padding: 0 20px;
}

/* line 523, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input:focus {
  outline: none;
}

/* line 528, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.input-group-icon {
  position: relative;
}

/* line 530, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.input-group-icon .icon {
  position: absolute;
  left: 20px;
  top: 0;
  line-height: 40px;
  z-index: 3;
}

/* line 535, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.input-group-icon .icon i {
  color: #797979;
}

/* line 540, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.input-group-icon .single-input {
  padding-left: 45px;
}

/* line 545, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-textarea {
  display: block;
  width: 100%;
  line-height: 40px;
  border: none;
  outline: none;
  background: #f9f9ff;
  padding: 0 20px;
  height: 100px;
  resize: none;
}

/* line 555, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-textarea:focus {
  outline: none;
}

/* line 560, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-primary {
  display: block;
  width: 100%;
  line-height: 40px;
  border: 1px solid transparent;
  outline: none;
  background: #f9f9ff;
  padding: 0 20px;
}

/* line 568, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-primary:focus {
  outline: none;
  border: 1px solid #ff5e13;
}

/* line 574, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-accent {
  display: block;
  width: 100%;
  line-height: 40px;
  border: 1px solid transparent;
  outline: none;
  background: #f9f9ff;
  padding: 0 20px;
}

/* line 582, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-accent:focus {
  outline: none;
  border: 1px solid #eb6b55;
}

/* line 588, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-secondary {
  display: block;
  width: 100%;
  line-height: 40px;
  border: 1px solid transparent;
  outline: none;
  background: #f9f9ff;
  padding: 0 20px;
}

/* line 596, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.single-input-secondary:focus {
  outline: none;
  border: 1px solid #f09359;
}

/* line 602, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-switch {
  width: 35px;
  height: 17px;
  border-radius: 8.5px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 609, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-switch input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
  cursor: pointer;
}

/* line 619, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-switch input + label {
  position: absolute;
  top: 1px;
  left: 1px;
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #ff5e13;
  -webkit-transition: all 0.2s;
  -moz-transition: all 0.2s;
  -o-transition: all 0.2s;
  transition: all 0.2s;
  box-shadow: 0px 4px 5px 0px rgba(0, 0, 0, 0.2);
  cursor: pointer;
}

/* line 632, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-switch input:checked + label {
  left: 19px;
}

/* line 639, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch {
  width: 35px;
  height: 17px;
  border-radius: 8.5px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 646, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 655, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
}

/* line 663, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input + label:before {
  content: "";
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  background: transparent;
  border-radius: 8.5px;
  cursor: pointer;
  -webkit-transition: all 0.2s;
  -moz-transition: all 0.2s;
  -o-transition: all 0.2s;
  transition: all 0.2s;
}

/* line 677, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input + label:after {
  content: "";
  position: absolute;
  top: 1px;
  left: 1px;
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #fff;
  -webkit-transition: all 0.2s;
  -moz-transition: all 0.2s;
  -o-transition: all 0.2s;
  transition: all 0.2s;
  box-shadow: 0px 4px 5px 0px rgba(0, 0, 0, 0.2);
  cursor: pointer;
}

/* line 693, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input:checked + label:after {
  left: 19px;
}

/* line 696, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-switch input:checked + label:before {
  background: #ff5e13;
}

/* line 704, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch {
  width: 35px;
  height: 17px;
  border-radius: 8.5px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 711, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 720, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
}

/* line 728, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input + label:before {
  content: "";
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  background: transparent;
  border-radius: 8.5px;
  -webkit-transition: all 0.2s;
  -moz-transition: all 0.2s;
  -o-transition: all 0.2s;
  transition: all 0.2s;
  cursor: pointer;
}

/* line 742, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input + label:after {
  content: "";
  position: absolute;
  top: 1px;
  left: 1px;
  width: 15px;
  height: 15px;
  border-radius: 50%;
  background: #fff;
  -webkit-transition: all 0.2s;
  -moz-transition: all 0.2s;
  -o-transition: all 0.2s;
  transition: all 0.2s;
  box-shadow: 0px 4px 5px 0px rgba(0, 0, 0, 0.2);
  cursor: pointer;
}

/* line 758, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input:checked + label:after {
  left: 19px;
}

/* line 761, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-switch input:checked + label:before {
  background: #4cd3e3;
}

/* line 769, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-checkbox {
  width: 16px;
  height: 16px;
  border-radius: 3px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 776, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-checkbox input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 785, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-checkbox input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 3px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 798, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-checkbox input:checked + label {
  background: url(../img/elements/primary-check.png) no-repeat center center/cover;
  border: none;
}

/* line 806, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-checkbox {
  width: 16px;
  height: 16px;
  border-radius: 3px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 813, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-checkbox input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 822, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-checkbox input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 3px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 835, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-checkbox input:checked + label {
  background: url(../img/elements/success-check.png) no-repeat center center/cover;
  border: none;
}

/* line 843, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-checkbox {
  width: 16px;
  height: 16px;
  border-radius: 3px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 850, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-checkbox input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 859, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-checkbox input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 3px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 871, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-checkbox input:disabled {
  cursor: not-allowed;
  z-index: 3;
}

/* line 876, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-checkbox input:checked + label {
  background: url(../img/elements/disabled-check.png) no-repeat center center/cover;
  border: none;
}

/* line 884, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-radio {
  width: 16px;
  height: 16px;
  border-radius: 8px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 891, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-radio input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 900, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-radio input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 8px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 913, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.primary-radio input:checked + label {
  background: url(../img/elements/primary-radio.png) no-repeat center center/cover;
  border: none;
}

/* line 921, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-radio {
  width: 16px;
  height: 16px;
  border-radius: 8px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 928, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-radio input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 937, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-radio input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 8px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 950, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.confirm-radio input:checked + label {
  background: url(../img/elements/success-radio.png) no-repeat center center/cover;
  border: none;
}

/* line 958, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-radio {
  width: 16px;
  height: 16px;
  border-radius: 8px;
  background: #f9f9ff;
  position: relative;
  cursor: pointer;
}

/* line 965, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-radio input {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}

/* line 974, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-radio input + label {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  width: 100%;
  height: 100%;
  border-radius: 8px;
  cursor: pointer;
  border: 1px solid #f1f1f1;
}

/* line 986, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-radio input:disabled {
  cursor: not-allowed;
  z-index: 3;
}

/* line 991, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.disabled-radio input:checked + label {
  background: url(../img/elements/disabled-radio.png) no-repeat center center/cover;
  border: none;
}

/* line 999, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select {
  height: 40px;
}

/* line 1001, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select {
  border: none;
  border-radius: 0px;
  height: 40px;
  background: #f9f9ff;
  padding-left: 20px;
  padding-right: 40px;
}

/* line 1008, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select .list {
  margin-top: 0;
  border: none;
  border-radius: 0px;
  box-shadow: none;
  width: 100%;
  padding: 10px 0 10px 0px;
}

/* line 1015, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select .list .option {
  font-weight: 300;
  -webkit-transition: all 0.3s ease 0s;
  -moz-transition: all 0.3s ease 0s;
  -o-transition: all 0.3s ease 0s;
  transition: all 0.3s ease 0s;
  line-height: 28px;
  min-height: 28px;
  font-size: 12px;
  padding-left: 20px;
}

/* line 1022, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select .list .option.selected {
  color: #ff5e13;
  background: transparent;
}

/* line 1026, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select .list .option:hover {
  color: #ff5e13;
  background: transparent;
}

/* line 1033, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .current {
  margin-right: 50px;
  font-weight: 300;
}

/* line 1037, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.default-select .nice-select::after {
  right: 20px;
}

/* line 1042, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select {
  height: 40px;
  width: 100%;
}

/* line 1045, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select {
  border: none;
  border-radius: 0px;
  height: 40px;
  background: #f9f9ff;
  padding-left: 45px;
  padding-right: 40px;
  width: 100%;
}

/* line 1053, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select .list {
  margin-top: 0;
  border: none;
  border-radius: 0px;
  box-shadow: none;
  width: 100%;
  padding: 10px 0 10px 0px;
}

/* line 1060, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select .list .option {
  font-weight: 300;
  -webkit-transition: all 0.3s ease 0s;
  -moz-transition: all 0.3s ease 0s;
  -o-transition: all 0.3s ease 0s;
  transition: all 0.3s ease 0s;
  line-height: 28px;
  min-height: 28px;
  font-size: 12px;
  padding-left: 45px;
}

/* line 1067, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select .list .option.selected {
  color: #ff5e13;
  background: transparent;
}

/* line 1071, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select .list .option:hover {
  color: #ff5e13;
  background: transparent;
}

/* line 1078, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .current {
  margin-right: 50px;
  font-weight: 300;
}

/* line 1082, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.form-select .nice-select::after {
  right: 20px;
}

/* line 1086, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.mt-10 {
  margin-top: 10px;
}

/* line 1089, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.section-top-border {
  padding: 50px 0;
  border-top: 1px dotted #eee;
}

/* line 1093, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.mb-30 {
  margin-bottom: 30px;
}

/* line 1096, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.mt-30 {
  margin-top: 30px;
}

/* line 1099, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_elements.scss */
.switch-wrap {
  margin-bottom: 10px;
}

/* Start Blog Area css
============================================================================================ */
/* line 5, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.latest-blog-area .area-heading {
  margin-bottom: 70px;
}

/* line 10, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_area a {
  color: #666666 !important;
  text-decoration: none;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 14, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_area a:hover, .blog_area a :hover {
  background: -webkit-linear-gradient(131deg, #78b454 0%, #78b454 99%);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
  text-decoration: none;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog {
  overflow: hidden;
  margin-bottom: 30px;
}

/* line 28, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog:hover {
  box-shadow: 0px 10px 20px 0px rgba(42, 34, 123, 0.1);
}

/* line 32, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .thumb {
  overflow: hidden;
  position: relative;
}

/* line 36, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .thumb:after {
  content: '';
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  background: #000;
  opacity: 0;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 49, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog h4 {
  border-bottom: 1px solid #dfdfdf;
  padding-bottom: 34px;
  margin-bottom: 25px;
}

/* line 56, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog a {
  font-size: 20px;
  font-weight: 600;
}

/* line 66, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .date {
  color: #666666;
  text-align: left;
  display: inline-block;
  font-size: 13px;
  font-weight: 300;
}

/* line 74, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .tag {
  text-align: left;
  display: inline-block;
  float: left;
  font-size: 13px;
  font-weight: 300;
  margin-right: 22px;
  position: relative;
}

/* line 84, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .tag:after {
  content: '';
  position: absolute;
  width: 1px;
  height: 10px;
  background: #acacac;
  right: -12px;
  top: 7px;
}

@media (max-width: 1199px) {
  /* line 74, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog .tag {
    margin-right: 8px;
  }
  /* line 98, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog .tag:after {
    display: none;
  }
}

/* line 104, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .likes {
  margin-right: 16px;
}

@media (max-width: 800px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog {
    margin-bottom: 30px;
  }
}

/* line 112, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .single-blog-content {
  padding: 30px;
}

/* line 116, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .single-blog-content .meta-bottom p {
  font-size: 13px;
  font-weight: 300;
}

/* line 121, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog .single-blog-content .meta-bottom i {
  color: #fdcb9e;
  font-size: 13px;
  margin-right: 7px;
}

@media (max-width: 1199px) {
  /* line 112, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog .single-blog-content {
    padding: 15px;
  }
}

/* line 135, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-blog:hover .thumb:after {
  opacity: .7;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

@media (max-width: 1199px) {
  /* line 143, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog h4 {
    transition: all 300ms linear 0s;
    border-bottom: 1px solid #dfdfdf;
    padding-bottom: 14px;
    margin-bottom: 12px;
  }
  /* line 149, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-blog h4 a {
    font-size: 18px;
  }
}

/* line 157, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog {
  position: relative;
}

/* line 160, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog .single-blog-content {
  position: absolute;
  left: 35px;
  bottom: 0;
  opacity: 0;
  visibility: hidden;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

@media (min-width: 992px) {
  /* line 160, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .full_image.single-blog .single-blog-content {
    bottom: 100px;
  }
}

/* line 179, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog h4 {
  -webkit-transition: 0.5s;
  transition: 0.5s;
  border-bottom: none;
  padding-bottom: 5px;
}

/* line 185, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog a {
  font-size: 20px;
  font-weight: 600;
}

/* line 195, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog .date {
  color: #fff;
}

/* line 200, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.full_image.single-blog:hover .single-blog-content {
  opacity: 1;
  visibility: visible;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* End Blog Area css
============================================================================================ */
/* Latest Blog Area css
============================================================================================ */
/* line 224, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.l_blog_item .l_blog_text .date {
  margin-top: 24px;
  margin-bottom: 15px;
}

/* line 228, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.l_blog_item .l_blog_text .date a {
  font-size: 12px;
}

/* line 234, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.l_blog_item .l_blog_text h4 {
  font-size: 18px;
  border-bottom: 1px solid #eeeeee;
  margin-bottom: 0px;
  padding-bottom: 20px;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 247, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.l_blog_item .l_blog_text p {
  margin-bottom: 0px;
  padding-top: 20px;
}

/* End Latest Blog Area css
============================================================================================ */
/* Causes Area css
============================================================================================ */
/* line 263, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_slider .owl-dots {
  text-align: center;
  margin-top: 80px;
}

/* line 267, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_slider .owl-dots .owl-dot {
  height: 14px;
  width: 14px;
  background: #eeeeee;
  display: inline-block;
  margin-right: 7px;
}

/* line 274, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_slider .owl-dots .owl-dot:last-child {
  margin-right: 0px;
}

/* line 285, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item {
  background: #fff;
}

/* line 288, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_img {
  position: relative;
}

/* line 291, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_img .c_parcent {
  position: absolute;
  bottom: 0px;
  width: 100%;
  left: 0px;
  height: 3px;
  background: rgba(255, 255, 255, 0.5);
}

/* line 299, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_img .c_parcent span {
  width: 70%;
  height: 3px;
  position: absolute;
  left: 0px;
  bottom: 0px;
}

/* line 307, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_img .c_parcent span:before {
  content: "75%";
  position: absolute;
  right: -10px;
  bottom: 0px;
  color: #fff;
  padding: 0px 5px;
}

/* line 320, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_text {
  padding: 30px 35px 40px 30px;
}

/* line 323, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_text h4 {
  font-size: 18px;
  font-weight: 600;
  margin-bottom: 15px;
  cursor: pointer;
}

/* line 336, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_text p {
  font-size: 14px;
  line-height: 24px;
  font-weight: 300;
  margin-bottom: 0px;
}

/* line 346, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_bottom a {
  width: 50%;
  border: 1px solid;
  text-align: center;
  float: left;
  line-height: 50px;
  color: #fff;
  font-size: 14px;
  font-weight: 500;
}

/* line 358, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.causes_item .causes_bottom a + a {
  border-color: #eeeeee;
  background: #fff;
  font-size: 14px;
}

/* End Causes Area css
============================================================================================ */
/*================= latest_blog_area css =============*/
/* line 374, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.latest_blog_area {
  background: #f9f9ff;
}

/* line 378, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post {
  margin-bottom: 30px;
}

/* line 381, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post .thumb {
  overflow: hidden;
}

/* line 384, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post .thumb img {
  transition: all 0.7s linear;
}

/* line 389, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post .details {
  padding-top: 30px;
}

/* line 392, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post .details .sec_h4 {
  line-height: 24px;
  padding: 10px 0px 13px;
  transition: all 0.3s linear;
}

/* line 403, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post .date {
  font-size: 14px;
  line-height: 24px;
  font-weight: 400;
}

/* line 410, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-recent-blog-post:hover img {
  transform: scale(1.23) rotate(10deg);
}

/* line 417, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.tags .tag_btn {
  font-size: 12px;
  font-weight: 500;
  line-height: 20px;
  border: 1px solid #eeeeee;
  display: inline-block;
  padding: 1px 18px;
  text-align: center;
}

/* line 431, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.tags .tag_btn + .tag_btn {
  margin-left: 2px;
}

/*========= blog_categorie_area css ===========*/
/* line 438, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_categorie_area {
  padding-top: 30px;
  padding-bottom: 30px;
}

@media (min-width: 900px) {
  /* line 438, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_categorie_area {
    padding-top: 80px;
    padding-bottom: 80px;
  }
}

@media (min-width: 1100px) {
  /* line 438, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_categorie_area {
    padding-top: 120px;
    padding-bottom: 120px;
  }
}

/* line 454, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post {
  position: relative;
  text-align: center;
  cursor: pointer;
}

/* line 459, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post img {
  max-width: 100%;
}

/* line 463, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post .categories_details {
  position: absolute;
  top: 20px;
  left: 20px;
  right: 20px;
  bottom: 20px;
  background: rgba(34, 34, 34, 0.75);
  color: #fff;
  transition: all 0.3s linear;
  display: flex;
  align-items: center;
  justify-content: center;
}

/* line 476, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post .categories_details h5 {
  margin-bottom: 0px;
  font-size: 18px;
  line-height: 26px;
  text-transform: uppercase;
  color: #fff;
  position: relative;
}

/* line 494, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post .categories_details p {
  font-weight: 300;
  font-size: 14px;
  line-height: 26px;
  margin-bottom: 0px;
}

/* line 501, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post .categories_details .border_line {
  margin: 10px 0px;
  background: #fff;
  width: 100%;
  height: 1px;
}

/* line 510, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.categories_post:hover .categories_details {
  background: rgba(222, 99, 32, 0.85);
}

/*============ blog_left_sidebar css ==============*/
/* line 525, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_item {
  margin-bottom: 50px;
}

/* line 529, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_details {
  padding: 30px 0 20px 10px;
  box-shadow: 0px 10px 20px 0px rgba(221, 221, 221, 0.3);
}

@media (min-width: 768px) {
  /* line 529, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_details {
    padding: 60px 30px 35px 35px;
  }
}

/* line 537, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_details p {
  margin-bottom: 30px;
}

/* line 541, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_details a {
  color: #ff8b23;
}

/* line 544, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_details a:hover {
  color: #78b454;
}

/* line 549, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_details h2 {
  font-size: 18px;
  font-weight: 600;
  margin-bottom: 8px;
}

@media (min-width: 768px) {
  /* line 549, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_details h2 {
    font-size: 24px;
    margin-bottom: 15px;
  }
}

/* line 563, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link li {
  float: left;
  font-size: 14px;
}

/* line 567, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link li a {
  color: #999999;
}

/* line 571, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link li i,
.blog-info-link li span {
  font-size: 13px;
  margin-right: 5px;
}

/* line 577, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link li::after {
  content: "|";
  padding-left: 10px;
  padding-right: 10px;
}

/* line 583, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link li:last-child::after {
  display: none;
}

/* line 588, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-info-link::after {
  content: "";
  display: block;
  clear: both;
  display: table;
}

/* line 596, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_item_img {
  position: relative;
}

/* line 599, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_item_img .blog_item_date {
  position: absolute;
  bottom: -10px;
  left: 10px;
  display: block;
  color: #fff;
  background-color: #78b454;
  padding: 8px 15px;
  border-radius: 5px;
}

@media (min-width: 768px) {
  /* line 599, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_item_img .blog_item_date {
    bottom: -20px;
    left: 40px;
    padding: 13px 30px;
  }
}

/* line 615, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_item_img .blog_item_date h3 {
  font-size: 22px;
  font-weight: 600;
  color: #fff;
  margin-bottom: 0;
  line-height: 1.2;
}

@media (min-width: 768px) {
  /* line 615, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_item_img .blog_item_date h3 {
    font-size: 30px;
  }
}

/* line 627, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_item_img .blog_item_date p {
  font-size: 18px;
  margin-bottom: 0;
  color: #fff;
}

@media (min-width: 768px) {
  /* line 627, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .blog_item_img .blog_item_date p {
    font-size: 18px;
  }
}

/* line 647, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .widget_title {
  font-size: 20px;
  margin-bottom: 40px;
}

/* line 652, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .widget_title::after {
  content: "";
  display: block;
  padding-top: 15px;
  border-bottom: 1px solid #f0e9ff;
}

/* line 660, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .single_sidebar_widget {
  background: #fbf9ff;
  padding: 30px;
  margin-bottom: 30px;
}

/* line 664, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .single_sidebar_widget .btn_1 {
  margin-top: 0px;
}

/* line 672, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .search_widget .form-control {
  height: 50px;
  border-color: #f0e9ff;
  font-size: 13px;
  color: #999999;
  padding-left: 20px;
  border-radius: 0;
  border-right: 0;
}

/* line 681, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .search_widget .form-control::placeholder {
  color: #999999;
}

/* line 685, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .search_widget .form-control:focus {
  border-color: #f0e9ff;
  outline: 0;
  box-shadow: none;
}

/* line 694, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .search_widget .input-group button {
  background: #fff;
  border-left: 0;
  border: 1px solid #f0e9ff;
  padding: 4px 15px;
  border-left: 0;
}

/* line 701, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .search_widget .input-group button i,
.blog_right_sidebar .search_widget .input-group button span {
  font-size: 14px;
  color: #999999;
}

/* line 713, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .newsletter_widget .form-control {
  height: 50px;
  border-color: #f0e9ff;
  font-size: 13px;
  color: #999999;
  padding-left: 20px;
  border-radius: 0;
}

/* line 722, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .newsletter_widget .form-control::placeholder {
  color: #999999;
}

/* line 726, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .newsletter_widget .form-control:focus {
  border-color: #f0e9ff;
  outline: 0;
  box-shadow: none;
}

/* line 735, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .newsletter_widget .input-group button {
  background: #fff;
  border-left: 0;
  border: 1px solid #f0e9ff;
  padding: 4px 15px;
  border-left: 0;
}

/* line 742, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .newsletter_widget .input-group button i,
.blog_right_sidebar .newsletter_widget .input-group button span {
  font-size: 14px;
  color: #999999;
}

/* line 755, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .post_category_widget .cat-list li {
  border-bottom: 1px solid #f0e9ff;
  transition: all 0.3s ease 0s;
  padding-bottom: 12px;
}

/* line 760, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .post_category_widget .cat-list li:last-child {
  border-bottom: 0;
}

/* line 764, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .post_category_widget .cat-list li a {
  font-size: 14px;
  line-height: 20px;
  color: #888888;
}

/* line 769, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .post_category_widget .cat-list li a p {
  margin-bottom: 0px;
}

/* line 774, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .post_category_widget .cat-list li + li {
  padding-top: 15px;
}

/* line 791, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .popular_post_widget .post_item .media-body {
  justify-content: center;
  align-self: center;
  padding-left: 20px;
}

/* line 796, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .popular_post_widget .post_item .media-body h3 {
  font-size: 16px;
  line-height: 20px;
  margin-bottom: 6px;
  transition: all 0.3s linear;
}

/* line 807, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .popular_post_widget .post_item .media-body a:hover {
  color: #fff;
}

/* line 813, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .popular_post_widget .post_item .media-body p {
  font-size: 14px;
  line-height: 21px;
  margin-bottom: 0px;
}

/* line 820, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .popular_post_widget .post_item + .post_item {
  margin-top: 20px;
}

/* line 828, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .tag_cloud_widget ul li {
  display: inline-block;
}

/* line 831, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .tag_cloud_widget ul li a {
  display: inline-block;
  border: 1px solid #eeeeee;
  background: #fff;
  padding: 4px 20px;
  margin-bottom: 8px;
  margin-right: 3px;
  transition: all 0.3s ease 0s;
  color: #888888;
  font-size: 13px;
}

/* line 842, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .tag_cloud_widget ul li a:hover {
  background: #78b454;
  color: #fff !important;
  -webkit-text-fill-color: #fff;
  text-decoration: none;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 857, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .instagram_feeds .instagram_row {
  display: flex;
  margin-right: -6px;
  margin-left: -6px;
}

/* line 863, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .instagram_feeds .instagram_row li {
  width: 33.33%;
  float: left;
  padding-right: 6px;
  padding-left: 6px;
  margin-bottom: 15px;
}

/* line 963, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog_right_sidebar .br {
  width: 100%;
  height: 1px;
  background: #eeeeee;
  margin: 30px 0px;
}

/* line 984, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-pagination {
  margin-top: 80px;
}

/* line 988, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-pagination .page-link {
  font-size: 14px;
  position: relative;
  display: block;
  padding: 0;
  text-align: center;
  margin-left: -1px;
  line-height: 45px;
  width: 45px;
  height: 45px;
  border-radius: 0 !important;
  color: #8a8a8a;
  border: 1px solid #f0e9ff;
  margin-right: 10px;
}

/* line 1005, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-pagination .page-link i,
.blog-pagination .page-link span {
  font-size: 13px;
}

/* line 1017, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-pagination .page-item.active .page-link {
  background-color: #fbf9ff;
  border-color: #f0e9ff;
  color: #888888;
}

/* line 1024, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.blog-pagination .page-item:last-child .page-link {
  margin-right: 0;
}

/*============ Start Blog Single Styles  =============*/
/* line 1049, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog_details {
  box-shadow: none;
  padding: 0;
}

/* line 1054, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .social-links {
  padding-top: 10px;
}

/* line 1057, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .social-links li {
  display: inline-block;
  margin-bottom: 10px;
}

/* line 1061, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .social-links li a {
  color: #cccccc;
  padding: 7px;
  font-size: 14px;
  transition: all 0.2s linear;
}

/* line 1074, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog_details {
  padding-top: 26px;
}

/* line 1077, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog_details p {
  margin-bottom: 20px;
  font-size: 15px;
}

/* line 1087, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .quote-wrapper {
  background: rgba(130, 139, 178, 0.1);
  padding: 15px;
  line-height: 1.733;
  color: #888888;
  font-style: italic;
  margin-top: 25px;
  margin-bottom: 25px;
}

@media (min-width: 768px) {
  /* line 1087, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .quote-wrapper {
    padding: 30px;
  }
}

/* line 1101, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .quotes {
  background: #fff;
  padding: 15px 15px 15px 20px;
  border-left: 2px solid;
}

@media (min-width: 768px) {
  /* line 1101, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .quotes {
    padding: 25px 25px 25px 30px;
  }
}

/* line 1111, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .arrow {
  position: absolute;
}

/* line 1114, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .arrow .lnr {
  font-size: 20px;
  font-weight: 600;
}

/* line 1121, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .thumb .overlay-bg {
  background: rgba(0, 0, 0, 0.8);
}

/* line 1126, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top {
  padding-top: 15px;
  border-top: 1px solid #f0e9ff;
}

/* line 1130, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top p {
  margin-bottom: 0;
}

/* line 1134, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .like-info {
  font-size: 14px;
}

/* line 1137, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .like-info i,
.single-post-area .navigation-top .like-info span {
  font-size: 16px;
  margin-right: 5px;
}

/* line 1144, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .comment-count {
  font-size: 14px;
}

/* line 1147, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .comment-count i,
.single-post-area .navigation-top .comment-count span {
  font-size: 16px;
  margin-right: 5px;
}

/* line 1156, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .social-icons li {
  display: inline-block;
  margin-right: 15px;
}

/* line 1160, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .social-icons li:last-child {
  margin: 0;
}

/* line 1164, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-top .social-icons li i,
.single-post-area .navigation-top .social-icons li span {
  font-size: 14px;
  color: #999999;
}

/* line 1182, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author {
  padding: 40px 30px;
  background: #fbf9ff;
  margin-top: 50px;
}

@media (max-width: 600px) {
  /* line 1182, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .blog-author {
    padding: 20px 8px;
  }
}

/* line 1191, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author img {
  width: 90px;
  height: 90px;
  border-radius: 50%;
  margin-right: 30px;
}

@media (max-width: 600px) {
  /* line 1191, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .blog-author img {
    margin-right: 15px;
    width: 45px;
    height: 45px;
  }
}

/* line 1204, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author a {
  display: inline-block;
}

/* line 1208, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author a:hover {
  color: #78b454;
}

/* line 1213, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author p {
  margin-bottom: 0;
  font-size: 15px;
}

/* line 1218, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .blog-author h4 {
  font-size: 16px;
}

/* line 1225, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area {
  border-bottom: 1px solid #eee;
  padding-bottom: 30px;
  margin-top: 55px;
}

/* line 1230, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area p {
  margin-bottom: 0px;
}

/* line 1234, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area h4 {
  font-size: 18px;
  line-height: 25px;
}

/* line 1240, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left {
  text-align: left;
}

/* line 1243, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left .thumb {
  margin-right: 20px;
  background: #000;
}

/* line 1247, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left .thumb img {
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 1252, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left .lnr {
  margin-left: 20px;
  opacity: 0;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 1259, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left:hover .lnr {
  opacity: 1;
}

/* line 1264, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-left:hover .thumb img {
  opacity: .5;
}

@media (max-width: 767px) {
  /* line 1240, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .navigation-area .nav-left {
    margin-bottom: 30px;
  }
}

/* line 1275, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right {
  text-align: right;
}

/* line 1278, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right .thumb {
  margin-left: 20px;
  background: #000;
}

/* line 1282, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right .thumb img {
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 1287, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right .lnr {
  margin-right: 20px;
  opacity: 0;
  -webkit-transition: 0.5s;
  transition: 0.5s;
}

/* line 1294, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right:hover .lnr {
  opacity: 1;
}

/* line 1299, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.single-post-area .navigation-area .nav-right:hover .thumb img {
  opacity: .5;
}

@media (max-width: 991px) {
  /* line 1307, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .single-post-area .sidebar-widgets {
    padding-bottom: 0px;
  }
}

/* line 1314, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area {
  background: transparent;
  border-top: 1px solid #eee;
  padding: 45px 0;
  margin-top: 50px;
}

@media (max-width: 414px) {
  /* line 1314, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comments-area {
    padding: 50px 8px;
  }
}

/* line 1325, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area h4 {
  margin-bottom: 35px;
  font-size: 18px;
}

/* line 1332, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area h5 {
  font-size: 16px;
  margin-bottom: 0px;
}

/* line 1341, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .comment-list {
  padding-bottom: 48px;
}

/* line 1344, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .comment-list:last-child {
  padding-bottom: 0px;
}

/* line 1348, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .comment-list.left-padding {
  padding-left: 25px;
}

@media (max-width: 413px) {
  /* line 1354, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comments-area .comment-list .single-comment h5 {
    font-size: 12px;
  }
  /* line 1358, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comments-area .comment-list .single-comment .date {
    font-size: 11px;
  }
  /* line 1362, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comments-area .comment-list .single-comment .comment {
    font-size: 10px;
  }
}

/* line 1369, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .thumb {
  margin-right: 20px;
}

/* line 1372, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .thumb img {
  width: 70px;
  border-radius: 50%;
}

/* line 1378, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .date {
  font-size: 14px;
  color: #999999;
  margin-bottom: 0;
  margin-left: 20px;
}

/* line 1385, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .comment {
  margin-bottom: 10px;
  color: #777777;
  font-size: 15px;
}

/* line 1391, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comments-area .btn-reply {
  background-color: transparent;
  color: #888888;
  padding: 5px 18px;
  font-size: 14px;
  display: block;
  font-weight: 400;
}

/* line 1408, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form {
  border-top: 1px solid #eee;
  padding-top: 45px;
  margin-top: 50px;
  margin-bottom: 20px;
}

/* line 1416, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .form-group {
  margin-bottom: 30px;
}

/* line 1420, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form h4 {
  margin-bottom: 40px;
  font-size: 18px;
  line-height: 22px;
}

/* line 1428, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .name {
  padding-left: 0px;
}

@media (max-width: 767px) {
  /* line 1428, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comment-form .name {
    padding-right: 0px;
    margin-bottom: 1rem;
  }
}

/* line 1437, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .email {
  padding-right: 0px;
}

@media (max-width: 991px) {
  /* line 1437, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
  .comment-form .email {
    padding-left: 0px;
  }
}

/* line 1445, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .form-control {
  border: 1px solid #f0e9ff;
  border-radius: 5px;
  height: 48px;
  padding-left: 18px;
  font-size: 13px;
  background: transparent;
}

/* line 1453, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .form-control:focus {
  outline: 0;
  box-shadow: none;
}

/* line 1458, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .form-control::placeholder {
  font-weight: 300;
  color: #999999;
}

/* line 1463, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form .form-control::placeholder {
  color: #777777;
}

/* line 1468, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form textarea {
  padding-top: 18px;
  border-radius: 12px;
  height: 100% !important;
}

/* line 1474, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form ::-webkit-input-placeholder {
  /* Chrome/Opera/Safari */
  font-size: 13px;
  color: #777;
}

/* line 1480, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form ::-moz-placeholder {
  /* Firefox 19+ */
  font-size: 13px;
  color: #777;
}

/* line 1486, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form :-ms-input-placeholder {
  /* IE 10+ */
  font-size: 13px;
  color: #777;
}

/* line 1492, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog.scss */
.comment-form :-moz-placeholder {
  /* Firefox 18- */
  font-size: 13px;
  color: #777;
}

/*============ End Blog Single Styles  =============*/
/**************** blog part css start ****************/
/* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part {
  margin-bottom: 140px;
}

@media (max-width: 576px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part {
    margin-bottom: 0px;
    padding: 0px 0px 70px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part {
    margin-bottom: 0px;
    padding: 0px 0px 70px;
  }
}

@media only screen and (min-width: 768px) and (max-width: 991px) {
  /* line 2, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part {
    margin-bottom: 0px;
    padding: 0px 0px 70px;
  }
}

/* line 19, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .blog_right_sidebar .widget_title {
  font-size: 20px;
  margin-bottom: 40px;
  font-style: inherit !important;
}

@media (max-width: 576px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog {
    margin-bottom: 140px;
    margin-top: 20px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog {
    margin-bottom: 140px;
    margin-top: 20px;
  }
}

@media only screen and (min-width: 768px) and (max-width: 991px) {
  /* line 24, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog {
    margin-bottom: 140px;
    margin-top: 20px;
  }
}

/* line 40, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card-img-top {
  border-radius: 0px;
}

/* line 43, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card {
  border: 0px solid transparent;
  border-radius: 0px;
  background-color: transparent;
  position: relative;
}

/* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card .card-body {
  padding: 25px 10px 29px 40px;
  background-color: #fff;
  position: absolute;
  left: 20px;
  bottom: -140px;
  box-shadow: -7.552px 9.326px 20px 0px rgba(1, 84, 85, 0.1);
  border-radius: 10px;
}

@media (max-width: 576px) {
  /* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card .card-body {
    padding: 15px;
    left: 10px;
    bottom: -140px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card .card-body {
    padding: 15px;
    left: 10px;
    bottom: -140px;
  }
}

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  /* line 48, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card .card-body {
    padding: 20px;
  }
}

/* line 72, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card .card-body a {
  color: #78b454;
  text-transform: uppercase;
  -webkit-transition: 0.8s;
  transition: 0.8s;
}

/* line 76, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card .card-body a:hover {
  background: -webkit-linear-gradient(131deg, #ff7e5f 0%, #feb47b 99%);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
}

/* line 83, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card .dot {
  position: relative;
  padding-left: 20px;
}

/* line 86, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card .dot:after {
  position: absolute;
  content: "";
  width: 10px;
  height: 10px;
  top: 5px;
  left: 0;
  background-color: #78b454;
  border-radius: 50%;
}

/* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card span {
  color: #8a8a8a;
  margin-bottom: 10px;
  display: inline-block;
  margin-top: 10px;
}

@media (max-width: 576px) {
  /* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card span {
    margin-bottom: 5px;
    margin-top: 5px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card span {
    margin-bottom: 5px;
    margin-top: 5px;
  }
}

@media only screen and (min-width: 768px) and (max-width: 991px) {
  /* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card span {
    margin-bottom: 5px;
    margin-top: 5px;
  }
}

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  /* line 97, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card span {
    margin-bottom: 5px;
    margin-top: 5px;
  }
}

/* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card h5 {
  font-weight: 600;
  line-height: 1.5;
  font-size: 20px;
  -webkit-transition: 0.8s;
  transition: 0.8s;
  text-transform: capitalize;
  margin-bottom: 22px;
}

@media (max-width: 576px) {
  /* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card h5 {
    margin-bottom: 10px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card h5 {
    margin-bottom: 10px;
    font-size: 16px;
  }
}

@media only screen and (min-width: 768px) and (max-width: 991px) {
  /* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card h5 {
    margin-bottom: 10px;
  }
}

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  /* line 119, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card h5 {
    margin-bottom: 10px;
    font-size: 18px;
  }
}

/* line 140, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card h5:hover {
  -webkit-transition: 0.8s;
  transition: 0.8s;
  background: -webkit-linear-gradient(131deg, #feb47b 0%, #ff7e5f 99%);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
  -webkit-animation: 1s;
}

/* line 150, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card ul li {
  display: inline-block;
  color: #8a8a8a;
  margin-right: 14px;
}

@media (max-width: 576px) {
  /* line 150, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card ul li {
    margin-right: 10px;
  }
}

@media only screen and (min-width: 480px) and (max-width: 767px) {
  /* line 150, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card ul li {
    margin-right: 10px;
  }
}

@media only screen and (min-width: 768px) and (max-width: 991px) {
  /* line 150, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card ul li {
    margin-right: 10px;
  }
}

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  /* line 150, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
  .blog_part .single-home-blog .card ul li {
    margin-right: 10px;
  }
}

/* line 166, ../../Arafath/CL/CL August/199 Flatter Catering/199 Flatter Catering-HTML/scss/_blog_part.scss */
.blog_part .single-home-blog .card ul li span {
  margin-right: 10px;
  font-size: 12px;
}

/*# sourceMappingURL=style.css.map */