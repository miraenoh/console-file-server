/** @file constants.h
	@brief A file containing universal constants for the app */
#pragma once
#include "stdafx.h"

const string ADMIN_CODE_INITIAL = "admin";

const int CAPACITY_BASE = 10;

const string MENU_MAIN[] = { "프로그램 종료", "사용자 모드", "관리자 모드", "회원가입 요청" };

const string MES_REQUEST_INPUT = "선택할 번호: ";
const string MES_RETRY = "다시 시도해주세요.";

// Registraion
const string MES_REGISTER_ID = "id: ";
const string MES_REGISTER_PASS = "password: ";
const string MES_REGISTER_IDENTN = "주민번호: ";
const string MES_REGISTER_AUTH = "권한레벨: ";
const string MES_REGISTER_SUCCESS = "회원가입 요청이 완료되었습니다.";
const string MES_RIGISTER_ERR_ID_LEN = "아이디는 5자 이상, 20자 이하여야 합니다.";
const string MES_RIGISTER_ERR_ID_EXISTS = "이미 존재하는 아이디입니다.";
const string MES_RIGISTER_ERR_PASS_LEN = "비밀번호는 8자 이상, 20자 이하여야 합니다.";
const string MES_RIGISTER_ERR_PASS_IDENTN = "비밀번호는 주민등록번호를 포함할 수 없습니다.";
const string MES_RIGISTER_ERR_IDNETN = "올바르지 않은 주민등록번호입니다.";
const string MES_RIGISTER_ERR_AUTHLEVEL = "권한레벨은 R, W, RW 중 하나여야 합니다.";
