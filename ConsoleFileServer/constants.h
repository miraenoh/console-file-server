/** @file constants.h
	@brief A file containing universal constants for the app */
#pragma once
#include "stdafx.h"

const string ADMIN_CODE_INITIAL = "admin";

const int CAPACITY_BASE = 10;

const int ENCRYPTION_KEY = 3;

const int MENU_MAIN_LEN = 4;
const string MENU_MAIN[] = { "프로그램 종료", "사용자 모드", "관리자 모드", "회원가입 요청" };
const int MENU_USER_LEN = 4;
const string MENU_USER[] = { "이전으로", "파일 업로드", "파일 삭제", "파일 다운로드" };
const int MENU_ADMIN_LEN = 8;
const string MENU_ADMIN[] = { "이전으로", "관리자 코드 변경", "가입한 유저 정보", "하드용량 추가", "대기중인 유저 정보", "파일 업로드", "파일 삭제", "파일 다운로드" };

const string MES_REQUEST_INPUT = "선택할 번호: ";
const string MES_RETRY = "다시 시도해주세요.";
const string MES_ERR_INPUT = "올바르지 않은 입력입니다.";

// Auth
const string MES_AUTH_ID = "id: ";
const string MES_AUTH_PASS = "password: ";
const string MES_AUTH_IDENTN = "주민번호(숫자만): ";
const string MES_AUTH_AUTH = "권한레벨: ";
// Auth registration
const string MES_REGISTER_SUCCESS = "회원가입 요청이 완료되었습니다.";
const string MES_RIGISTER_ERR_ID_LEN = "아이디는 5자 이상, 20자 이하여야 합니다.";
const string MES_RIGISTER_ERR_ID_EXISTS = "이미 존재하는 아이디입니다.";
const string MES_RIGISTER_ERR_PASS_LEN = "비밀번호는 8자 이상, 20자 이하여야 합니다.";
const string MES_RIGISTER_ERR_PASS_IDENTN = "비밀번호는 주민등록번호를 포함할 수 없습니다.";
const string MES_RIGISTER_ERR_IDNETN = "올바르지 않은 주민등록번호입니다.";
const string MES_RIGISTER_ERR_AUTHLEVEL = "권한레벨은 R, W, RW 중 하나여야 합니다.";
// Auth admin login
const string MES_LOGIN_ADMIN_CODE = "관리자 코드: ";
const string MES_LOGIN_ADMIN_ERR = "관리자 코드가 일치하지 않습니다.";
// Auth user login
const string MES_LOGIN_USER_ERR_ID = "존재하지 않는 아이디입니다.";
const string MES_LOGIN_USER_ERR_PASS = "패스워드가 일치하지 않습니다.";

// User mode
const string MES_USER_CAP_ALL = "서버 전체 용량: ";
const string MES_USER_CAP_USED = "현재 사용 용량: ";
const string MES_USER_CAP_AVIL = "사용 가능 용량: ";
const string MES_USER_FM_FAIL_W = "파일 쓰기 권한이 없습니다.";
const string MES_USER_FM_FAIL_R = "파일 읽기 권한이 없습니다.";

// Admin mode
// Approve usera
const string MES_ADMIN_PEND_DECIDE = "가입 승인은 1, 거절은 2, 돌아가시려면 0을 입력해주세요.";
const string MES_ADMIN_PEND_SUCCESS_APPROVE = "해당 유저의 가입이 승인되었습니다.";
const string MES_ADMIN_PEND_SUCCESS_REFUSE = "해당 유저의 가입이 거절되었습니다.";
// Change admin code
const string MES_ADMIN_CODE_INFO = "돌아가기: 0";
const string MES_ADMIN_CODE_CURR = "현재 관리자 코드: ";
const string MES_ADMIN_CODE_NEXT = "바꿀 관리자 코드: ";
const string MES_ADMIN_CODE_SUCCESS = "관리자 코드가 변경되었습니다.";
const string MES_ADMIN_CODE_ERR_CURR = "관리자 코드가 일치하지 않습니다.";
const string MES_ADMIN_CODE_ERR_NEXT = "코드는 5-20자의 영어 대소문자와 숫자여야 합니다.";
// Add capacity
const string MES_ADMIN_CAP_ERR = "용량이 3회 이상 추가된 상태입니다. 용량 추가에 실패했습니다.";
const string MES_ADMIN_CAP_SUCCESS = "용량이 추가되었습니다.";

// File manager
// File upload
const string MES_FM_UPLOAD_NAME = "파일 이름: ";
const string MES_FM_UPLOAD_TYPE = "파일 타입: ";
const string MES_FM_UPLOAD_SIZE = "파일 크기(정수): ";
const string MES_FM_UPLOAD_ERR_NAME = "파일 이름은 5-20자의 영어 대소문자와 숫자여야 합니다.";
const string MES_FM_UPLOAD_ERR_TYPE = "파일 타입은 3-5자의 영어 소문자여야 합니다.";
const string MES_FM_UPLOAD_ERR_SIZE = "파일 사이즈가 서버에 남은 용량보다 큽니다.";
const string MES_FM_UPLOAD_ERR_SIZE_RANGE = "파일 사이즈는 0보다 커야 합니다.";
const string MES_FM_UPLOAD_SUCCESS = "파일이 업로드되었습니다.";
const string MES_FM_UPLOAD_FAIL = "파일 업로드에 실패했습니다.";
// File delete
const string MES_FM_DELETE_SUCCESS = "선택하신 파일이 삭제되었습니다.";
// File download
const string MES_FM_DOWNLOAD_SUCCESS = "선택하신 파일이 다운로드되었습니다.";
