# teamProject-Clothing_Recommendation

2020년 2학기 C언어 프로그래밍 팀프로젝트

## 프로젝트 목적
- 기온, 스타일에 맞춰 자신만의 옷장에 저장된 옷을 추천해주는 프로젝트

## 프로젝트 기능
- 로그인 및 회원가입 : 사용자 계정을 만들고 동시에 자신만의 옷장 디렉토리 확보
- 사용자로부터 옷 입력 : 사용자는 자신의 옷 종류를 입력받고 자신의 옷장 디렉토리에 저장
- 사용자에게 옷 추천 : 기온, 스타일에 맞춰 자신만의 옷장 디렉토리에 접근해 저장된 옷을 추천
- 사용자의 옷 삭제 : 사용자 옷장 디렉토리에 접근해 저장된 옷을 삭제
- 회원 정보 삭제 : 사용자가 회원 탈퇴를 원할 떄, 사용자와 관련된 파일을 모두 삭제


## 첫번째 화면 
1) 회원가입
- 사용자가 아이디와 성별 입력 
- 회원가입에 성공하면 해당 사용자의 파일이 생성되며 파일 이름은 사용자 아이디로 생성
<img src="https://user-images.githubusercontent.com/76930260/228799214-0b7697d0-4ad4-499d-a035-fb1925848fa5.png" width="400"/>

2) 로그인
- 사용자가 회원가입을 했다면 아이디 입력시 로그인 성공  
<img src="https://user-images.githubusercontent.com/76930260/228800501-61ce6822-a650-4ec9-94ba-b1dd33c37be2.png" width="300"/>


3) 종료 
<img src="https://user-images.githubusercontent.com/76930260/228800604-4664ede6-4cba-465f-9a18-131def86cdc5.png" width="300"/>


## 두번째 화면 

A) 옷 저장하기
- 사용자는 저장하고자 하는 옷을 캐주얼, 포멀, 스포츠의 세 가지 스타일로 나누어 입력 가능(현 사용자는 캐주얼 선택)
<img src="https://user-images.githubusercontent.com/76930260/228801046-4f57398a-fac2-4a78-9af5-a0e5a76541e1.png" width="400"/>

- 다음 항목에서 옷 종류를 선택하고 저장  
<img src="https://user-images.githubusercontent.com/76930260/228801428-eef257e1-c187-4435-bf82-03f4f0340d22.png" width="300"/><img src="https://user-images.githubusercontent.com/76930260/228801442-9dec5357-ca33-4507-af0f-129125188ff9.png" width="300"/><img src="https://user-images.githubusercontent.com/76930260/228801511-3d4bfb2c-224d-4a22-96db-efc18ff5c8b3.png" width="350"/>

B) 옷 추천받기
- 옷을 추천받기 위해 기온, 스타일 두 가지 조건 필요
- 입력받은 조건에 따라 사용자의 옷장에 접근에 데이터를 찾고 랜덤으로 옷 데이터를 추출
- 사용자가 입력한 스타일과 기온의 조건을 만족하는 옷이 사용자의 옷장에 없을 때 그 데이터를 출력함으로써 사용자에게 알림 --> 이를 통해 구매 가능    
<img src="https://user-images.githubusercontent.com/76930260/228805579-5a967e4e-6229-41ff-b447-d1fadd4dfefe.png" width="400"/><img src="https://user-images.githubusercontent.com/76930260/228805781-b106f6a6-2c1a-4363-b32b-34d1e01a79f7.png" width="400"/>

C) 옷 삭제하기   
- 삭제할 옷의 카테고리를 입력하고 세부 사항이 출력되면 그 번호를 입력받아 지우고 싶은 옷을 삭제   
<img src="https://user-images.githubusercontent.com/76930260/228806284-b4cb78d6-d8e4-483d-b3ca-8fdbb77cfdab.png" width="300"/><img src="https://user-images.githubusercontent.com/76930260/228806310-75d84c30-d35f-4dc4-9176-9397051142d5.png" width="300"/><img src="https://user-images.githubusercontent.com/76930260/228806335-c4712d8e-ce25-4177-aa5b-f04dbc6a6471.png" width="300"/>


D) 회원 탈퇴
- 회원 탈퇴를 원하는 사용자는 1또는 0을 입력해 탈퇴를 진행   
<img src="https://user-images.githubusercontent.com/76930260/228807967-19239a33-25a2-464c-89e0-ee6e04bdee37.png" width="300"/>

E) 종료    
<img src="https://user-images.githubusercontent.com/76930260/228808093-76efd061-9e07-498a-a4a3-3b3fb24680b9.png" width="300"/>



