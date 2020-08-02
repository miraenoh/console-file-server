/** @file constants.h
	@brief A file containing universal constants for the app */
#pragma once
#include "stdafx.h"

const string ADMIN_CODE_INITIAL = "admin";

const int CAPACITY_BASE = 10;

const int ENCRYPTION_KEY = 3;

const int MENU_MAIN_LEN = 4;
const string MENU_MAIN[] = { "���α׷� ����", "����� ���", "������ ���", "ȸ������ ��û" };
const int MENU_ADMIN_LEN = 8;
const string MENU_ADMIN[] = { "��������", "������ �ڵ� ����", "������ ���� ����", "�ϵ�뷮 �߰�", "������� ���� ����", "���� ���ε�", "���� ����", "���� �ٿ�ε�" };

const string MES_REQUEST_INPUT = "������ ��ȣ: ";
const string MES_RETRY = "�ٽ� �õ����ּ���.";
const string MES_ERR_INPUT = "�ùٸ��� ���� �Է��Դϴ�.";

// Auth
const string MES_AUTH_ID = "id: ";
const string MES_AUTH_PASS = "password: ";
const string MES_AUTH_IDENTN = "�ֹι�ȣ: ";
const string MES_AUTH_AUTH = "���ѷ���: ";
// Auth registration
const string MES_REGISTER_SUCCESS = "ȸ������ ��û�� �Ϸ�Ǿ����ϴ�.";
const string MES_RIGISTER_ERR_ID_LEN = "���̵�� 5�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_ID_EXISTS = "�̹� �����ϴ� ���̵��Դϴ�.";
const string MES_RIGISTER_ERR_PASS_LEN = "��й�ȣ�� 8�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_PASS_IDENTN = "��й�ȣ�� �ֹε�Ϲ�ȣ�� ������ �� �����ϴ�.";
const string MES_RIGISTER_ERR_IDNETN = "�ùٸ��� ���� �ֹε�Ϲ�ȣ�Դϴ�.";
const string MES_RIGISTER_ERR_AUTHLEVEL = "���ѷ����� R, W, RW �� �ϳ����� �մϴ�.";
// Auth admin login
const string MES_LOGIN_ADMIN_CODE = "������ �ڵ�: ";
const string MES_LOGIN_ADMIN_ERR = "������ �ڵ尡 ��ġ���� �ʽ��ϴ�.";
// Auth user login
const string MES_LOGIN_USER_ERR_ID = "�������� �ʴ� ���̵��Դϴ�.";
const string MES_LOGIN_USER_ERR_PASS = "�н����尡 ��ġ���� �ʽ��ϴ�.";

// Admin mode
const string MES_ADMIN_PEND_DECIDE = "���� ������ 1, ������ 2, ���ư��÷��� 0�� �Է����ּ���.";
const string MES_ADMIN_PEND_SUCCESS_APPROVE = "�ش� ������ ������ ���εǾ����ϴ�.";
const string MES_ADMIN_PEND_SUCCESS_REFUSE = "�ش� ������ ������ �����Ǿ����ϴ�.";
